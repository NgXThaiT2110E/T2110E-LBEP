#include<stdio.h>
float average(int s[], int n){
	int sum = 0;
	float avg = 0;
	
	for(int i = 0; i < n; i++){
		sum += s[i];
	}
	avg = (float)sum/n;	
	return avg;
}
int main(){
	int n;
	int s[n];
	printf("Enter array: ");
	scanf("%d", &n);
	printf("");
	for(int i = 0; i < n; i++){
		scanf("%d", &s[i]);
	}
	printf("Average: %.2f", average(s, n));
}
