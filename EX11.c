#include <stdio.h>
#include <stdlib.h>

int main()
{
    char lettre;

    system("clear");
    printf("Saisis une lettre :\n");
    
    scanf("%c",&lettre);
    system("clear");

    if ((int)lettre >= 97 && (int)lettre <= 122 || (int)lettre >= 65 && (int)lettre <= 90)
    {
        if ((int)lettre >= 97 && (int)lettre <= 122)
        {
            printf("%c\n",lettre - 32);
            getchar();
            return 0;
        }
        else
        printf("%c\n",lettre + 32);
        getchar();
        return 0;     
    }
    else
    printf("ERROR !\n");

    getchar();
    return 0;
}