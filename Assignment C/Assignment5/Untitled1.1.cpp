#include<stdio.h>
int main(){
	int n,x;
	printf("nhap n = ");
	scanf("%d",&n);
	 if(x%2==0){
	 	for(x=0;x<n;){
	 		x = x + 2;
	 		printf("so chan nho hon n = %d",x);break;
		 }
	 	
	 }else{
	 printf("so le");
	}
}
