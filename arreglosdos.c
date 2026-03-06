#include <stdio.h>
#include <stdlib.h>

int main(){

    float temp1, temp2;
    float temp[4];
    int dummy;
    int N;
    int i;

    temp[0] = 20.5;
    temp[1] = 19.2;

    for(i = 0; i < 4; i++){
        printf("%f\n", temp[i]);
    }

    printf("Cuantos numeros quieres ingresar: ");
    scanf("%d", &N);

    for(i = 0; i < N; i++){
        printf("Numero %d: ", i+1);
        scanf("%f", &temp[i]);
    }

    return 0;
}
