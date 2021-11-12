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
	int a = 0;
	for(int i=0;i<n;i++){
		if(arr[i]>0){
			a = arr[i];
			break;
		}
	}
	if(a==0){
		printf("mang khong co so duong");
	}else{
		for(int i=0;i<n;i++){
			if(arr[i]>0 && arr[i]<a){
				a = arr[i];
			}
		}
		printf("so duong nho nhat: %d",a);
	}
}
