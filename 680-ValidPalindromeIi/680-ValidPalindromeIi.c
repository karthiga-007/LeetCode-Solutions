// Last updated: 9/17/2026, 1:33:39 PM
bool isPalindrome(char s[], int left, int right)
{
    while (left < right)
    {
        if (s[left] != s[right])
            return false;

        left++;
        right--;
    }

    return true;
}

bool validPalindrome(char s[])
{
    int left = 0;
    int right = strlen(s) - 1;

    while (left < right)
    {
        if (s[left] != s[right])
        {
            if (isPalindrome(s, left + 1, right))
                return true;

            if (isPalindrome(s, left, right - 1))
                return true;

            return false;
        }

        left++;
        right--;
    }

    return true;
}