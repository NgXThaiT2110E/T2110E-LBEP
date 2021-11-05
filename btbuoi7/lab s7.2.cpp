#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int arr[n];
	printf("Nhap danh sach %d so nguyen:\n",n);
	for(int i=0;i<n;i++){
		int flag = 0;
		do{
			flag = 0;
			printf("Nhap so thu %d =",i);
			scanf("%d",&arr[i]);
			for(int j=0;j<i;j++){
				if(arr[j] == arr[i]){
					flag =1;
					printf("Da ton tai %d trong danh sach\n",arr[i]);
					break;
				}
			}
		}while(flag == 1);
	}
	printf("Mang sau khi nhap xong:\n");
	for(int i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
}
