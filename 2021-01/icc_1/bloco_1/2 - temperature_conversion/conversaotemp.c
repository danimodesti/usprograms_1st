//incluir biblio para comandos de entrada e saida como scanf e printf
#include <stdio.h>

//funçao principal
int main() {

    float fahrenheit;
    scanf("%f", &fahrenheit);

    //converta para celsius
    float celsius = 5 * (fahrenheit - 32) / 9;
    //imprima valor convertido para celsius
    printf("%.2f\n", celsius);

    //fim do programa, retorne 0
    return 0;
}