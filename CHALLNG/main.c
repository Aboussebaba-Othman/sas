#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    printf("entre un nombre :");
    scanf("%d",&n);
    for(i=0;i<=10;i++){
    printf("%d * %d = %d\n",n,i,n*i);
    }
    return 0;
}
