#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,result;

    system("clear");
    printf("Indiquer la valeur de a :\n");
    scanf("%d",&a);
    system("clear");
    printf("Indiquer la valeur de b :\n");
    scanf("%d",&b);

    if (a > b)
    {
        result = b - a;
    }
    else
    {
        result = a - b;
    }
    printf("Le resultat est de %d\n",result);
}