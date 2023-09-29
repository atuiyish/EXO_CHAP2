#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;

    system("clear");
    printf("Indiquer la valeur du premier bit :\n");
    scanf("%d",&a);
    system("clear");
    printf("Indiquer la valeur du deuxiéme bit :\n");
    scanf("%d",&b);
    system("clear");

    if (a == 0 && b == 0)
    {
        printf("0\n");
        return 0;
    }
    if (a == 1 && b == 0)
    {
        printf("1\n");
        return 0;
    }
    if (a == 0 && b == 1)
    {
        printf("1\n");
        return 0;
    }
    if (a == 1 && b == 1)
    {
        printf("0\n");
        return 0;
    }
    else
    printf("ERROR !\n");
    return 0;
}