// Last updated: 9/17/2026, 1:33:22 PM
int numberOfSubstrings(char* s) {
    int j = 0;
    int count[3] = {0};
    int res = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;

        while (count[0] > 0 && count[1] > 0 && count[2] > 0) {
            res += strlen(s) - i;
            count[s[j] - 'a']--;
            j++;
        }
    }

    return res;
}