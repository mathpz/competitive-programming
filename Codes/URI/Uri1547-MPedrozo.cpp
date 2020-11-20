#include <bits/stdc++.h>


int main()
{
	int n, qt, s, ans, found = 0;
	scanf("%d", &n);

	while(n--)
	{
		scanf(" %d %d", &qt, &s);
		int maisProx = 999;
		found = 0;
		ans = 0;

		for(int i = 1; i <= qt; i++)
		{
			int a;
			scanf(" %d", &a);
		
			if(a == s && !found)
			{
				ans = i;
				found++;
			}
			else if (abs(a-s) < maisProx && !found)
			{
				maisProx = abs(a-s);
				ans = i;
			}
		}
		printf("%d\n", ans);
	}

	return 0;
}