// Last updated: 9/18/2026, 11:43:03 AM
1#define BASE 256ULL
2
3typedef unsigned long long ull;
4
5int check(char *s, int n, int len, int *start)
6{
7    if (len == 0)
8    {
9        *start = 0;
10        return 1;
11    }
12
13    ull power = 1;
14
15    for (int i = 1; i < len; i++)
16        power *= BASE;
17
18    ull hash = 0;
19
20    for (int i = 0; i < len; i++)
21        hash = hash * BASE + (unsigned char)s[i];
22
23
24    int count = n - len + 1;
25
26    typedef struct
27    {
28        ull hash;
29        int index;
30    } Pair;
31
32    Pair *arr = malloc(count * sizeof(Pair));
33
34    if (arr == NULL)
35        return 0;
36
37    arr[0].hash = hash;
38    arr[0].index = 0;
39
40    for (int i = 1; i < count; i++)
41    {
42        hash -= (ull)(unsigned char)s[i - 1] * power;
43        hash = hash * BASE + (unsigned char)s[i + len - 1];
44
45        arr[i].hash = hash;
46        arr[i].index = i;
47    }
48    int compare(const void *a, const void *b)
49    {
50        ull x = ((Pair *)a)->hash;
51        ull y = ((Pair *)b)->hash;
52
53        if (x < y) return -1;
54        if (x > y) return 1;
55        return 0;
56    }
57
58    qsort(arr, count, sizeof(Pair), compare);
59    for (int i = 1; i < count; i++)
60    {
61        if (arr[i].hash == arr[i - 1].hash)
62        {
63            int p1 = arr[i].index;
64            int p2 = arr[i - 1].index;
65            if (strncmp(s + p1, s + p2, len) == 0)
66            {
67                *start = p1;
68
69                free(arr);
70                return 1;
71            }
72        }
73    }
74
75    free(arr);
76    return 0;
77}
78
79char* longestDupSubstring(char* s)
80{
81    int n = strlen(s);
82
83    int low = 1;
84    int high = n - 1;
85
86    int bestStart = 0;
87    int bestLen = 0;
88
89    while (low <= high)
90    {
91        int len = low + (high - low) / 2;
92        int start;
93        if (check(s, n, len, &start))
94        {
95            bestLen = len;
96            bestStart = start;
97            low = len + 1;
98        }
99        else
100        {
101            high = len - 1;
102        }
103    }
104
105    char *result = malloc(bestLen + 1);
106
107    if (result == NULL)
108        return NULL;
109
110    strncpy(result, s + bestStart, bestLen);
111    result[bestLen] = '\0';
112
113    return result;
114}