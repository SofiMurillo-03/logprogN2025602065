#include <stdio.h>
#include <math.h>

int main() {
    int L;
    L = 2;

    float a = L * L;
    float b = L * L / 2;
    float c = L * L / 2;
    float d = ((3.0 / 2) * L * 2.0) / 2.0;
    float e = (2 * L) * (1.0 / 4 * 2);

    float PT = sqrt(13) + 2 * (sqrt(8)) + 10;
    float AT = a + b + c + d + e;

    printf("El perimetro total es: %.4f\n", PT);
    printf("El area total es: %.2f\n", AT);

    return 0;
}

