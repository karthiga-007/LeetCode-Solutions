// Last updated: 9/17/2026, 1:32:56 PM
long long countCommas(long long n) {
    long long total_commas = 0;
    long long threshold = 1000;
    
    while (n >= threshold) {
        total_commas += (n - threshold + 1);
        if (threshold > 9223372036854775807LL / 1000LL) break;
        threshold *= 1000;
    }
    
    return total_commas;
}