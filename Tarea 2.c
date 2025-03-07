#include <stdio.h>

int main()
{
    float L = 7.0;

    float c1 = L * L;
    float c2 = (1.0 / 5.0) * L * (3.0 / 5.0) * L;
    float c3 = (1.0 / 5.0) * L * (1.0 / 5.0) * L;

    float pt = (23.0 / 5.0) * L + (3.1416 * L) / 2.0;

    float at = c1 + 2 * c2 + 2 * c3 + (3.1416 * pow((L / 2.0), 2)) / 2.0;

    printf("Area total: %.4f\n", at);
    printf("Perimetro total: %.4f\n", pt);
    return 0;
}
