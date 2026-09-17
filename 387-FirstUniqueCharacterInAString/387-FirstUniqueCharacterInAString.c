// Last updated: 9/17/2026, 1:33:58 PM
int firstUniqChar(char* s) {
    int fr[256]={0};
    for(int i=0; i < strlen(s); i++)
    fr[s[i]]++;
    for(int i=0; i < strlen(s); i++){
        if(fr[s[i]]==1)
        return i;
    }
    return -1;
}