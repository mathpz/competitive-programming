#include <bits/stdc++.h>

int main()
{
	int n;
	scanf(" %d" , &n);

	while(n--)
	{
		int x, y, b, r, c;
		scanf(" %d %d", &x, &y);
		r = 9 * x * x + y * y;
		b = 2 * x * x + 25 * y * y;
		c = -100 * x + y * y * y;
	
		if(r > b && r > c)
			printf("Rafael ganhou\n");
		else if(b > r && b > c)
			printf("Beto ganhou\n");
		else
			printf("Carlos ganhou\n");

	}

	return 0;
}