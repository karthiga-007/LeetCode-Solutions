// Last updated: 9/17/2026, 1:33:54 PM
int longestPalindrome(char* s) {
    int fr[256] = {0};

    for(int i = 0; i < strlen(s); i++)
        fr[s[i]]++;

    int len = 0;
    int odd = 0;

    for(int i = 0; i < 256; i++) {
        if(fr[i] % 2 == 0) {
            len += fr[i];
        }
        else {
            len += fr[i] - 1;
            odd = 1;
        }
    }

    if(odd == 1)
        len++;

    return len;
}