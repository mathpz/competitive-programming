#include <bits/stdc++.h>

#define INF 11234567


int main()
{
	int c;
	scanf(" %d", &c);

	while(c--)
	{
		int n, i, menor = INF, ball = 0, x, y;
		scanf(" %d", &n);
		scanf(" %d %d", &x, &y);
		
		while(n--)
		{
			ball++;
			int x2, y2;
			scanf(" %d %d", &x2, &y2);
			int temp = (x - x2) * (x - x2) + (y - y2) * (y - y2); 
			if(temp < menor)
			{
				menor = temp;
				i = ball;
			}
		}

		printf("%d\n", i);
	}

	return 0;
}