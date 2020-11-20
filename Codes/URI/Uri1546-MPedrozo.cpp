#include <bits/stdc++.h>

int main()
{
	int n, k;
	scanf(" %d", &n);

	while(n--)
	{
		scanf(" %d", &k);
		while(k--)
		{
			int a;
			scanf(" %d", &a);
			if(a == 1)
				printf("Rolien\n");
			else if(a == 2)
				printf("Naej\n");
			else if(a == 3)
				printf("Elehcim\n");
			else
				printf("Odranoel\n");
		}

	}


	return 0;
}