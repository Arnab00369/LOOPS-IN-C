//To check whether a given number is a Prime number or not
#include <stdio.h>
int main()
{
    int N,c=0;
    printf("Enter a number to check Prime or not ::\nN = ");
    scanf("%d",&N);
    for(int i=1;i<=N;i++)
    {
        if(N%i==0)
            c++;
    }
    if(c==2)
        printf("%d is a Prime Number",N);
    else
        printf("%d is not a Prime Number",N);
    return 0;
}
