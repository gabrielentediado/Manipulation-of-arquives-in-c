#include <stdio.h>

int main() {

    FILE *p;
    char c;

    p = fopen("arquivo.txt", "r");

    if (p) {
        while ((c = getc(p)) != EOF) {

            //end of file
            printf("%c", c);
        }
        fclose(p); 
    } else {
        printf("Arquivo não existe");
    }

    return 0;
}
