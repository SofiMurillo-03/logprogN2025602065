#include <stdio.h>
#include <math.h>

int main()
{

    float preciom2, iva, areatriangulo, areaparalelogramo, lado, preciofinal, areatotal, alturat;

    preciom2 = 9256.00;
    iva = 0.16;
    lado = 12;

    alturat = sqrt(lado * lado - ((lado / 2.0) * (lado / 2.0)));

    areatriangulo = ((lado / 2.0) * alturat) / 2.0;

    areaparalelogramo = lado * ((1.0 / 2.0) * lado);

    areatotal = areatriangulo + areaparalelogramo;

    preciofinal = (areatotal * preciom2) + iva;

    printf("Altura del triángulo: %.2f\n", alturat);
    printf("Área del triángulo: %.2f\n", areatriangulo);
    printf("Área del paralelogramo: %.2f\n", areaparalelogramo);
    printf("Área total: %.2f\n", areatotal);
    printf("Precio final: %.2f\n", preciofinal);

    return 0;
}

