// Last updated: 9/15/2026, 1:57:52 PM
1bool canConstruct(char* r, char* m) {
2    int fr1[256] = {0}, fr2[256]={0};
3    for(int i=0; i < strlen(r); i++)
4    fr1[r[i]]++;
5    for(int i=0; i < strlen(m);i++)
6    fr2[m[i]]++;
7
8    for(int i=0; i < strlen(r);i++){
9        if(fr1[r[i]]!= fr2[r[i]]&&fr1[r[i]]>fr2[r[i]])
10        return false;
11    }
12    return true;
13}