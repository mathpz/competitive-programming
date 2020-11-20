#include <bits/stdc++.h>

int main()
{
	int n;
	scanf(" %d", &n);

	while(n--)
	{
		int x, y;
		scanf(" %d %d", &x, &y);

		printf("%d cm2\n", ((int)x *y / 2));
	}

	return 0;
}