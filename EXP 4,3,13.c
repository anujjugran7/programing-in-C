#include<stdio.h> 
int main(){ 
int i,j,k; 
printf("NAME - ANUJ JUGRAN\n SAP ID-590027919\n COURSE-BCA\n BATCH-6\n");
for(i=1;i<=5;i++){ 
for(k=1;k<=i;k++){ 
printf(" "); 
} 
for(j=5;j>=i;j--){ 
printf("%d",j); 
} 
printf("\n"); 
} 
} 
