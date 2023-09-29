#include <stdio.h>

int main()
{
    int a,b;
    printf("Entrez une valeur pour a puis une valeur pour b :\n");
    scanf("%d%d",&a,&b);
    if (a<10)
    {
        if (b>5)
        printf("%d < 10 et %d > 5.\n",a,b); 
    }
    else
    printf("attention!\n");
    printf("Fin de programme.\n"); }