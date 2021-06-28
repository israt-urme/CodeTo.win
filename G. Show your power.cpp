#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    long long a[n+2],p,c=0;
    for(int i=1;i<=n;i++)
    {
        scanf("%lld",&a[i]);
    }
    scanf("%lld",&p);
    for(int i=1;i<=n;i++)
    {
        if(p>=a[i])
            c++;
    }
    cout<<c<<endl;
    return 0;
}
