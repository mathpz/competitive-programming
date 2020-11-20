//ad-hoc
#include <iostream>
using namespace std;

int main() {

	int a, b, q, r;
	scanf("%d %d", &a, &b);
	q = 0;

	if (a < 0 && b > 0)	while (q * b > a) q--;
	else if (a < 0 && b < 0) while (q * b > a) q++;
	else q = a / b;
	r = a - (b * q);
	printf("%d %d\n", q, r);

	return 0;
}