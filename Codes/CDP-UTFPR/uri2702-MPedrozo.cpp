#include <bits/stdc++.h>

int main(int argc, char const *argv[])
{
	int cA, bA, pA; 
	int cR, bR, pR;

	scanf("%d %d %d", &cA, &bA, &pA);

	scanf("%d %d %d", &cR, &bR, &pR);

	int total;
	if(cR > cA) (total += cR - cA);
	if(bR > bA) (total += bR - bA);
	if(pR > pA) (total += pR - pA);

	printf("%d\n", total);


	return 0;
}