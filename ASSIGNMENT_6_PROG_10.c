//To reverse a given number
#include <stdio.h>
int main()
{
    int N,n1,rev=0;
    printf("Enter a Number ::\nN = ");
    scanf("%d",&N);
    n1=N;
    while(N!=0)
    {

        rev=rev*10+(N%10);
        N=N/10;

    }
    printf("The Reverse of %d is %d",n1,rev);
}
