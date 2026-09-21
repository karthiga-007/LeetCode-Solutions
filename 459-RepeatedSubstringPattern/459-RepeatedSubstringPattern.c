// Last updated: 9/21/2026, 10:44:42 AM
bool repeatedSubstringPattern(char* s) {
    int n=strlen(s);
    char check[2*n+1];
    strcpy(check,s);
    strcat(check,s);
    check[2*n-1]='\0';
    return strstr(check+1,s);
}