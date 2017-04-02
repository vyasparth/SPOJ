#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t, N;
    long long  ans, child;
    cin>>t;
    while(t--)
    {
        cin>>N;
        ans = 0;
        for(int i=0;i<N;i++)
        {
            scanf("%lld",&child);
            ans = ans + child;
            if(ans >= N)
                 ans %= N;
        }
        if(ans == 0) 
            printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}