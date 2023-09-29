#include <stdio.h>
#include <stdlib.h>

int main()
{
    int jour,mois;

    system("clear");
    printf("Indiquer le jour de naissance :\n");
    scanf("%d,&",&jour);
    system("clear");
    printf("Indiquer le mois de naissance :\n");
    scanf("%d",&mois);
    system("clear");

    if (jour >= 1 && jour <= 30 && (mois == 4 || mois == 6 || mois == 9|| mois == 11))
    {
        printf("La date est: %d/%d\n",jour,mois);
        getchar();
        return 0;
    }
    if (jour >= 1 && jour <= 31 && (mois == 1 || mois == 3 || mois == 5|| mois == 7 || mois == 8 || mois == 10 || mois == 12))
    {
        printf("La date est: %d/%d\n",jour,mois);
        getchar();
        return 0;
    }
    if (jour >= 1 && jour <= 28 && mois == 2)
    {
        printf("La date est: %d/%d\n",jour,mois);
        getchar();
        return 0;
    }
    else
    printf("ERROR !\n");
    getchar();
    return 0;
}