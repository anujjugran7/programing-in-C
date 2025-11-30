#include<stdio.h> 
int main(){ 
int i,k,j; 
printf("NAME-ANUJ JUGRAN\n SAP ID - 590027919\n COURSE-BCA\n BATCH-6\n");
for(i=5;i>=1;i--){ 
for(k=5;k>=i;k--){ 
printf(" "); 
} 
for(j=1;j<=i;j++){ 
printf("%d",j); 
} 
printf("\n"); 
} 
}
