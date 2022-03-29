#include<stdio.h>
int largest(int[], int);
 int main(){
	 int n;
	 printf("Enter the number you want");
	 scanf("%d", &n);
	 
int num[n],i;
for(i=0;i<n;i++){
scanf("%d", &num[i]);
}
int x;
x =largest(num, n);
printf("%d", x);
 return 0;
 }


int largest(int num[], int n){
	int large, i;
	for(i =1; i<n;i++){
		if(num[i]>num[i-1])
		large = num[i];
		}
	
	return large;
}
