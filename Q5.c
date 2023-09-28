#include <stdio.h>

int main(){

    long a, b;
    printf("Insira um valor positivo entre 0 e 1.000.000.000: ");
    scanf("%ld", &a);
    printf("Insira outro valor positivo entre 0 e 1.000.000.000: ");
    scanf("%ld", &b);
    
    if (a == b) {
        printf("Os valores lidos sao iguais\n");
    } else {
        if (a > b) {
            printf("%ld eh maior que %ld\n", a, b);
            if (a%b == 0)
                printf("%ld eh multiplo de %ld\n", a, b);
            else
                printf("%ld  nao eh multiplo de %ld\n", a, b);
        } else {
            if (b > a){
                printf("%ld eh maior que %ld\n", b, a);
                if (b%a == 0)
                    printf("%ld eh multiplo de %ld\n", b, a);
                else
                    printf("%ld  nao eh multiplo de %ld\n", b, a);
            }
        }
    }
    return 0;
}