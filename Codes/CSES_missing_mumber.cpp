// https://cses.fi/problemset/task/1083

#include <bits/stdc++.h>
using namespace std;

#define MAX 1123456

int num[MAX];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n - 1; i++)
        scanf("%d", &num[i]);

    sort(num, num+n-1);

    for(int i = 0; i < n; i++)
        if(num[i] != i+1) { printf("%d\n", i+1); break;}
    return 0;
}