#include <math.h>
#include <stdio.h>
int main ()
{
    int L = 7;
    float at=2*3*L*L+ (2*3*L*L)/2.0+
    M_PI*pow(3*L/2.0,2)/2;

    float semic = (M_PI * (3 * L)) / 2.0;
    float pt = (3 * L) + (6 * L) + semic;

    printf("Area total= %f\n",at);
    printf("Perimetro total= %f\n",pt);
}
