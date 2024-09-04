#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fuct,n,i;
    fuct = 1;
    printf("entre un nombre :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
       fuct = fuct*i;
    }
    printf("la fuctoriel est :%d  ",fuct);
    return 0;
}
