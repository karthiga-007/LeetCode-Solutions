// Last updated: 9/15/2026, 1:29:01 PM
1int firstUniqChar(char* s) {
2    int fr[256]={0};
3    for(int i=0; i < strlen(s); i++)
4    fr[s[i]]++;
5    for(int i=0; i < strlen(s); i++){
6        if(fr[s[i]]==1)
7        return i;
8    }
9    return -1;
10}