//ad-hoc
#include <iostream>

using namespace std;

int main() {

	int a, c, b;
	int prev, sum;
	scanf("%d %d", &a, &c);
	while (a != 0 && c != 0)
	{
		prev = a;
		sum = 0;
		while (c--)
		{
			scanf("%d", &b);
			if (prev > b)
			{
				sum += (prev - b);
			}
			prev = b;
		}
		printf("%d\n", sum);
		scanf("%d %d", &a, &c);
	}
	return 0;
}