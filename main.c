#include <stdio.h>
#include "functions.h"

int main() {
    int a, b, choix;
    printf("Entrez deux nombres : ");
    scanf("%d %d", &a, &b);

    printf("Choisissez une opération :\n");
    printf("1. Addition\n2. Soustraction\n3. Multiplication\n4. Division\n");
    scanf("%d", &choix);

    switch (choix) {
        case 1: printf("Résultat: %d\n", addition(a, b)); break;
        case 2: printf("Résultat: %d\n", soustraction(a, b)); break;
        case 3: printf("Résultat: %d\n", multiplication(a, b)); break;
        case 4: printf("Résultat: %.2f\n", division(a, b)); break;
        default: printf("Choix invalide\n");
    }

    return 0;
}


 


	
