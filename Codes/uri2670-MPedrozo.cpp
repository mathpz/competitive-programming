#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a1, a2, a3;
    scanf("%d %d %d", &a1, &a2, &a3);

    int ans = min(a2 * 2 + a3 * 4,min(a1 * 2 + a3 * 2, a1*4 + a2 *2));
    printf("%d\n", ans);
    return 0;
}