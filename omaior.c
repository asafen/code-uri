#include <stdlib.h>
#include <stdio.h>
#include <math.h>   

int main(){
    int a=0, b=0, c=0, maiorab, maior=0;
    scanf("%d%d%d",&a,&b,&c);
    maiorab = (a+b+abs(a-b))/2;   
    if(maiorab > c){
        maior = maiorab;
    }
    else{
        maior = c;
    }
    printf("%d eh o maior\n", maior);
    return 0;
    
}
