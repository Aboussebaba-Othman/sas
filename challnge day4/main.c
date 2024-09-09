#include<stdio.h>
#include<stdlib.h>



int main()
{

   int t[10]={3,5,8,9,1,2,99,7,15,20};
    int i,j;

    for(i=1;i<10;i++){
        int tmp = t[i];
        j = i- 1;
        while(tmp<t[j] && j>=0){
            t[j+1]=t[j];
            j--;
        }

            t[j+1] = tmp;



    }
      for(int i =0;i<10;i++){
        printf("%d",t[i]);
    }









    /*struct etudiant {
        char nom[30];
        char prenom[30];
        int note;
    };

    struct etudiant fn[3];

    for(int i=0;i<3;i++){
        printf("entre le nom : ");
        scanf("%s",&fn[i].nom);
        printf("entre le prenom : ");
        scanf("%s",&fn[i].prenom);
        printf("entre le note : ");
        scanf("%d",&fn[i].note);
    }

    for(int i=0;i<3;i++){
        printf("%s\n %s\n %d",fn[i].nom,fn[i].prenom,fn[i].note);
    }



    //fun();

   /* int t[10] = {2,4,3,5,6,5,2,1,7,1};
    int copie[10];
    int i,j;
    //int r=0;
    for(i=0;i<10;i++){
           // int c =0;
        for(j=0;j<10;j++){
                if(t[i]==copie[i]){
                     //c= 1;
                    break;
                }
        }
        if(!c){
            copie[i]= t[i];
            //r++;
        }
        printf("copie est :\n");
        for(i=0;i<r;i++){
            printf("%d",copie[i]);
        }
    }*/
     return 0;
}

