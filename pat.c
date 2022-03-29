#include<stdio.h>
int main(){
int i,j,space,m; 
for(i=1; i<=3; i++){
for(space=3; space>=i; space--){
	printf("\t");
}
	for(j=i; j>=1; j--){
		printf("%d\t", j);
	}
for(m=2; m<=i; m++){
		printf("%d\t", m);
	}		

	printf("\n");
	}
}


