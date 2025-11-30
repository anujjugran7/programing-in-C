#include<stdio.h> 
int main(){ 
int i,j,k; 
printf("NAME - ANUJ JUGRAN\n SAP ID -590027919\n COURSE-BCA\n BATCH-6\n");
for(i=1;i<=5;i++){ 
for(k=5;k>=i;k--){ 
printf(" "); 
} 
for(j=1;j<=i;j++){ 
printf("%d",j); 
} 
for(j=i-1;j>=1;j--){ 
printf("%d",j); 
} 
printf("\n"); 
}  
for(i=5;i>=1;i--){  
for(k=6;k>=i;k--){ 
printf(" "); 
} 
for(j=1;j<=i-1;j++){ 
printf("%d",j); 
} 
for(j=i-2;j>=1;j--){//upper half 
printf("%d",j); 
} 
printf("\n"); 
} 
}
