// Last updated: 9/17/2026, 1:33:25 PM
int balancedString(char* s) {
    int fr[256] = {0};

    for (int i = 0; i < strlen(s); i++) {
        fr[s[i]]++;
    }

    int req = strlen(s) / 4;

    int extraQ = fr['Q'] - req;
    int extraW = fr['W'] - req;
    int extraE = fr['E'] - req;
    int extraR = fr['R'] - req;

    if (extraQ <= 0 && extraW <= 0 &&
        extraE <= 0 && extraR <= 0) {
        return 0;
    }

    int j = 0;
    int minlen = strlen(s);

    for (int i = 0; i < strlen(s); i++) {

        fr[s[i]]--;

        while (fr['Q'] <= req &&
               fr['W'] <= req &&
               fr['E'] <= req &&
               fr['R'] <= req) {

            if (i - j + 1 < minlen) {
                minlen = i - j + 1;
            }

            fr[s[j]]++;
            j++;
        }
    }

    return minlen;
}