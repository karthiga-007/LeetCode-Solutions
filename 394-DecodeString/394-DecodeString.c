// Last updated: 9/22/2026, 1:45:03 PM
1char* decodeString(char* s) {
2    int n = strlen(s);
3
4    int *numStack = malloc(n * sizeof(int));
5    char **strStack = malloc(n * sizeof(char*));
6
7    int top = -1;
8    int num = 0;
9
10    char *curr = malloc(10000);
11    curr[0] = '\0';
12
13    for(int i = 0; i < n; i++) {
14
15        // If digit
16        if(s[i] >= '0' && s[i] <= '9') {
17            num = num * 10 + (s[i] - '0');
18        }
19
20        // If '['
21        else if(s[i] == '[') {
22            top++;
23
24            numStack[top] = num;
25            strStack[top] = curr;
26
27            curr = malloc(10000);
28            curr[0] = '\0';
29
30            num = 0;
31        }
32
33        // If letter
34        else if(s[i] >= 'a' && s[i] <= 'z') {
35            int len = strlen(curr);
36            curr[len] = s[i];
37            curr[len + 1] = '\0';
38        }
39
40        // If ']'
41        else if(s[i] == ']') {
42            int repeat = numStack[top];
43            char *prev = strStack[top];
44
45            char *temp = malloc(10000);
46            temp[0] = '\0';
47
48            for(int j = 0; j < repeat; j++) {
49                strcat(temp, curr);
50            }
51
52            strcat(prev, temp);
53
54            free(temp);
55            free(curr);
56
57            curr = prev;
58            top--;
59        }
60    }
61
62    return curr;
63}