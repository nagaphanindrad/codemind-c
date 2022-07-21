#include<stdio.h>
int countn(int num)
{
    int count=0;
    while(num)
    {
        count++;
        num/=10;
    }
    return count;
}
int main()
{
    int num,n,rem,count=0,temp,rem1,temp2,counting;
    scanf("%d",&num);
    temp=num;
    temp2=num;
    counting=countn(num);
    while(num)
    {
        rem=num%10;
        temp=temp2;
        while(temp)
        {
            rem1=temp%10;
            if(rem1==rem)
            {
                count++;
            }
            temp/=10;
        }
        num/=10;
    }
    if(count==counting)
    {
        printf("Unique Number");
    }
    else
    {
        printf("Not Unique Number");
    }
}