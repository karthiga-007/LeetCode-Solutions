// Last updated: 9/21/2026, 10:44:18 AM
#define BASE 256ULL

typedef unsigned long long ull;

int check(char *s, int n, int len, int *start)
{
    if (len == 0)
    {
        *start = 0;
        return 1;
    }

    ull power = 1;

    for (int i = 1; i < len; i++)
        power *= BASE;

    ull hash = 0;

    for (int i = 0; i < len; i++)
        hash = hash * BASE + (unsigned char)s[i];


    int count = n - len + 1;

    typedef struct
    {
        ull hash;
        int index;
    } Pair;

    Pair *arr = malloc(count * sizeof(Pair));

    if (arr == NULL)
        return 0;

    arr[0].hash = hash;
    arr[0].index = 0;

    for (int i = 1; i < count; i++)
    {
        hash -= (ull)(unsigned char)s[i - 1] * power;
        hash = hash * BASE + (unsigned char)s[i + len - 1];

        arr[i].hash = hash;
        arr[i].index = i;
    }
    int compare(const void *a, const void *b)
    {
        ull x = ((Pair *)a)->hash;
        ull y = ((Pair *)b)->hash;

        if (x < y) return -1;
        if (x > y) return 1;
        return 0;
    }

    qsort(arr, count, sizeof(Pair), compare);
    for (int i = 1; i < count; i++)
    {
        if (arr[i].hash == arr[i - 1].hash)
        {
            int p1 = arr[i].index;
            int p2 = arr[i - 1].index;
            if (strncmp(s + p1, s + p2, len) == 0)
            {
                *start = p1;

                free(arr);
                return 1;
            }
        }
    }

    free(arr);
    return 0;
}

char* longestDupSubstring(char* s)
{
    int n = strlen(s);

    int low = 1;
    int high = n - 1;

    int bestStart = 0;
    int bestLen = 0;

    while (low <= high)
    {
        int len = low + (high - low) / 2;
        int start;
        if (check(s, n, len, &start))
        {
            bestLen = len;
            bestStart = start;
            low = len + 1;
        }
        else
        {
            high = len - 1;
        }
    }

    char *result = malloc(bestLen + 1);

    if (result == NULL)
        return NULL;

    strncpy(result, s + bestStart, bestLen);
    result[bestLen] = '\0';

    return result;
}