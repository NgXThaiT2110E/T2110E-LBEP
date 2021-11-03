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
	int x;
	printf("nhap so x can tim kiem: ");
	scanf("%d",&x);
	
	int flag=0;
	for(int i=0;i<n;i++){
		if(arr[i] == x){
			printf("%d nam trong danh sach vua nhap",x);
			flag=1;
			break;
		}
	}
	if(flag==0){
		printf("%d khong ton tai trong danh sach",x);
	}
}
