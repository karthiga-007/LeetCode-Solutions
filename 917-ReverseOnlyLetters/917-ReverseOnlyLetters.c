// Last updated: 9/17/2026, 1:33:28 PM
bool isLetter(char c)
{
    if (c >= 'a' && c <= 'z')
        return true;
    else if (c >= 'A' && c <= 'Z')
        return true;

    return false;
}

char* reverseOnlyLetters(char* s)
{
    int left = 0;
    int right = strlen(s) - 1;

    while (left < right)
    {
        if (!isLetter(s[left]))
            left++;
        else if (!isLetter(s[right]))
            right--;
        else
        {
            char temp = s[left];
            s[left] = s[right];
            s[right] = temp;

            left++;
            right--;
        }
    }

    return s;
}