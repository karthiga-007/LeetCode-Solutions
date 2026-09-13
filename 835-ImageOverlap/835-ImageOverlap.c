// Last updated: 9/13/2026, 5:44:09 PM
1int largestOverlap(int** img1, int img1Size, int* img1ColSize, int** img2, int img2Size, int* img2ColSize) {
2    int n = img1Size;
3    int result = 0;
4
5    for (int dx = -n + 1; dx < n; dx++) {
6        for (int dy = -n + 1; dy < n; dy++) {
7            int score = 0;
8
9            for (int i = 0; i < n; i++) {
10                for (int j = 0; j < n; j++) {
11                    int newI = i + dx;
12                    int newJ = j + dy;
13
14                    if (0 <= newI && newI < n &&
15                        0 <= newJ && newJ < n) {
16                        score += img1[newI][newJ] & img2[i][j];
17                    }
18                }
19            }
20
21            if (score > result) {
22                result = score;
23            }
24        }
25    }
26
27    return result;
28}