#include <stdio.h>
#include <stdlib.h>

int main () {

    int media[5], i;
    double resultado = 0.0, calc = 0.0;

    for(i=1;i<=5;i++){
        printf("Digite a %do nota: ",i);
        scanf("%d",&media[i]);
    }
    
    for(i=1;i<=5;i++){
        calc += media[i];
    }
    resultado = calc/5;
    printf("\nA media final eh = %.1lf\n",resultado);

    return 0;
}