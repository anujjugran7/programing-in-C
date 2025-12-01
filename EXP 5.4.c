#include <stdio.h>
void counter() {
    static int count = 0;  
    count++;  
    printf("Function called %d times\n", count);
}

int main() {
printf("Name - Gaurav Singh\nSAP ID - 590027719\nCourse-BCA\nBatch-B6");
printf("\n--------------------------------\n");

    counter(); 
    counter();  
    counter();  
    return 0;
}

