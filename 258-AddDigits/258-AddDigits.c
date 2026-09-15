// Last updated: 9/15/2026, 9:56:27 AM
1int addDigits(int num) {
2    while(num>=10){
3
4        int sum = 0;
5
6        while(num !=0){
7            sum = sum + num % 10;
8            num = num/ 10;
9        }
10      
11      num = sum;
12
13    }
14
15    return num;
16}