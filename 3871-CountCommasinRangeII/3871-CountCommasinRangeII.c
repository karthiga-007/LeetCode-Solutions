// Last updated: 9/9/2026, 11:47:43 AM
1long long countCommas(long long n) {
2    long long total_commas = 0;
3    long long threshold = 1000;
4    
5    while (n >= threshold) {
6        total_commas += (n - threshold + 1);
7        if (threshold > 9223372036854775807LL / 1000LL) break;
8        threshold *= 1000;
9    }
10    
11    return total_commas;
12}