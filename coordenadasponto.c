#include <stdio.h>
#include <stdlib.h>

int main(){
    int k = 0;
    float eixox, eixoy;
    scanf("%f%f",&eixox,&eixoy);

        if(eixox==0.0 && eixoy==0.0){
            printf("Origem\n");
        }
        else if(eixox==0.0 && eixoy!=0.0){
            printf("Eixo Y\n");
        }
        else if(eixox!=0.0 && eixoy==0.0){
            printf("Eixo X\n");
        }
        else if(eixox>0.0 && eixoy>0.0){
            printf("Q1\n");
        }
        else if(eixox<0.0 && eixoy>0.0){
            printf("Q2\n");
        }
        else if(eixox<0.0 && eixoy<0.0){
            printf("Q3\n");
        }
        else if(eixox>0.0 && eixoy<0.0){
            printf("Q4\n");
        }
    return 0;
}