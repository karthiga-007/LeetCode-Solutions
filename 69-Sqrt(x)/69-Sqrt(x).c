// Last updated: 9/16/2026, 2:23:15 PM
1int compress(char* chars, int charsSize) {
2    int index = 0;
3
4    for (int i = 0; i < charsSize;) {
5        int c = 0;
6        char ch = chars[i];
7
8        // Count how many times ch occurs continuously
9        while (i < charsSize && chars[i] == ch) {
10            c++;
11            i++;
12        }
13
14        chars[index] = ch;
15        index++;
16        // Store count if
17        if (c > 1) {
18            int start = index;
19
20            // Write the count digits
21            while (c > 0) {
22                chars[index] = (c % 10) + '0';
23                index++;
24                c = c / 10;
25            }
26
27            // Reverse the digits
28            int left = start;
29            int right = index - 1;
30
31            while (left < right) {
32                char temp = chars[left];
33                chars[left] = chars[right];
34                chars[right] = temp;
35                left++;
36                right--;
37            }
38        }
39    }
40
41    return index;
42}