#include<stdio.h>
int main()
{
    int num1,num2,n=1;
    scanf("%d%d",&num1,&num2);
    while(n)
    {
        if((num2*n)%num1==0)
        {
            printf("%d",num2*n);
            break;
        }
        n++;
    }
}