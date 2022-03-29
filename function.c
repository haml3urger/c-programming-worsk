#include<stdio.h>

int factorial(int);


int main(){
	
	int number;
	printf("Enter a number\n");
	scanf("%d",&number);
	int x;
	x =factorial(number);
	printf("%d", x);
		}
		
		int factorial(int number){
			int i, fact=1;
			for(i=number;i>=1;i--){
				fact= fact*i;
				}
				return fact;
			}
