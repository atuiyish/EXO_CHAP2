#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,ordre;

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

    if (a <= b && b <= c)
    {
        ordre = 1;
        printf("%d\n",ordre);
        getchar();
        return 0;
    }
    else
    ordre = 0;
    printf("%d\n",ordre);
    getchar();
    return 0;
}