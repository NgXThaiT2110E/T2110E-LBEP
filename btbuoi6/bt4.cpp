#include<stdio.h>
int main(){
	int n;
	printf("nhap n=");
	scanf("%d",&n);
	int arr[n];
	
	for(int i=0;i<n;i++){
		printf("nhap phan tu %d: ",i);
		scanf("%d",&arr[i]);
	}
	int sole = 0;
	for(int i=n-1;i>=0;i--){
		if(arr[i]%2!=0){
			sole = arr[i];
			break;
		}
	}
	if(sole != 0){
		printf("so le cuoi cung: %d",sole);
	}else{
		printf("mang khong co so le nao ca");
	}
}
