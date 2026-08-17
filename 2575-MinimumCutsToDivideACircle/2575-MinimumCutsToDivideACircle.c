// Last updated: 8/17/2026, 7:26:48 PM

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
