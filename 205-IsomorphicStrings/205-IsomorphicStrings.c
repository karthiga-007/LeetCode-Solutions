// Last updated: 9/15/2026, 9:55:12 AM
1bool isIsomorphic(char* s, char* t) {
2    char m1[256] = {0};
3    char m2[256] = {0};
4
5    if(strlen(s) != strlen(t)){
6        return false;
7    }
8
9    for(int i = 0; i < strlen(s); i++){
10        if(m1[s[i]] != m2[t[i]]){
11            return false;
12        }
13        m1[s[i]] = i + 1;
14        m2[t[i]] = i + 1;
15    }
16    return true;
17}