#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    ll n, ans = 0;
    scanf("%lld", &n);
    
    ll _c, _l;
    scanf("%lld", &_l);
    for(int i = 1; i < n; i++)
    {
        scanf("%lld", &_c);
        if(_c < _l) {ans += _l - _c; _c += _l - _c;}
        _l = _c;
    }

    printf("%lld\n", ans);

    return 0;
}