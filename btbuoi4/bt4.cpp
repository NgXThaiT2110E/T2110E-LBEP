#include<stdio.h>
#include<conio.h>
int F(int n){
	if(n == 1 || n == 2)
	return 1;
	return F(n-1)+F(n-2);
}
int main(){
	int n;
	printf("nhap n: ");
	scanf("%d",&n);
	printf(" so fibonaci thu %d = %d",n,F(n));
	return 0;
}
