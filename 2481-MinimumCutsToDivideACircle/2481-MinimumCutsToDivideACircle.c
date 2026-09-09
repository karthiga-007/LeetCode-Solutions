// Last updated: 9/9/2026, 9:15:05 AM

  int numberOfCuts(int n) {
    if (n == 1) {
        return 0;
    }
    
    if (n % 2 == 0) {
        return n / 2;
    } else {
        return n;
    }
}  
