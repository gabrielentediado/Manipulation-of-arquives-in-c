#include <stdio.h>
//ponteiros
int main(){
    //aqui você está reservando um espaço de memória estáticamente e atribuindo a variável(numero) do tipo de dado int o valor 10;
    int numero = 10;
    //ponteiro aponta para o endereço de memória de uma variável;
    int * prt = &numero;

    printf("%d\n", &prt); //note que ambas tem o mesmo endereço de memória, pois o ponteiro, como o próprio nome explica, só aponta.
    printf("%p\n",prt);
    printf("%d\n", *prt);

    printf("%p\n", &numero);

    int array[10];
    int *prt_array = array;
    for (int i =0; i < 10; i++) {
        array[i] = i+1;
    }
    for (int i =0; i < 10; i++) {
        printf("%d\n", *(prt_array + i));
    }

}