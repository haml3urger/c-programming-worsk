#include <stdio.h>
#include <conio.h>
int main(){
	
int days;
int year, manth, remdays;
	printf("Enter the no of days");
	scanf("%d", &days);
year = days /365;
remdays = days%365;

manth = remdays/30;
int jdays;
jdays = remdays%30; 
printf("years %d",  year);
printf(" month %d", manth);
printf(" days %d", jdays);
}
