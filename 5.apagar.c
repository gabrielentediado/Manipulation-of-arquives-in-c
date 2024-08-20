#include <stdio.h>

int main(){

    FILE *arquivo;
    arquivo = fopen("nome_do_arquivo.txt", "w");//abrir

    remove(arquivo);

    //para analisar se foi apagado ou não:

    if (arquivo == NULL) {
        printf("arquivo apagado com sucesso");
    }else {
        printf("erro ao apagar arquivo");
    }

    //ou

    if (remove(arquivo)==0){
        printf("arquivo apagado com sucesso");
    
    }else {
        printf("erro ao apagar arquivo");
    }


    fclose(arquivo);//sempre fechar
}