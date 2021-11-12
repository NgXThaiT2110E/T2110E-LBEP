#include<stdio.h>

int ktsnt(int n){
	if(n <= 1){
		return false;
	}
	for(int i = 2; i < n; i++){
		if(n%i == 0){
			return false;
		}
	}return true;
}
 int main(){
 	int n;
 	printf("nhap so can kiem tra : ");
 	scanf("%d",&n);
 	if(ktsnt(n)){
 		printf("%d la snt",n);
	 }else{
	 	printf("%d khong phai la snt",n);
	 }
 }
