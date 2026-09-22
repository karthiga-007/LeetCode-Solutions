// Last updated: 9/22/2026, 11:54:18 AM
1int compareVersion(char* version1, char* version2) {
2    int i = 0, j = 0;
3
4    while(version1[i] != '\0' || version2[j] != '\0') {
5        int num1 = 0;
6        int num2 = 0;
7
8        // Get number from version1
9        while(version1[i] != '.' && version1[i] != '\0') {
10            num1 = num1 * 10 + (version1[i] - '0');
11            i++;
12        }
13
14        // Get number from version2
15        while(version2[j] != '.' && version2[j] != '\0') {
16            num2 = num2 * 10 + (version2[j] - '0');
17            j++;
18        }
19
20        // Compare
21        if(num1 < num2)
22            return -1;
23
24        if(num1 > num2)
25            return 1;
26
27        // Skip '.'
28        if(version1[i] == '.')
29            i++;
30
31        if(version2[j] == '.')
32            j++;
33    }
34
35    return 0;
36}