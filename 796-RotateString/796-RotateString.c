// Last updated: 9/9/2026, 9:16:02 AM
bool rotateString(char* s, char* goal){
    int len_s = strlen(s);
    int len_goal = strlen(goal);

    // If lengths differ, rotation is not possible
    if (len_s != len_goal)
        return false;

    // Create a new string containing s + s
    char* temp = (char*)malloc(2 * len_s + 1);
    if (temp == NULL)
        return false;

    strcpy(temp, s);
    strcat(temp, s);

    // Check if goal is a substring of s + s
    bool result = strstr(temp, goal) != NULL;

    free(temp);
    return result;
}
