#include <stdio.h>
#include <stdlib.h>

int main(){
    float n1, n2, n3, n4, media = 0, nexame, mediafinal = 0;
    int k = 0;
    scanf("%f%f%f%f",&n1,&n2,&n3,&n4);
    media = (((2*n1)+(3*n2)+(4*n3)+(n4))/10);
    while(k==0){
        if(media>=7.0){
            printf("Media: %.1f\nAluno aprovado.\n", media); k=1;
        }
        if(media<5.0){
            printf("Media: %.1f\nAluno reprovado.\n", media); k=1;
        }
        if(media>=5.0 && media<7.0){
            printf("Media: %.1f\nAluno em exame.\n", media);
            scanf("%f",&nexame); printf("Nota do exame: %.1f\n", nexame);
            mediafinal = (media + nexame)/2;
            if(mediafinal>=5.0){
                printf("Aluno aprovado.\n");
            }
            if(mediafinal<5.0){
                printf("Aluno reprovado.\n");
            }
            printf("Media final: %.1f\n", mediafinal); k=1;

        }
    }
    return 0;
}