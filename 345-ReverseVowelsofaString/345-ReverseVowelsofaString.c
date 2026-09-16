// Last updated: 9/16/2026, 11:08:21 AM
1bool isLetter(char c)
2{
3    if (c >= 'a' && c <= 'z')
4        return true;
5    else if (c >= 'A' && c <= 'Z')
6        return true;
7
8    return false;
9}
10
11char* reverseOnlyLetters(char* s)
12{
13    int left = 0;
14    int right = strlen(s) - 1;
15
16    while (left < right)
17    {
18        if (!isLetter(s[left]))
19            left++;
20        else if (!isLetter(s[right]))
21            right--;
22        else
23        {
24            char temp = s[left];
25            s[left] = s[right];
26            s[right] = temp;
27
28            left++;
29            right--;
30        }
31    }
32
33    return s;
34}