// Last updated: 9/18/2026, 8:34:51 AM
1bool rotateString(char* s, char* goal) {
2    if(strlen(s) != strlen(goal))
3    return false;
4
5    char temp[2000];
6    strcpy(temp,s);
7    strcat(temp,s);
8
9    if(strstr(temp,goal)!= NULL)
10    return true;
11
12    return false;
13}