#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int n;
    scanf("%d", &n);

    printf("0\n");
    for(ll k = 2; k <= n; k++)
    {
        ll ans = (((k*k) * ((k*k) - 1))/2) - (4 * (k-1) * (k-2));
        printf("%lld\n", ans);
    }   

    return 0;
}
