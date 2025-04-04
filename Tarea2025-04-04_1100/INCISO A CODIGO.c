#include <stdio.h>

int main()
{
    float peso, estatura, imc;

    printf("¿Cual es tu peso en kg?\n");
    scanf("%f", &peso);

    printf("¿C es tu estatura en metros?\n");
    scanf("%f", &estatura);

    imc = peso / (estatura * estatura);

    printf("Tu IMC es: %.2f\n", imc);

    if (imc <= 18.4) {
        printf("Tienes bajo peso\n");
    } else if (imc >= 18.5 && imc <= 24.9) {
        printf("Tienes un peso normal\n");
    } else if (imc >= 25.0 && imc <= 29.9) {
        printf("Tienes sobrepeso\n");
    } else if (imc >= 30.0 && imc <= 34.9) {
        printf("Tienes obesidad clase 1\n");
    } else if (imc >= 35.0 && imc <= 39.9) {
        printf("Tienes obesidad clase 2\n");
    } else if (imc >= 40.0) {
        printf("Tienes obesidad clase 3\n");
    }

    return 0;
}
