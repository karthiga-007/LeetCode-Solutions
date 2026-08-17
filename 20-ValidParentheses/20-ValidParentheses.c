// Last updated: 8/17/2026, 7:29:40 PM
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

bool isValid(char* s) {
    int n = strlen(s);
    char* stack = (char*)malloc(n * sizeof(char));
    int top = -1;

    for (int i = 0; i < n; i++) {
        char ch = s[i];

        if (ch == '(' || ch == '{' || ch == '[') {
            stack[++top] = ch;
        } else {
            if (top == -1) {
                free(stack);
                return false;
            }

            char t = stack[top--];

            if ((ch == ')' && t != '(') ||
                (ch == '}' && t != '{') ||
                (ch == ']' && t != '[')) {
                free(stack);
                return false;
            }
        }
    }

    bool result = (top == -1);
    free(stack);
    return result;
}