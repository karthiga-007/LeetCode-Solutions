// Last updated: 9/14/2026, 1:28:23 PM
1bool isRectangleOverlap(int* rec1, int rec1Size, int* rec2, int rec2Size) {
2    if (rec1[0] < rec2[2] && rec2[0] < rec1[2] &&
3        rec1[1] < rec2[3] && rec2[1] < rec1[3]) {
4        return true;
5    }
6
7    return false;
8}