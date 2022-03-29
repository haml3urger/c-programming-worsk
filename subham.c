#include <stdio.h>
#include <conio.h>

int main() {
	int l, b, p, a;
	printf ("Enter length ");
	scanf ("%d", &l);
	printf("Enter breath ");
	scanf ("%d", &b);
	p= 2*(l+b);
	a= l*b;
	printf ("The perimeter of the recangle is %d \nThe  area of the rectangle Is %d", p ,a);
	return 0;

}
