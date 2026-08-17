# Last updated: 8/17/2026, 7:31:01 PM
class Solution:
    def longestPalindrome(self, s):
        n = len(s)
        start, max_len = 0, 1

        for i in range(n):
            # Odd length
            l, r = i, i
            while l >= 0 and r < n and s[l] == s[r]:
                if (r - l + 1) > max_len:
                    start = l
                    max_len = r - l + 1
                l -= 1
                r += 1

            # Even length
            l, r = i, i + 1
            while l >= 0 and r < n and s[l] == s[r]:
                if (r - l + 1) > max_len:
                    start = l
                    max_len = r - l + 1
                l -= 1
                r += 1

        return s[start:start + max_len]