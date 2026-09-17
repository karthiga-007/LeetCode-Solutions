// Last updated: 9/17/2026, 1:35:03 PM

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#define TABLE_SIZE 200003

typedef struct Node {
    char *key;
    int group;
    struct Node *next;
} Node;

unsigned long hashKey(char *key)
{
    unsigned long hash = 5381;

    for (int i = 0; key[i] != '\0'; i++)
        hash = ((hash << 5) + hash) + key[i];

    return hash % TABLE_SIZE;
}

char*** groupAnagrams(char** strs, int strsSize,
                      int* returnSize, int** returnColumnSizes)
{
    Node** table = calloc(TABLE_SIZE, sizeof(Node*));

    char*** result = malloc(strsSize * sizeof(char**));
    int* columnSizes = calloc(strsSize, sizeof(int));

    int groups = 0;

    for (int i = 0; i < strsSize; i++)
    {
        int count[26] = {0};

        // Count each letter
        for (int j = 0; strs[i][j] != '\0'; j++)
            count[strs[i][j] - 'a']++;

        // Create the key
        char key[1001];
        int pos = 0;

        for (int j = 0; j < 26; j++)
        {
            pos += sprintf(key + pos, "#%d", count[j]);
        }

        // Find the hash
        unsigned long h = hashKey(key);

        Node* current = table[h];
        int group = -1;

        // Search for existing key
        while (current != NULL)
        {
            if (strcmp(current->key, key) == 0)
            {
                group = current->group;
                break;
            }

            current = current->next;
        }

        // New group
        if (group == -1)
        {
            group = groups++;

            result[group] = malloc(sizeof(char*));
            result[group][0] = strs[i];

            columnSizes[group] = 1;

            Node* newNode = malloc(sizeof(Node));

            newNode->key = malloc(strlen(key) + 1);
            strcpy(newNode->key, key);

            newNode->group = group;
            newNode->next = table[h];

            table[h] = newNode;
        }
        // Existing group
        else
        {
            int size = columnSizes[group];

            result[group] = realloc(
                result[group],
                (size + 1) * sizeof(char*)
            );

            result[group][size] = strs[i];

            columnSizes[group]++;
        }
    }

    // Free hash table
    for (int i = 0; i < TABLE_SIZE; i++)
    {
        Node* current = table[i];

        while (current != NULL)
        {
            Node* temp = current;
            current = current->next;

            free(temp->key);
            free(temp);
        }
    }

    free(table);

    *returnSize = groups;
    *returnColumnSizes = columnSizes;

    return result;
}

