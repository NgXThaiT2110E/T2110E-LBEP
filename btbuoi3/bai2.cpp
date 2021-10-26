#include<stdio.h>
int main(){
	int a,b; 
	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);
	
	if(a>=b){
		if(b==0){
			printf("eror...");
		}else{
			printf("ket qua: %f",(float)a/b);
		}
	}else{
		printf("ket qua: %f",(float)a*b); 
	} 
} 
