#include <bits/stdc++.h>

#define MAX 1123
char s[MAX];
char alpha[30];

int main()
{
	int n;
	scanf(" %d", &n);

	while(n--)
	{
		int i = 0, ans = 0;
		memset(alpha, 0, sizeof(alpha));
		scanf(" %[^\n]", s);
		while(s[i] != '\0')
		{
			if(s[i] != ' ' && s[i] != ',')
				alpha[s[i] - 'a']++;
			i++;
		}
		for(int j = 0; j < 26; j++)
			if(alpha[j] != 0) ans++;

		if(ans == 26)
			printf("frase completa\n");
		else if(ans >= 13)
			printf("frase quase completa\n");
		else
			printf("frase mal elaborada\n");
	}

	return 0;
}