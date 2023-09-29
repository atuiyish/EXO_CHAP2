#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,n,reslt;

    system("clear");
    printf("Indiquer la valeur de a :\n");
    scanf("%d",&a);
    system("clear");
    printf("Indiquer la valeur de n :\n");
    scanf("%d",&n);
    system("clear");

    if (n % 2 && !(n == 0) && a > 0)
    {
        reslt = exp(1.0 / n * log(a));
        printf("exp(1.0 / %d * log(%d)) = %d\n",n,a,reslt);
        return 0;
    }
    if (!(n % 2) && a < 0)
    {
        printf("Le calcul est impossible.\n");
        return 0;
    }
    if (!(n % 2) && !(n == 0) && a > 0)
    {
        reslt = exp(1.0 / n * log(a));
        printf("exp(1.0 / %d * log(%d)) = %d\n",n,a,reslt);
        return 0;
    }
    if (n == 0)
    {
        printf("Le calcul est impossible.\n");
        return 0;
    }
    if (n > 0 && a == 0)
    {
        printf("0\n");
        return 0;
    }
    if (n < 0 && a == 0)
    {
        printf("Le calcul est impossible : division par 0.\n");
        return 0;
    }
    if (n % 2 && a < 0)
    {
        reslt = -exp(1.0 / n * log(-a));
        printf("-exp(1.0 / %d * log(%d)) = %d\n",n,a,reslt);
        return 0;
    }
    return 0;
}