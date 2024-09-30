#include <stdio.h>
#include <math.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++) {
        long long m;
        scanf("%lld", &m);

        long long n = sqrt(2 * m);
        while (n * (n + 1) * (2 * n + 1) / 6 < m) {
            n++;
        }

        printf("Case #%d: %lld\n", i, n);
    }

    return 0;
}
