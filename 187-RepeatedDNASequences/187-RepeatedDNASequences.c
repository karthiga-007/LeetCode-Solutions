// Last updated: 9/18/2026, 1:41:07 PM
1
2int compare(const void *a, const void *b) {
3    return *(int*) a - *(int*) b;
4}
5
6int val(char c) {
7    if (c == 'A') return 0;
8    if (c == 'C') return 1;
9    if (c == 'G') return 2;
10    if (c == 'T') return 3;
11    return -1;           
12}
13
14void decode(char *s, int val) {
15    int i, rem;
16    s[10] = '\0';
17    for (i = 9; i >= 0; --i) {
18        rem = val % 4;
19        val /= 4;
20        if (rem == 0) s[i] = 'A';
21        if (rem == 1) s[i] = 'C';
22        if (rem == 2) s[i] = 'G';
23        if (rem == 3) s[i] = 'T';
24    }
25}
26
27char ** findRepeatedDnaSequences(char * s, int* returnSize){
28    char **res;
29    int stack[100000], sp=0, sl = strlen(s), i, j, k, code = 0;
30    int stack2[10000], sp2=0;
31    if (strlen(s) < 10) {
32        *returnSize = 0;
33        return NULL;
34    }
35    for (i = 0; i < 10; ++i) {
36        code = 4*code + val(s[i]);
37    }
38    stack[sp++] = code;
39    for (i = 0; i < sl-10; ++i) {
40        code = (code & 0x3ffff) * 4 + val(s[i+10]);
41        stack[sp++] = code;
42    }
43    qsort(stack, sp, sizeof(int), compare);
44	for (i = 0; i < sp-1; ++i) {
45		if (stack[i] == stack[i+1]) {
46			stack2[sp2++] = stack[i];
47			for (j = i+1; j<sp && stack[i] == stack[j]; ++j);
48			i = j-1;
49		}
50	}
51    res = malloc(sp2 * sizeof(char*));
52    for (i = 0; i < sp2; ++i) {
53        res[i] = malloc(11 * sizeof(char));
54        decode(res[i], stack2[i]);
55    }
56    *returnSize = sp2;
57    return res;
58}