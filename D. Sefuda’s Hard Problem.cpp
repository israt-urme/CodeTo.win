#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long x;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%lld",&x);
        if(x%2==0 || x==0)
            printf("-1");
        else
            printf("2");
    }
    return 0;
}

