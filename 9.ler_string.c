#include <stdio.h>

int main() {
    // ler um arquivo
    FILE *p;
    char c[10], *resultado;

        
    p = fopen("arquivo.txt", "r");

    if (p) {
        while (!feof(p)){ 
            //file end of file
            resultado = fgets(c,10,p);
            if(resultado){
                printf("%s", c);

            }
            
        }
        fclose(p); 
    } else {
        printf("Arquivo não existe");
    }

    return 0;
}
