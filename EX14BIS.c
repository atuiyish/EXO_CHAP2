#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,ordre,i;

    system("clear");
    printf("Indiquer la valeur de a :\n");
    scanf("%d",&a);
    system("clear");
    printf("Indiquer la valeur de b :\n");
    scanf("%d",&b);
    system("clear");
    printf("Indiquer la valeur de c :\n");
    scanf("%d",&c);
    system("clear");

    i = 0;
    i = (a <= b && b <= c);

    ordre = i;
    printf("%d\n",ordre);

    getchar();
    return 0;
}