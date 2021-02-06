#include <bits/stdc++.h>
using namespace std;
#define MAX 1123

int comp[MAX];

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    
    for(int i = 0; i < n; i++)
        scanf("%d", &comp[i]);
    sort(comp, comp+n, greater<int>());

    int ans = 1, _l = comp[0];
    for(int i = 1; i < n; i++)
    {
        int _c = comp[i];
        if(ans < k || _c == _l) {ans++;}
        else break;
        _l = _c;
    }
    printf("%d\n", ans);
    return 0;
}