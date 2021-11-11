#include<stdio.h>

int sdn(int n){
	int a = n%10;
	n /=10;
	int b;
	while(n > 0){
		b = n % 10;
		n /= 10;
		a = a*10+b;
	}
	return a;
}
int main(){
	int a;
	printf("nhap so can dao nguoc la : ",a);
	scanf("%d",&a);
	printf("so dao nguoc cua %d la : %d",a,sdn(a));
}
