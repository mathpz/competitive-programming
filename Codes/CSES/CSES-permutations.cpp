#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int n;
    scanf("%d", &n);

    if(n > 1 && n <= 3) printf("NO SOLUTION\n");
    else
    {
        for(int i = 2; i <= n; i+=2)
            printf("%d ", i);
        for(int i = 1; i <= n; i+=2)
            printf("%d ", i);
    }

    return 0;
}