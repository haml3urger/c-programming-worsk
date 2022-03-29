#include<stdio.h>
#include <conio.h>
int main(){
int num;
printf("Enter a number");
scanf("%d", &num); 
printf("%d,", num);
while (num!=1){
if(num%2==1){
	num=num*3+1;
	printf("%d,",num);
	}else 
	num=num/2;
	printf("%d,", num);
}
}
