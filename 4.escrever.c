#include <stdio.h>

//por exemplo:

int main(){
    //o "f"puts ou "f"open significa, possivelmente, "file" = fputs = fileputs

    FILE *arquivo;
    arquivo = fopen("nome_do_arquivo.txt", "w");//modo de escrita

    fputs("Hello word", arquivo);
    
    fclose(arquivo);
}