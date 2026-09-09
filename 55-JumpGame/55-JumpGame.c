// Last updated: 9/9/2026, 9:21:58 AM
1int addDigits(int num) {
2    while(num >=10){
3        int sum=0;
4
5
6    while(num !=0){
7        sum = sum + (num%10);
8        num = num/10;
9    }
10    num = sum;
11    }
12
13    return num;
14}