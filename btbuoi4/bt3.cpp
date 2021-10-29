#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	printf("nhap a = ");
	scanf("%d",&a);
	printf("nhap b = ");
	scanf("%d",&b);
	printf("nhap a = ");
	scanf("%d",&c);
	int x,p,s = 0;
	if(a+b>c && b+c>a && c+a>b){
		x = a + b + c;
		p =(a + b + c)/2;
		s = sqrt(p*(p-a)*(p-b)*(p-c));
		printf("chu vi = %d\n",x);
		printf("dien tich = %d",s);
	}else{printf("khong phai hinh tam giac");
	}
}
