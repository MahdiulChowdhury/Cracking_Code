#include <stdio.h>

void function2(int **param) {
    //printf("param's holding addres %x\n", param);
    //printf("param's address memory place %x\n", &param);
    printf("param's value inside the addres it's holding %x\n", **param);
    param = NULL;
}

int main(void) {
    int variable = 111;
    printf("variable address %x\n", &variable);
    int *ptr = &variable;

    function2(&ptr);
    printf("ptr's value inside the addres it's holding %x\n", *ptr);
    printf("ptr's holding address %x\n", ptr);
    printf("ptr's address in memory %x\n", &ptr);
    return 0;
}