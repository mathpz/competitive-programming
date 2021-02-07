
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        ll x, y;
        scanf("%lld %lld", &y, &x);
        if(y>x)
        {
            if(y % 2 == 0) printf("%lld\n", y*y-(x -1));
            else printf("%lld\n", (y-1)*(y-1)+1+(x -1)); 
        }
        else
        {
            if(x % 2 == 1) printf("%lld\n", x*x-(y-1));
            else printf("%lld\n", (x-1)*(x-1)+1+(y-1));
        }
    }

    return 0;
}

