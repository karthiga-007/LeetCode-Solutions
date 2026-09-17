// Last updated: 9/17/2026, 1:33:46 PM
int compress(char* chars, int charsSize) {
    int index = 0;

    for (int i = 0; i < charsSize;) {
        int c = 0;
        char ch = chars[i];

        // Count how many times ch occurs continuously
        while (i < charsSize && chars[i] == ch) {
            c++;
            i++;
        }

        chars[index] = ch;
        index++;
        // Store count if
        if (c > 1) {
            int start = index;

            // Write the count digits
            while (c > 0) {
                chars[index] = (c % 10) + '0';
                index++;
                c = c / 10;
            }

            // Reverse the digits
            int left = start;
            int right = index - 1;

            while (left < right) {
                char temp = chars[left];
                chars[left] = chars[right];
                chars[right] = temp;
                left++;
                right--;
            }
        }
    }

    return index;
}