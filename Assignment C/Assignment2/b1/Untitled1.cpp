#include<stdio.h>
int main(){
	int a;
	int b = 0;
	printf("a = ");
	scanf("%d", &a);
	
	if(a != 0){
		b = a%10 + b * 10;
		a = a / 10;
		printf("%d\n", b);
	}
	if(a != 0){
		b = a%10 + b * 10;
		a = a / 10;
		printf("%d\n", b);
	}
	if(a != 0){
		b = a%10 + b * 10;
		a = a / 10;
		printf("%d\n", b);
	}
}
