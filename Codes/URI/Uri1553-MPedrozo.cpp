#include <bits/stdc++.h>

#define MAX 112

int v[MAX];

int main()
{
	int n, k;
	scanf("%d %d", &n, &k);

	while(n != 0 && k != 0)
	{
		int ans;
		
		memset(v, 0, sizeof(v));
		ans = 0;
		
		while(n--)
		{
			int a;
			scanf(" %d",&a);
			v[a]++;
		}
		for(int i = 1; i < 101; i++)
		{
			if(v[i] >= k)
				ans += 1;
		}
		printf("%d\n", ans);
		scanf(" %d %d", &n, &k);
	}

	return 0;
}