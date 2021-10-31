#include<stdio.h>
int main(){
	int n;
	printf("nhap n: ");
	scanf("%d",&n);
	if(n<=0){
		printf("so can tim la 0");
	}else if(n<=2){
		printf("so can tim la 1");
	}else{
		int a=0,b=1,c=1;
		for(int i=3;i<n;i++){
			a=b;
			b=c;
			c=a+b;
		}
		printf(" so can tim la %d",c);
	}
}
