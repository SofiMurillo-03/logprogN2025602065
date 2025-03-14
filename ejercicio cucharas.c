#include <stdio.h>
#include <math.h>

int main ()
{
    int paquetes;

    printf ("Ingresa el numero de paquetes:");
    scanf("%d", &paquetes);

    float salarioBruto, ISR, salarioNeto;
    float totalCucharas;

    salarioBruto = paquetes / 2;
    ISR = salarioBruto * 0.1;
    salarioNeto = (float)(salarioBruto - ISR);
    totalCucharas = paquetes * 12;

    printf("Salario Bruto; %.2f,\n", salarioBruto);
    printf("Salario Neto; %.2f, \n", salarioNeto);
    printf("Total de Cucharas; %.2f, \n", totalCucharas);
    printf("Isr; %f, \n", ISR);
    return 0;
}

