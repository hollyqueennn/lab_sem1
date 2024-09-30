#include <stdio.h>
#include <string.h>
#include <math.h>

#define maxn 18
#define maxm 1000000000

int T, N, M;
int dp[1 << maxn];
struct Food {
    int h, w;
}f[maxn];

int main() {
    int i, j, k;
    scanf("%d", &T);
    for (i = 1; i <= T; i++) {
        scanf("%d%d", &N, &M);
        for (j = 0; j < N; j++) {
            scanf("%d%d", &f[j].h, &f[j].w);
        }
        memset(dp, 0x3f, sizeof(dp));
        dp[0] = 0;
        for (j = 0; j < (1 << N); j++) {
            for (k = 0; k < N; k++) {
                if (j & (1 << k)) {
                    dp[j] = fmin(dp[j], dp[j ^ (1 << k)] + f[k].w);
                }
            }
        }
        int ans = maxm;
        for (j = 0; j < (1 << N); j++) {
            int h = 0;
            for (k = 0; k < N; k++) {
                if (j & (1 << k)) {
                    h += f[k].h;
                }
            }
            if (h >= M) {
                ans = fmin(ans, dp[j]);
            }
        }
        if (ans == maxm) {
            printf("Case #%d: Impossible\n", i);
        }
        else {
            printf("Case #%d: %d\n", i, ans);
        }
    }
    return 0;
}
