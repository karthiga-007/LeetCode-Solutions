// Last updated: 8/17/2026, 7:27:06 PM
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