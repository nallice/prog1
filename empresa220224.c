#include <stdio.h>

int main() {
    char nome[19];

    printf("Insira seu nome: \n");
    scanf("%18s", nome);

    int d, m, a;

    printf("Data de nascimento (dd/mm/aa): ");
    scanf("%d %d %d", &d, &m, &a);

    char sexo;

    printf("Sexo (F/M): \n");
    scanf(" %c", &sexo);

    char grau;

    printf("Aponte seu grau de instrucao: \n");
    printf("1-Ensino Fundamental Incompleto\n");
    printf("2-Ensino Fundamental Completo\n");
    printf("3-Ensino Medio Incompleto\n");
    printf("4-Ensino Medio Completo\n");
    printf("5-Ensino Superior Incompleto\n");
    printf("6-Ensino Superior Completo\n");
    scanf(" %c", &grau);

    char endereco[99];

    printf("Insira seu endereco: \n");
    scanf("%98s", endereco);

    char fone[17];

    printf("Numero de telefone (xx xxxxxx-xxxx): \n");
    scanf("%16s", fone);

    return 0;
}