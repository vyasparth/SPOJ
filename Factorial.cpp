#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N,ans=0;
        cin>>N;
        while(N>0)
        {
            N=N/5;
            ans=ans+N;
        }        
        cout<<ans<<endl;
    }
    return 0;
}