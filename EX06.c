#include <stdio.h>
#include <stdlib.h>

int main()
{
        int a,b,c,d;

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
    printf("Indiquer la valeur d :\n");
    scanf("%d",&d);
    system("clear");

    if(a <= b && a <= c && a <= d)
    {
        printf("%d\n",a);
        if (b >= c && b >= d)
        {
            printf("%d\n",b);
            return 0;
            getchar();
        }
        if (c >= b && c >= d)
        {
            printf("%d\n",c);
            return 0;
            getchar();
        }
        else
        {
            printf("%d\n",d);
            return 0;
            getchar();
        }
        return 0;
        getchar(); 
    }
    if(b <= a && b <= c && b <= d)
    {
        printf("%d\n",b);
        if (a >= c && a >= d)
        {
            printf("%d\n",a);
            return 0;
            getchar();
        }
        if (c >= a && c >= d)
        {
            printf("%d\n",c);
            return 0;
            getchar();
        }
        else
        {
            printf("%d\n",d);
            return 0;
            getchar();
        }
        return 0;
        getchar(); 
    }
    if(c <= a && c <= b && c <= d)
    {
        printf("%d\n",c);
        if (a >= b && a >= d)
        {
            printf("%d\n",a);
            return 0;
            getchar();
        }
        if (b >= a && b >= d)
        {
            printf("%d\n",b);
            return 0;
            getchar();
        }
        else
        {
            printf("%d\n",d);
            return 0;
            getchar();
        }
        return 0;
        getchar(); 
    }
    if(d <= a && d <= b && d <= c)
    {
        printf("%d\n",d);
        if (a >= b && a >= c)
        {
            printf("%d\n",a);
            return 0;
            getchar();
        }
        if (b >= a && b >= c)
        {
            printf("%d\n",b);
            return 0;
            getchar();
        }
        else
        {
            printf("%d\n",c);
            return 0;
            getchar();
        }
        return 0;
        getchar(); 
    }
    else
    return 0;
    getchar(); 
}