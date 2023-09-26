#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    system("clear");
    printf("Indiquer un nombre [97<>122] :\n");
    scanf("%d",&a);
    system("clear");

    if (a >= 97 && a <= 122)
    {
        printf("%c\n",(char)a);
        getchar();
        return 0;
    }
    else
    printf("ERROR !\n");

    getchar();
    return 0;
}