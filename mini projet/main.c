
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



    int main(){

    int n,i,result;
    printf("entre la taille de tableux");
    scanf("%d",&n);

    int t[n];
    for(i=0;i<n;i++){
        printf("t[%d]",i+1);
        scanf("%d",&t[i]);
    }
    result = t[i] * 3;
    for(i=0;i<n;i++){
    if(t[i]%2==0){
        printf("%d \n",result);
    }
    }
    return 0;
}

