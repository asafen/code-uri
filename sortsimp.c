#include <stdio.h>
#include <stdlib.h>

int main(){
    int n[3], n2[3], aux;
    for(int i = 0; i < 3; i++){
        scanf("%d",&n[i]);
    }
    for(int i = 0; i < 3; i++){
        n2[i] = n[i];
    }
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            if(n[j] > n[j+1]){
                aux = n[j];
                n[j] = n[j+1];
                n[j+1] = aux;
            }
        }
    }
    for(int i = 0; i < 3; i++){
        printf("%d\n",n[i]);
    }
    printf("\n");
    for(int i = 0; i < 3; i++){
        printf("%d\n",n2[i]);
    }
    return 0;
}