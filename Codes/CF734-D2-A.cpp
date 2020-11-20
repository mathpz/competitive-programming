#include <bits/stdc++.h>
using namespace std;
#define MAX 112345

int main()
{
    int n, anton = 0, danik = 0;
    char s[MAX];
    scanf("%d", &n);
    scanf("%s", &s);
    for(int i = 0; i < strlen(s); i++)
    {
        if(s[i] == 'A') anton++;
        else danik++;
    }
    if(anton == danik) printf("Friendship\n");
    else if(anton < danik) printf("Danik\n");
    else printf("Anton\n");
    return 0;
}