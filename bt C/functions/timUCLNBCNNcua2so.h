/bai5  T�m uoc chung lon nhat cua 2 so
int UCLN(int a,int b){
	for(int i=a;i>0;i--){
		if(a%i==0 && b%i==0)
			return i;
	}
}


//bai6   T�m boi chung nho nhat cua 2 so
int BCNN(int a,int b){
	for(int i=a; true ;i++){
		if(i%a==0&&i%b==0)
			return i;
	}
}
