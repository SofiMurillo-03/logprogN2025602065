#include <stdio.h>

int main()
{
    int tipoPizza;
    int opcionIngrediente;

    printf("¿Que tipo de pizza deseas?\n");
    printf("1. Vegetariana\n");
    printf("2. No vegetariana\n");
    printf("Elige una opcion: ");
    scanf("%d", &tipoPizza);

    if (tipoPizza == 1) {
        printf("Elige un ingrediente:\n");
        printf("1. Tofu\n");
        printf("2. Pimiento\n");
        scanf("%d", &opcionIngrediente);

        printf("Has elegido una pizza vegetariana con: Mozzarella, tomate, ");
        if (opcionIngrediente == 1) {
            printf("tofu\n");
        } else {
            printf("pimiento\n");
        }

    } else if (tipoPizza == 2) {
        printf("Elige un ingrediente:\n");
        printf("1. Peperoni\n");
        printf("2. Jamon\n");
        printf("3. Salmon\n");
        scanf("%d", &opcionIngrediente);

        printf("Has elegido una pizza no vegetariana con: Mozzarella, tomate, ");
        if (opcionIngrediente == 1) {
            printf("peperoni\n");
        } else if (opcionIngrediente == 2) {
            printf("jamon\n");
        } else {
            printf("salmon\n");
        }

    } else {
        printf("Opción inválida\n");
    }

return 0;
}
