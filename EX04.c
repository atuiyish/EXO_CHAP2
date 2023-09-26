#include <stdio.h>
#include <stdlib.h>

int main()
{
        int a,b,c;

    system("clear");
    printf("Indiquer la valeur a :\n");
    scanf("%d",&a);
    system("clear");
    printf("Indiquer la valeur b :\n");
    scanf("%d",&b);
    system("clear");
    printf("Indiquer la valeur c :\n");
    scanf("%d",&c);
    system("clear");

    if(a <= b && a <= c)
    {
        printf("%d\n",a);
        return 0;
        getchar(); 
    }
    if(b <= a && b <= c)
    {
        printf("%d\n",b);
        return 0;
        getchar(); 
    }
    if(c <= a && c <= b)
    {
        printf("%d\n",c);
        return 0;
        getchar(); 
    }
    else
    return 0;
    getchar(); 
}