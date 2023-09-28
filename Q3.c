#include <stdio.h>

int main(){

    int senha, outraSenha;
    printf("Insira um valor positivo entre 1000 e 9999: ");
    scanf("%d", &senha);
    printf("senha cadastrada: %d\n", senha);
    scanf("%d", &outraSenha);
    
    while (senha != outraSenha){
         printf("senha invalida!\n");
         scanf("%d", &outraSenha);
    }
    printf("senha valida!\n");
    return 0;
}