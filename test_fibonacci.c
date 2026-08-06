#include <stdio.h>
#include <assert.h>
#include "function_fibonacci.c"

int main(void) {
    assert(fibonacci(0) == 0);
    assert(fibonacci(1) == 1);
    assert(fibonacci(6) == 8);
    assert(fibonacci(9) == 34);

    printf("Todos os testes passaram!\n");
    printf("Criado por Valentina Andrade");

    return 0;
}
