#include <stdio.h>
#include <stdlib.h>

int main()
{
    char lettre;
    int a,cara;

    system("clear");
    printf("Saisis une lettre :\n");
    fflush(stdin);
    scanf("%c",&lettre);
    system("clear");
    a = (int)lettre;
    printf("Miniscule : 1\nMajuscule : 2\nAutre     : 3\n");
    scanf("%d",&cara);
    system("clear");

    if (cara == 1 || cara == 2)
    {
        printf("%d\n",a);
        getchar();
        return 0;
    }
    else
    getchar();
    return 0;
}