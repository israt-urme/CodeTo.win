#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int c=0;
        for(int i=1;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                if(n/i==i)
                    c++;
                else
                    c=c+2;
            }
        }
        printf("%d\n",c);
    }
    return 0;
}
