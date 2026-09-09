// Last updated: 9/9/2026, 9:54:46 AM
int addDigits(int num) {
    while(num >=10){
        int sum=0;


    while(num !=0){
        sum = sum + (num%10);
        num = num/10;
    }
    num = sum;
    }

    return num;
}