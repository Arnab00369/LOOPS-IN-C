//To calculate factorial of a number
#include <stdio.h>
int main()
{
    int N,f=1;
    printf("Enter the number you want to print the Factorial ::\nN = ");
    scanf("%d",&N);
    for(int i=1;i<=N;i++)
    f=f*i;
    printf("Therefore, Factorial of %d is = %d",N,f);
    return 0;
}
