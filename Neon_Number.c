#include<stdio.h>
int main()
{
    int num,rem,sum=0,pro;
    scanf("%d",&num);
    pro=num*num;
    while(pro)
    {
        rem=pro%10;
        sum=sum+rem;
        pro/=10;
        
    }
    if(sum!=num)
    {
        printf("Not Neon Number");
    }
    else
    {
        printf("Neon Number");
    }
}