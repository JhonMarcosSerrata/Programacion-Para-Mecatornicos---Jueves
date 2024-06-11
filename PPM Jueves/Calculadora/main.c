#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1 = 0;
    int n2 = 0;
    int result = 0;
    int temp =0;

    printf("\nMultiplicador de enteros");
    printf("\nIngrese el primer numero :");
    scanf("%d", &n1);
    printf("\nIngrese el segundo numero :");
    scanf("%d", &n2);

    if(n2>n1){
       temp = n1;
        n1=n2;
        n2=temp;
    }

    for (int i = 1; i<=n2;i++){
        result += n1;
        printf("\nResutado = %d", result);
    }

    return 0;
}
