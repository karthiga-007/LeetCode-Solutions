// Last updated: 9/15/2026, 11:16:11 AM
1
2#include <stdlib.h>
3#include <string.h>
4#include <stdio.h>
5
6#define TABLE_SIZE 200003
7
8typedef struct Node {
9    char *key;
10    int group;
11    struct Node *next;
12} Node;
13
14unsigned long hashKey(char *key)
15{
16    unsigned long hash = 5381;
17
18    for (int i = 0; key[i] != '\0'; i++)
19        hash = ((hash << 5) + hash) + key[i];
20
21    return hash % TABLE_SIZE;
22}
23
24char*** groupAnagrams(char** strs, int strsSize,
25                      int* returnSize, int** returnColumnSizes)
26{
27    Node** table = calloc(TABLE_SIZE, sizeof(Node*));
28
29    char*** result = malloc(strsSize * sizeof(char**));
30    int* columnSizes = calloc(strsSize, sizeof(int));
31
32    int groups = 0;
33
34    for (int i = 0; i < strsSize; i++)
35    {
36        int count[26] = {0};
37
38        // Count each letter
39        for (int j = 0; strs[i][j] != '\0'; j++)
40            count[strs[i][j] - 'a']++;
41
42        // Create the key
43        char key[1001];
44        int pos = 0;
45
46        for (int j = 0; j < 26; j++)
47        {
48            pos += sprintf(key + pos, "#%d", count[j]);
49        }
50
51        // Find the hash
52        unsigned long h = hashKey(key);
53
54        Node* current = table[h];
55        int group = -1;
56
57        // Search for existing key
58        while (current != NULL)
59        {
60            if (strcmp(current->key, key) == 0)
61            {
62                group = current->group;
63                break;
64            }
65
66            current = current->next;
67        }
68
69        // New group
70        if (group == -1)
71        {
72            group = groups++;
73
74            result[group] = malloc(sizeof(char*));
75            result[group][0] = strs[i];
76
77            columnSizes[group] = 1;
78
79            Node* newNode = malloc(sizeof(Node));
80
81            newNode->key = malloc(strlen(key) + 1);
82            strcpy(newNode->key, key);
83
84            newNode->group = group;
85            newNode->next = table[h];
86
87            table[h] = newNode;
88        }
89        // Existing group
90        else
91        {
92            int size = columnSizes[group];
93
94            result[group] = realloc(
95                result[group],
96                (size + 1) * sizeof(char*)
97            );
98
99            result[group][size] = strs[i];
100
101            columnSizes[group]++;
102        }
103    }
104
105    // Free hash table
106    for (int i = 0; i < TABLE_SIZE; i++)
107    {
108        Node* current = table[i];
109
110        while (current != NULL)
111        {
112            Node* temp = current;
113            current = current->next;
114
115            free(temp->key);
116            free(temp);
117        }
118    }
119
120    free(table);
121
122    *returnSize = groups;
123    *returnColumnSizes = columnSizes;
124
125    return result;
126}
127
128