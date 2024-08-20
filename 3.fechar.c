#include <stdio.h>

int main(){
    FILE *arquivo;
    arquivo = fopen("nome_do_arquivo.txt", "w");
    fclose(arquivo); //quando você abre um arquivo e necessário fechar, para não ficar rodando         
}