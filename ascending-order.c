#include <stdio.h>

void main() {
    
    int vn1, vn2, vn3;

    printf("Digite o primeiro numero: ");
    scanf("%i", &vn1);

    printf("Digite o segundo numero: ");
    scanf("%i", &vn2);

    printf("Digite o terceiro numero: ");
    scanf("%i", &vn3);
    
    if (vn1 >= vn2 && vn2 >= vn3)
    {
        /* code */
        printf("A ordem crescente dos numeros e: %i, %i, %i", vn3, vn2, vn1);
    }
    else if (vn2 >= vn1 && vn1 >= vn3)
    {
        /* code */
        printf("A ordem crescente dos numeros e: %i, %i, %i", vn3, vn1, vn2);
    }
    else if (vn3 >= vn1 && vn1 >= vn2)
    {
        /* code */
        printf("A ordem crescente dos numeros e: %i, %i, %i", vn2, vn1, vn3);
    }
    else if (vn1 >= vn3 && vn3 >= vn2)
    {
        /* code */
        printf("A ordem crescente dos numeros e: %i, %i, %i", vn2, vn3, vn1);
    }
    else if (vn3 >= vn2 && vn2 >= vn1)
    {
        /* code */
        printf("A ordem crescente dos numeros e: %i, %i, %i", vn1, vn2, vn3);
    }
    else if (vn2 >= vn3 && vn3 >= vn1)
    {
        /* code */
        printf("A ordem crescente dos numeros e: %i, %i, %i", vn1, vn3, vn2);
    }

}