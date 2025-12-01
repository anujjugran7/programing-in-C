#include <stdio.h>
int count = 0;
void increment() {
    count++; 
    printf("Inside increment(): count = %d\n", count);
}

void reset() {
    count = 0;  
    printf("Inside reset(): count reset to %d\n", count);
}

void display() {
    printf("Inside display(): current count = %d\n", count);
}

int main() {
	printf("Name - anuj jugran\nSAP ID - 590027919\nCourse-BCA\nBatch-B6");
    printf("\n--------------------------------\n");
    
    printf("Initial count in main(): %d\n", count);
    increment();  
    increment();  
    display();    
    reset();     
    display();    
    return 0;
}


