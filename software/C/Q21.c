#include<stdio.h>
int main()
{
    int railway,hh,mm;
    scanf("%d",&railway);
    hh=railway/100;
    mm=railway%100;
    if ( railway<0 || railway>2359 )
    {
        printf("Invalid Time");
    }
     else if(hh==0)
    {
        hh=12;
        printf("12 H Time:%d:%d AM",hh,mm);
    }
    else if(hh==12)
    {
        printf("12 H Time:%d:%d PM",hh,mm);
    }
    else if(hh>12)
    {
        printf("12 H Time:%d:%d PM",hh-12,mm);
    }
    else
    {
        printf("12 H Time:%d:%d AM",hh,mm);
    }
    return 0;
}