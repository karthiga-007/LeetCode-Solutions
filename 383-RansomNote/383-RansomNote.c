// Last updated: 9/17/2026, 1:34:01 PM
bool canConstruct(char* r, char* m) {
    int fr1[256] = {0}, fr2[256]={0};
    for(int i=0; i < strlen(r); i++)
    fr1[r[i]]++;
    for(int i=0; i < strlen(m);i++)
    fr2[m[i]]++;

    for(int i=0; i < strlen(r);i++){
        if(fr1[r[i]]!= fr2[r[i]]&&fr1[r[i]]>fr2[r[i]])
        return false;
    }
    return true;
}