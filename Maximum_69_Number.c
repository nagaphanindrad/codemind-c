#include<stdio.h>
int reverse(int num)
{
    int rev=0,rem;
    while(num)
    {
        rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }
    return rev;
}
int main()
{
    int num,rev=0,a,rem,count=0;
    scanf("%d",&num);
    a=reverse(num);
    while(a)
    {
        rem=a%10;
        if(rem==6 && count==0)
        {
            rem=9;
            count++;
        }
        rev=rev*10+rem;
        a/=10;
    }
    printf("%d",rev);
}