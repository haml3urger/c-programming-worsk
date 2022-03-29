#include<stdio.h>
int main(){
printf("Enter 10 number");
int num[10],i, j;

//entering the data in array 
for(i=0;i<10;i++){
scanf("%d", &num[i]);
}

//sorting the array 
int temp;
for(i=0; i<10-1;i++){
for(j=0;j<(10-i-1);j++)
if(num[j] > num[j + 1]){               
temp = num[j];
num[j]= num[j+1];
num[j+1] =temp;          
 }
}
for(i=0;i<10;i++){
    printf("%d\t", num[i]);}
    
//to check number position after sorting
int check;
printf("\n Enter the number you want to search");
scanf("%d", &check);
int k;
for(k=0;k<10;k++){
    if(num[k]==check){
    k++;
    break;}
}
    printf("\n the number is in %d",k);
}
