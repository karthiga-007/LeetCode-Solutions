// Last updated: 8/17/2026, 7:27:11 PM
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
