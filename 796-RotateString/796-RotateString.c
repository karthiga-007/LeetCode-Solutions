// Last updated: 9/18/2026, 10:16:56 AM
1int strStr(char* haystack, char* needle) {
2    int n=strlen(haystack),m=strlen(needle);
3    for(int i=0; i <=n-m;i++){
4        int j=0;
5        while(j<m&&haystack[i+j]==needle[j]){
6            j++;
7        }
8        if(j==m)
9        return i;
10    }
11     return -1;
12}