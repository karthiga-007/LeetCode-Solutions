// Last updated: 9/11/2026, 10:06:42 AM
1int trap(int* height, int heightSize) {
2    int total = 0;
3    int l = 0, r = heightSize - 1; 
4    int lmax = 0, rmax = height[r];
5    
6    while (l < r) {
7        if (height[l] <= height[r]) {
8           
9            if (height[l] < lmax) {
10                total += lmax - height[l]; 
11            } else {
12                lmax = height[l];
13            }
14            l++; 
15        } else {
16           
17            if (height[r] < rmax) {
18                total += rmax - height[r]; 
19            } else {
20                rmax = height[r]; 
21            }
22            r--;
23        }
24    }
25    return total; 
26} 