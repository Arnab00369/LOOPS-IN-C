//To calculate sum of first N even natural numbers
#include <stdio.h>
int main()
{
    int N,s=0,b=2;
    printf("Enter upto which Even Natural Number you want to print the sum of the numbers ::\nN = ");
    scanf("%d",&N);
    for(int i=1;i<=N;i++)
    {
        s=s+b;
        b+=2;
    }
    printf("The Sum of First %d Even Natural Numbers is :: %d",N,s);
    return 0;
}
