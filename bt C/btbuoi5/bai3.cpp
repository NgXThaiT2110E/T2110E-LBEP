#include<stdio.h>
int main(){
	int a,b,c,i;
	printf("nhap a = ");
	scanf("%d",&a);
	printf("nhap b = ");
	scanf("%d",&b);
	for(i=1;i <= a || i <=b;i++){
		if(a%i == 0 && b%i == 0){
		c = i;
		}
	}
	printf("uscln cua a va b la: %d",c);
	return 0;
}
