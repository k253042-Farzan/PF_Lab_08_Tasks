#include <stdio.h>

int main() {
    int range;
    printf("Enter Range: ");
    scanf("%d",&range);
    printf("\nPrime Numbers: ");
    for (int i = 2; i <= range; i++)
    {
        int isPrime=1;
        for (int j = 2; j < i; j++)
        {
            if(i%j==0)
            {
                isPrime=0;
                break;
            }
        }
        if(isPrime) printf("%d ",i);
    }

    return 0;
}
