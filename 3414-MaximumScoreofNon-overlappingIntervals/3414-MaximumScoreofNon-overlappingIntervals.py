# Last updated: 9/12/2026, 2:11:08 PM
1import bisect
2
3class Solution(object):
4    def maximumWeight(self, I):
5        A = sorted((l, r, w, i) for i, (l, r, w) in enumerate(I))
6        S, n = [x[0] for x in A], len(A)
7        dp = [[(0, ())] * 5 for _ in range(n + 1)]
8
9        for i in range(n - 1, -1, -1):
10            l, r, w, id = A[i]
11            nxt = bisect.bisect_right(S, r)
12            for k in range(1, 5):
13                bw, bids = dp[i + 1][k]
14                pw, pids = dp[nxt][k - 1]
15                tw, tids = pw + w, tuple(sorted(pids + (id,)))
16                dp[i][k] = (tw, tids) if tw > bw or (tw == bw and (not bids or tids < bids)) else (bw, bids)
17
18        return list(dp[0][4][1])