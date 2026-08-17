// Last updated: 8/17/2026, 7:29:06 PM
int lengthOfLastWord(char* s) {
    int i = 0, count = 0;

    // Move to the end of the string
    while (s[i] != '\0') {
        i++;
    }

    // Skip trailing spaces
    i--;
    while (i >= 0 && s[i] == ' ') {
        i--;
    }

    // Count the last word
    while (i >= 0 && s[i] != ' ') {
        count++;
        i--;
    }

    return count;
}