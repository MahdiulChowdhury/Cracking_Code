#include <stdio.h>

void function2(int **param) {
    //printf("param's holding addres %x\n", param);
    //printf("param's address memory place %x\n", &param);
    //int **temp = param;
    printf("param's value inside the addres it's holding %d\n", *(*param));
    //**param = 30;
    **param = 8;
}

int main(void) {
    int variable = 111;
    printf("variable address %d\n", &variable);
    int *ptr = &variable;
    int *ptr2 =&variable; 
    printf("&ptr= %d\n", &ptr);
    printf("ptr= %d\n", ptr);

    
    printf("&ptr2= %d\n", &ptr2);
    printf("ptr2= %d\n", ptr2);

    function2(&ptr);//passing the pointer to function by reference.
    function3(ptr2); //passing the pointer to function by address, the pointers value (the address it points to) is copied from 
    //the argument to the function's parameter. 
    printf("ptr's value inside the addres it's holding %d\n", *ptr);
    printf("ptr's holding address %d\n", ptr);
    printf("ptr's address in memory %d\n", &ptr);
    return 0;
}

void function3(int **param) {//or *param 
    //printf("param's holding addres %x\n", param);
    //printf("param's address memory place %x\n", &param);
    //int **temp = param;
    int a = 8; 
    printf("param's value inside the addres it's holding %d\n", (param));
    //*param = 7; 
    param = &a; 
    printf("%d\n", *param);
    /* 
    When passing an argument by address, the function parameter variable receives a copy of the address from the argument. At this point, the function parameter and the argument both point to the same value.
    If the function parameter is then dereferenced to change the value being pointed to, that will impact the value the argument is pointing to, since both the function parameter and argument are pointing to the same value!
    If the function parameter is assigned a different address, that will not impact the argument, since the function parameter is a copy, and changing the copy won’t impact the original. After changing the function parameter’s address, the function parameter and argument will point to different values, so dereferencing the parameter and changing the value will no longer affect the value pointed to by the argument.
    */
    //**param = 30;
    //param = NULL;
}
