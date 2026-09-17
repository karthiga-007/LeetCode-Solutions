// Last updated: 9/17/2026, 1:33:53 PM
int longestSubstring(char* s, int k) {
    int res = 0;

    for(int t = 1; t <= 26; t++) {
        int fr[256] = {0};
        int i = 0, j = 0;
        int unq = 0, atk = 0;

        while(j < strlen(s)) {

            if(fr[s[j]] == 0)
                unq++;

            fr[s[j]]++;

            if(fr[s[j]] == k)
                atk++;

            while(unq > t) {
                if(fr[s[i]] == k)
                    atk--;

                fr[s[i]]--;

                if(fr[s[i]] == 0)
                    unq--;

                i++;
            }

            if(unq == t && atk == t) {
                int len = j - i + 1;

                if(len > res)
                    res = len;
            }

            j++;
        }
    }

    return res;
}