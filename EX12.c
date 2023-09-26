#include <stdio.h>
#include <stdlib.h>

int main()
{
    int years;
    system("clear");
    printf("Saisis une année postérieure à 1849:\n");
    scanf("%d",&years);
    system("clear");

    if (years >= 1849)
    {
        if ((years % 400) == 0)
        {
            printf("%d est une année bissextiles\n",years);
            getchar();
            return 0;
        }
        if ((years % 4) == 0 && (years % 100) != 0)
        {
            printf("%d est une année bissextiles\n",years);
            getchar();
            return 0;
        }
        else
        printf("%d n'est pas une année bissextiles\n",years);

        getchar();
        return 0;
    }
    else
    printf("%d est une année antérieur à 1849\n",years);
    getchar();
    return 0;
}