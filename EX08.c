#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,op;
    int d;

    system("clear");
    printf("Indiquer les deux valeurs :\n");
    scanf("%f",&a);
    scanf("%f",&b);
    system("clear");
    printf("Indiquer l'opération :\n");
    scanf("%d",&d);
    system("clear");

    if (d == 1)
    {
        op = a + b;
        printf("%g + %g = %g\n",a,b,op);
        getchar();
        return 0;
    }
    if (d == 2)
    {
        op = a - b;
        printf("%g - %g = %g\n",a,b,op);
        getchar();
        return 0;
    }
    if (d == 3)
    {
        op = a * b;
        printf("%g * %g = %g\n",a,b,op);
        getchar();
        return 0;
    }
    if (d == 4)
    {
        op = a / b;
        printf("%g / %g = %g\n",a,b,op);
        getchar();
        return 0;
    }
    else
    printf("Code non reconnu !\n");
    getchar();
    return 0;    
}