#include <stdio.h>
#include <conio.h>

int main(){
	int a, b,c;
	printf("Enter three numbers");

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	
	 if(a>b && a>c){
		 printf("%d is greatest number",a);
		} 
		else if (b>a && b>c){
			printf("%d is greatest number" ,b);
			}
			else printf("%d is the greatest number", c);
		 
	}
