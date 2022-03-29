#include <stdio.h>
#include <conio.h>
int main(){
	
int sec;
int hour, min, remsec;
	printf("Enter seconds");
	scanf("%d", &sec);
hour = sec/3600;
remsec= sec%3600;
min= remsec/60;
sec = remsec%60; 
printf("hour %d",  hour);
printf(" minute %d", min);
printf(" second %d", sec);
}
