#include<stdio.h>
int main(){
	int n;
	printf("nhap n: ");
	scanf("%d",&n);
	 if(n <= 0){
	 	printf("so can tim la 0");
	 }else if(n <= 1){
	 	printf("so can tim la 1");
	 }else if(n <= 2){
	 	printf("so can tm la 2");
	 }else{
	 	int x1=0,x2=1,x3=1;
	 	for(;x2+x3<=n;){
	 		x1 = x2;
	 		x2 = x3;
	 		x3 = x1 + x2;
		 }printf("so fibonaci gan voi n nhat : %d",x3);
	 }
	 	
	
}
