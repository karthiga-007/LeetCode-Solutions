// Last updated: 9/9/2026, 9:15:38 AM
int maxDistance(int* colors, int colorsSize) {
    int dis = 0;
    for (int x = 0; x < colorsSize; x++) {
        int y = colors[x];
        if (y != colors[0]) {
            if (x > dis) 
                dis = x;
        }
        if (y != colors[colorsSize - 1]) {
            int dist = colorsSize - 1 - x;
            if (dist > dis) 
                dis = dist;
        }
    }
    return dis;
}