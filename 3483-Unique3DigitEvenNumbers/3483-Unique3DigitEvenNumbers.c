// Last updated: 9/17/2026, 1:32:59 PM
int totalNumbers(int* digits, int n) {
    bool seen[1000] = {0};
    int count = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            for (int k = 0; k < n; k++) {
                if (i==j || j==k || i==k) continue;
                if (digits[i]==0 || digits[k]%2) continue;
                int num = digits[i]*100 + digits[j]*10 + digits[k];
                if (!seen[num]) { seen[num] = 1; count++; }
            }
    return count;
}