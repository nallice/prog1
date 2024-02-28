#include <stdio.h>

int main() {
    int T;

    printf("Digite o total da conta: ");
    scanf("%d", &T);

    int p; 

    printf("Numero de pessoas: ");
    scanf("%d", &p);

    float R = T / p;

    printf("Cada um deve pagar: %2.2f\n", R);

    return 0;
}