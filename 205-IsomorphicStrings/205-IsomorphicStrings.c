// Last updated: 9/15/2026, 11:52:42 AM
1char* frequencySort(char* s) {
2    char*res=malloc(strlen(s)+1*sizeof(char));
3    int fr[256]={0};
4  
5  for(int i=0;i<strlen(s);i++)
6  fr[s[i]]++;
7  
8   int index=0;
9    for(int i=strlen(s);i>=1;i--)
10    {
11        for(int j=0;j<256;j++)
12        {
13            if(fr[j]==i)
14            {
15                for(int k=0;k<i;k++)
16                {
17                    res[index++]=(char)j;
18                }
19            }
20        }
21    }
22    res[index]='\0';
23    return res;
24
25}