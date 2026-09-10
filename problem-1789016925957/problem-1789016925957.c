// Last updated: 9/10/2026, 10:38:45 AM
1char **fizzBuzz(int n, int* returnSize) {
2    *returnSize = n;
3    char **answer = malloc(n * sizeof(char *));
4    
5    for (int i = 1; i <= n; i++) {
6        answer[i - 1] = malloc(9);
7        if (i % 15 == 0) {
8            strcpy(answer[i - 1], "FizzBuzz");
9        } else if (i % 3 == 0) {
10            strcpy(answer[i - 1], "Fizz");
11        } else if (i % 5 == 0) {
12            strcpy(answer[i - 1], "Buzz");
13        } else {
14            sprintf(answer[i - 1], "%d", i);
15        }
16    }
17    
18    return answer;
19}