#include<stdio.h>
#include<string.h>

int mod = 10000007;
int dp[10007];
int a, b, c, d, e, f;

int fn(int n) {
    if (dp[n] != -1) return dp[n];
    if (n == 0) return a;
    if (n == 1) return b;
    if (n == 2) return c;
    if (n == 3) return d;
    if (n == 4) return e;
    if (n == 5) return f;
    return dp[n] = (fn(n-1) % mod + fn(n-2) % mod + fn(n-3) % mod + fn(n-4) % mod + fn(n-5) % mod + fn(n-6) % mod) % mod;
}

int main() {
    int n, cases;
    scanf("%d", &cases);
    for (int caseno = 1; caseno <= cases; ++caseno) {
        memset(dp , -1, sizeof dp);
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %d: %d\n", caseno, fn(n % mod) % mod);
    }
    return 0;
}