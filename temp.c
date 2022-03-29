#include<stdio.h>

float temp(int);
float fah;
int main(){
int cel;
printf("Enter the temperature in celsuis");
scanf("%d", &cel);
float x = fah;
printf("%f", x);
}

float temp(int cel){
	
fah = (cel*1.8)/32;
return fah;
}
