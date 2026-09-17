// Last updated: 9/17/2026, 1:33:43 PM
char* frequencySort(char* s) {
    char*res=malloc(strlen(s)+1*sizeof(char));
    int fr[256]={0};
  
  for(int i=0;i<strlen(s);i++)
  fr[s[i]]++;
  
   int index=0;
    for(int i=strlen(s);i>=1;i--)
    {
        for(int j=0;j<256;j++)
        {
            if(fr[j]==i)
            {
                for(int k=0;k<i;k++)
                {
                    res[index++]=(char)j;
                }
            }
        }
    }
    res[index]='\0';
    return res;

}