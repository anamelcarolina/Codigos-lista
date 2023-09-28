#include <stdio.h>

int main(){

    int ano;
    printf("Insira um valor entre 1800 e 2022: ");
    scanf("%d", &ano);
    
    if (ano < 1896){
        printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d.\n", ano);
    } else {
        if(ano < 1930){
            if(ano%4 == 0)
                printf("Os Jogos Olimpicos de Verao ocorreram no ano de %d.\n", ano);
            else
                printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d.\n", ano);
        } else {
            if(ano%4 == 0)
                printf("Os Jogos Olimpicos de Verao ocorreram no ano de %d.\n", ano);
            else {
                if ((ano+2)%4 == 0)
                    printf("A Copa do Mundo de Futebol ocorreu no ano de %d.\n", ano);
                else 
                    printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d.\n", ano);
            }
        }
    }   
    return 0;
}
