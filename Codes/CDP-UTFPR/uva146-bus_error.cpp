//o problema foi resolvido utilizando a função next_permutation da
//biblioteca algorithm do c++ já que o problema trata de permutações
#include <cstdio>
#include <algorithm>
#include <string>
#include <string.h>

#define MAX 51
using namespace std;
int main()
{
	char s[51];
	while (scanf("%s", s), strcmp(s, "#") != 0)
	{
		string code = string(s);
		if (next_permutation(code.begin(), code.end())) printf("%s\n", code.c_str());
		else
			printf("No Successor\n");
	}
	return 0;
}
