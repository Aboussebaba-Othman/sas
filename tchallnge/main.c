#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,somme;
    printf("entre le deux valeurs de a et b:");
    scanf("%d%d",&a,&b);
    somme = a + b;
    printf("le triple de cette somme est:%d",somme*3);
    return 0;
}
