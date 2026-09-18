// Last updated: 9/18/2026, 9:18:24 AM
1bool repeatedSubstringPattern(char* s) {
2    int n=strlen(s);
3    char check[2*n+1];
4    strcpy(check,s);
5    strcat(check,s);
6    check[2*n-1]='\0';
7    return strstr(check+1,s);
8}