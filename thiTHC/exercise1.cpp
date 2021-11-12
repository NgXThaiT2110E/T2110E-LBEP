#include<stdio.h>
int main(){
	int n;
	int arr[n];
	int lastEvenNumber;
	int check = 0;
	printf("Enter numbers: ");
	scanf("%d", &n);
	printf("");
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	
	for(int j = 0; j < n; j++){
		if(arr[j] % 2 == 0){
			lastEvenNumber = arr[j];
			check++;
		}
	}
	if(check > 0){
		printf("Last Even:  %d", lastEvenNumber);
	}else{
		printf("No EVEN number");
	}
	
}
