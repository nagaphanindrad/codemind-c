#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int a=0,b=1,c,d1,d2;
    while(1)
    {
        c=a+b;
        if(c>num)
        {
            d1=num-b;
            d2=c-num;
            if(d1>d2)
            {
                printf("%d",c);
                break;
            }
            else if(d1==d2)
            {
                printf("%d %d",b,c);
                break;
            }
            else if(d1<d2)
            {
                printf("%d ",b);
                break;
            }
        }
        else
        {
            a=b;
            b=c;
        }
    }
};