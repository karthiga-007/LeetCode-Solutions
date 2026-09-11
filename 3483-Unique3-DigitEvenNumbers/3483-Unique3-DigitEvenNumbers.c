// Last updated: 9/11/2026, 10:20:03 AM
1int totalNumbers(int* digits, int n) {
2    bool seen[1000] = {0};
3    int count = 0;
4    for (int i = 0; i < n; i++)
5        for (int j = 0; j < n; j++)
6            for (int k = 0; k < n; k++) {
7                if (i==j || j==k || i==k) continue;
8                if (digits[i]==0 || digits[k]%2) continue;
9                int num = digits[i]*100 + digits[j]*10 + digits[k];
10                if (!seen[num]) { seen[num] = 1; count++; }
11            }
12    return count;
13}