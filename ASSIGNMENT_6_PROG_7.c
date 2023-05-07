#include <stdio.h>
int main()
{
    int N,c=0,n1;
    printf("Enter a Number ::\nN = ");
    scanf("%d",&N);
    n1=N;
    while(N!=0)
    {
        N=N/10;
        ++c;
    }
    printf("Therefore, the Number of Digits in %d is = %d",n1,c);
    return 0;
}
