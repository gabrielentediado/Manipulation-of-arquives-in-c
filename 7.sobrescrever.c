#include <stdio.h>

int main(){

    FILE *arquivo;
    arquivo = fopen("nome_do_arquivo.txt", "w");
    //adicionando algo e criando o arquivo:
    if (arquivo == NULL) {
        printf("arquivo  não existe");
    }else {
        fputs("Hello world 2", arquivo);
        fclose(arquivo);
    }

    arquivo = fopen("nome_do_arquivo.txt", "w");

    if (arquivo == NULL) {
        printf("arquivo  não existe");
    }else {
        fputs("Hello world 2", arquivo);
        fclose(arquivo);
    }
    

    //note que apenas o hello word 2 foi para o txt
}