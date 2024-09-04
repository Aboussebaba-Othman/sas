#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    printf("entre la taill de tableux :");
    scanf("%d",&n);

    int t[n];

    printf("entre le element de tableux :");
    for(i=0;i<n;i++){
        printf("t[%d] =",i);
        scanf("%d",&t[i]);
    }
    return 0;
}
