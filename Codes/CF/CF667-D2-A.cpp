#include <bits/stdc++.h>

int main()
{

    int n, h, ans = 0;
    scanf("%d %d", &n, &h);
    
    for(int i = 0; i < n; i++)
    {
        int ai;
        scanf(" %d", &ai);
        (ai <= h) ? ans++ : ans += 2;
    }
    printf("%d\n", ans);

    return 0;
}