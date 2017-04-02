#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int N,count,len=1,bre=1,rect=0;
    cin>>N;
    for(len=1;len<=N;len++)
    {
        for(bre=len;bre<=N;bre++)
        {
            if(len*bre<=N)
                rect++;
        }
    }
    cout<<rect;
    return 0;
}