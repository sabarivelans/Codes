#include <stdio.h>
int main()
{
    int n, a[32], i = 0,j,rem;
    printf("Binary to Decimal Converter(Upto 8 bits)\n");
    printf("Enter the Decimal Number : ");
    scanf("%d", &n);
    if (n != 0)
    {
        
        while (n > 0)
        {
            rem = n % 2;
            a[i]=rem;
            n = n / 2;
            i=i+1;
        }
        printf("Equivalent Binary Number : ");
        if (i<9)
        {
            for(j=i-1;j>=0;j--)
            {
                printf("%d ",a[j]);
            }
        }
        else
        {
            printf("Overflow:Binary Exceeded 8 bits");
        }
    }
    
    else
    {
        printf("Equivalent Binary Number : 0");
    }

    return 0;
}