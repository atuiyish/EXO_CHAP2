#include <stdio.h>

int main()
{
    int na,nb,reste;
    printf("Entrez le nombre choisi par le joueur A : \n");
    scanf("%d",&na);
    printf("Entrez le nombre choisi par le joueur B : \n");
    scanf("%d",&nb);
    reste = (na+nb)%2;

    if (reste == 0)
    {
        printf("le joueur A gagne\n");
    }
    else
    {
        printf("le joueur B gagne \n");
    }
    printf("Bravo au gagnant!\n");
}