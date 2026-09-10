// Last updated: 9/10/2026, 9:19:18 AM
1bool isPalindrome(int x) {
2
3    int og = x;
4    long long reverse = 0;
5    if(x < 0){
6        return false;
7    }
8
9while(x !=0){
10      int num = x%10;
11      reverse = reverse*10+num;
12      x=x/10;
13    }
14    if(reverse == og){
15        return true;
16    }
17    return 0;
18}