//To calculate sum of cubes of first N natural numbers
#include <stdio.h>
int main()
{
    int N,s=0;
    printf("Enter upto which Natural Number you want to print the sum of squares of the numbers ::\nN = ");
    scanf("%d",&N);
    for(int i=1;i<=N;i++)
            s=s+(i*i*i);
    printf("The Sum of Cubes of First %d Natural Numbers is :: %d",N,s);
    return 0;
}


