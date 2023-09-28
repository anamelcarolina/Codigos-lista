#include <stdio.h>

int main(){

    char nivel;
    double dinheiro;
    printf("Insira o nivel de experiencia do funcionario entre a, b e c: \n");
    scanf("%c", &nivel);
    printf("Insira o salario do funcionario: \n");
    scanf("%lf", &dinheiro);
    switch (nivel) {
        case 'a':
        printf("R$ %0.2lf\n", dinheiro*1.05);
        break;

        case 'b':
        printf("R$ %0.2lf\n", dinheiro*1.07);
        break;

        case 'c':
        printf("R$ %0.2lf\n", dinheiro*1.08);
        break;

        default:
        printf("Opcao invalida\n");
        printf("Abortando...\n");
    }
    return 0;
}
