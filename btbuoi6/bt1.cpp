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
	int count = 0, total = 0;
	for (int i=0;i<n;i++){
		if(arr[i]%2!=0){
			total += arr[i];
			count++;
		}
	}
	if(count>0){
		printf("tb cac so le trong mang la: %f",(float)total/count);
	}else{
		printf("khong co so le nao ca");
	}
}
