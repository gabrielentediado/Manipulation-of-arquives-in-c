#include <stdio.h>

int main(){
    //para iniciar um arquivo em C
    FILE *arquivo;
    //para iniciar um arquivo em C
    arquivo = fopen("nome_do_arquivo.txt", "w");
                            //nome e tipo do arquivo, mode r= read, w=write e sobrescreve, a=write, mas não sobrescreve;

    //o "w" e "a" criam o arquivo se ele não existir, já o "r" não cria;

}