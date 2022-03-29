#include<stdio.h>
int main(){
	int marks[7];
	int i, sum =0;
	float ave =0;
	
	for(i =0; i<7; i++){
		
		printf("Enter the marks");
		scanf("%d", &marks[i]);
	}
		for(i =0; i<7; i++){
		sum = sum + marks[i];
			}
			ave = sum/7;

			printf("%d\n", sum);
			printf("%f", ave);
		}
