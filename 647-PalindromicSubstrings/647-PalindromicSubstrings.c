// Last updated: 9/21/2026, 10:44:35 AM
int countSubstrings(char* s) {
    int n = strlen(s);

    if (n < 2)
        return n;

    int c = 0;

    for (int i = 0; i < n; i++) {

        // Odd length palindromes
        int lef = i, rgt = i;

        while (lef >= 0 && rgt < n && s[lef] == s[rgt]) {
            c++;
            lef--;
            rgt++;
        }

        // Even length palindromes
        lef = i;
        rgt = i + 1;

        while (lef >= 0 && rgt < n && s[lef] == s[rgt]) {
            c++;
            lef--;
            rgt++;
        }
    }

    return c;
}