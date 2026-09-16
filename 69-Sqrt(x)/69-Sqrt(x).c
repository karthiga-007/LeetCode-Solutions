// Last updated: 9/16/2026, 10:01:21 AM
1bool isPalindrome(char s[], int left, int right)
2{
3    while (left < right)
4    {
5        if (s[left] != s[right])
6            return false;
7
8        left++;
9        right--;
10    }
11
12    return true;
13}
14
15bool validPalindrome(char s[])
16{
17    int left = 0;
18    int right = strlen(s) - 1;
19
20    while (left < right)
21    {
22        if (s[left] != s[right])
23        {
24            if (isPalindrome(s, left + 1, right))
25                return true;
26
27            if (isPalindrome(s, left, right - 1))
28                return true;
29
30            return false;
31        }
32
33        left++;
34        right--;
35    }
36
37    return true;
38}