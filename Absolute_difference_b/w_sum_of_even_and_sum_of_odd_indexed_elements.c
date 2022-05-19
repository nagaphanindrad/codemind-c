#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a],i,ec=0,os=0;
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<a;i++)
    {
        if (i%2==0)
        {
            ec+=arr[i];
        }
        if(i%2!=0)
        {
            os+=arr[i];
        }
    }
    printf("%d",abs(ec-os));
}