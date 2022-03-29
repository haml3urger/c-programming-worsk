#include<stdio.h>
int main(){
int number[5];
int i;
printf("Enter 5 numbers");
for (i=0; i<5; i++){
scanf("%d", &number[i]);
}
int j, large =0;
for(i=0;i<5;i++){
	for(j=i+1; j<5;j++){
	if(number[j]<number[i]){
		 large = number[i];
		 number[i]= number[j];
		 number[j]= large;
		}
		 }
		 }
		 for(j=0; j<5;j++){
		 printf("%d\t", number[j]);
		}
}
