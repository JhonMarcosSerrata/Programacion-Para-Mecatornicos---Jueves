#include <stdio.h>
#include <stdlib.h>


int main()
{
    float x = 0.0;
    float b = 0.0;
    int cnt = 0;

    printf("\\Calculo de raiz cuadrada\n");

    printf("Ingrese el numero: ");
    scanf("%f",&x);

        b = x;

    while(!(b==(x/b))){

        b = 0.5 * ((x/b)+b);
        printf("La raiz cuadrada es: %f=%f\n",x,b);
        cnt++;
        printf("Valor de cnt: %d\n" ,cnt);
        if(cnt > 10)
            break;
    }

    printf("La raiz cuadrada es: %f=%f\n",x,b);

    return 0;
}
