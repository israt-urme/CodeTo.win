#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int a[n];
        for(i=0; i<n; i++)
            cin>>a[i];
        int sum=a[0],c=0;
        for(i=1;i<n;i++)
        {
            sum=__gcd(sum,a[i]);
            if(sum==1)
                c++;
        }
        if(c>0)
           cout<<c+1<<endl;
        else
            cout<<c<<endl;
    }
    return 0;
}
