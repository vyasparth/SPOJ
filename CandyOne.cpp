#include<iostream>
#include<algorithm>
using namespace std;
#include<cstdio>
int main()
{
    int N;
    int arr[10001];
    cin>>N;
    while(N!=-1)
    {
        int temp=0,movements=0;
        for(int i=0;i<N;i++)
        {
            scanf("%d",&arr[i]);
            temp+=arr[i];
        }
        int div = temp/N;
        if(temp%N!=0)
            cout<<"-1"<<endl;
        else
        {
            for(int i=0;i<N;i++)
            {
                while(arr[i]>div)
                {
                    arr[i]--;
                    movements++;
                }
            }
            cout<<movements<<endl;
        }
        cin>>N;
    }
    return 0;
}