#include<stdio.h>
#include<iostream>
using namespace std;
int reverse(int);
int main()
{
    int t;
    int no1,no2;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&no1,&no2);
        int ans1=reverse(no1);
        int ans2=reverse(no2);
        int add = ans1+ans2;
        int final_add=reverse(add);    
        printf("%d\n",final_add);
    }
    return 0;
}
int reverse(int no)
{
    int rev=0,rem;
    while(no>0)
    {
        rem = no%10;
        no=no/10;
        rev = rev*10+rem;
    }
    return rev;
}
