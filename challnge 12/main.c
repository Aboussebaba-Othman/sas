#include <stdio.h>
#include <stdlib.h>
void type_annee (int a){
    if((a% 4 == 0 && a % 100 != 0) || (a % 400 == 0)){
        printf("cette annee est axe");
    }
    else
    {
        printf("cette annee ne pas  axe");
    }
}
int main()
{
    int annee;
    printf("entre une annee :");
    scanf("%d",&annee);
    type_annee(annee);

    return 0;
}
