//https://cses.fi/problemset/task/1617

#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007

long long int power(long long int a, long long int b)
{
    long long int result = 1;
    while(b)
    {
        if(b & 1) 
            result = (result * a) % MOD;
        a = (a * a) % MOD;
        b /= 2;
    }
    return result;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%lld", power(2,n));
    return 0;
}

