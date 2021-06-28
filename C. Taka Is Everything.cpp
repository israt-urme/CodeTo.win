#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,n;
    cin>>a>>b>>c>>d;
    cin>>n;

        cout<<(n/2)*min(8*a,4*b,2*c,d)+(n%2)*min(4*a,2*b,c);

}
