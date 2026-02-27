#include <stdio.h>
#include <stdlib.h>

int main(){
    int tempo = 0, counthora = 0, countmin = 0, countsec = 0;

    scanf("%d",&tempo);
    
    if(tempo>=3600){counthora = tempo/3600; tempo = tempo%3600;}
    if(tempo>=60){countmin = tempo/60; tempo = tempo%60;}
    if(tempo>=1&&tempo<60){countsec = tempo/1;}

    printf("%d:%d:%d\n",counthora,countmin,countsec);

    return 0;
}