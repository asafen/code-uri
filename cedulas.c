#include <stdio.h> 
#include <stdlib.h>
#include <math.h>

int main(){
    int valor = 0, aux = 0;
    int countcem = 0, countcinq = 0, countvint = 0, countdez = 0, countcinc = 0, countdois = 0, countum = 0;
    scanf("%d",&valor);
    aux = valor;
    if(valor>=100){countcem = valor/100; valor = valor%100;}
    if(valor>=50){countcinq = valor/50; valor = valor%50;}
    if(valor>=20){countvint = valor/20; valor = valor%20;}
    if(valor>=10){countdez = valor/10; valor = valor%10;}
    if(valor>=5){countcinc = valor/5; valor = valor%5;}
    if(valor>=2){countdois = valor/2; valor = valor%2;}
    if(valor>=1&&valor<2){countum = valor/1;}

    printf("%d\n", aux);
    printf("%d nota(s) de R$ 100,00\n", countcem);
    printf("%d nota(s) de R$ 50,00\n", countcinq);
    printf("%d nota(s) de R$ 20,00\n", countvint);
    printf("%d nota(s) de R$ 10,00\n", countdez);
    printf("%d nota(s) de R$ 5,00\n", countcinc);
    printf("%d nota(s) de R$ 2,00\n", countdois);
    printf("%d nota(s) de R$ 1,00\n", countum);

    return 0;

}