//o problema foi resolvido utilizando set para ordenar as strings lidas
#include<bits/stdc++.h>

using namespace std;

#define MAX 212

int main(void) {
	int c, size = 0, flag = 0;
	char str[MAX];
	set<string> x;
	while ((c = getchar()) != EOF) {
		if (isalpha(c)) { str[size++] = tolower(c); flag = 1; }
		else if (flag) {
			str[size++] = 0; flag = 0; size = 0;
			x.insert(string(str));
		}
	}
	for (auto& j : x)
		printf("%s\n", j.c_str());
	return 0;
}