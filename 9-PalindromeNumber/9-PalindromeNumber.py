# Last updated: 8/17/2026, 7:30:36 PM
class Solution:
    def isPalindrome(self, x):
        # Negative numbers are not palindrome
        if x < 0 or (x % 10 == 0 and x != 0):
            return False

        rev = 0
        while x > rev:
            digit = x % 10
            rev = rev * 10 + digit
            x //= 10

        # For even digits: x == rev
        # For odd digits: x == rev // 10
        return x == rev or x == rev // 10
        