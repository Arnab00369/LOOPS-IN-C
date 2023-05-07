//To calculate LCM of two numbers
#include <stdio.h>
int main()
{
    int a,b,max;
    printf("Enter Two Numbers ::\nA = ");
    scanf("%d",&a);
    printf("B = ");
    scanf("%d",&b);
    max=(a>b)?a:b;
    while(1)
    {
        if((max%a==0)&&(max%b==0))
        {
            printf("L.C.M. of %d and %d is %d",a,b,max);
            break;
        }
    max++;
    }
    return 0;
}
