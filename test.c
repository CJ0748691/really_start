#include <stdlib.h>
#include <stdio.h>
char* name();

int main(void){
    printf("Hello World! %s", name());
    system("PAUSE");
    return 0;
}
char* name(){
    return "John";
}
