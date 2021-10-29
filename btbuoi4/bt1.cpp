#include<stdio.h>
int main(){
	int n,i;
	float S;
	printf("nhap n=");
	scanf("%d",&n);
	i = 1;
	S = 0;
	
	while(i <= n){
		S += (float)1/i;
		i++;
	}printf("Tong S = %f", S);
}
