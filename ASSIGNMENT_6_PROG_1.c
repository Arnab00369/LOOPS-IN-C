//To calculate sum of first N natural numbers
#include <stdio.h>
int main()
{
    int N,s=0;
    printf("Enter upto which Natural Number you want to print the sum of the numbers ::\nN = ");
    scanf("%d",&N);
    for(int i=0;i<N;i++)
            s=s+(i+1);
    printf("The Sum of First %d Natural Numbers is :: %d",N,s);
    return 0;
}
