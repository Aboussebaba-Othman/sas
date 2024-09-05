#include <stdio.h>
#include <stdlib.h>
/*void premier(int n){
    if(n%1 == 0 && n%n == 0){
        printf("se nombre est premier");
}
    else{
    printf("se nombre ne pas premier");
    }
}
int main()
{
    int a;
    printf("entre un nombre :");
    scanf("%d",&a);
    premier(a);

    return 0;
}*/
int factoriel(int n){
    int fuct,i;
    fuct = 1;
    for(i=1;i<=n;i++){
        fuct = fuct*i;
    }

}
int main(){
    int a,i
    printf("entre un nombre :");
    scanf("%d",&a);
    factoriel(a);
return 0;
}

