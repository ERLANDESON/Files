#include <stdio.h>
#include <stdlib.h>
int main()  {
    int a=100;
    int *ptr; /* declara um ponteiro para um inteiro */

/* um ponteiro para uma variável do tipo inteiro */

    ptr = &a; /* ptr recebe o endereço da variável a */
    printf("Valor de ptr: %p\n ---> Conteudo de ptr: %d\n", ptr, *ptr);
    
    a = 200;
    printf("Valor de ptr: %p\n ---> Conteudo de ptr: %d\n", ptr, *ptr);
    system("pause");
}
