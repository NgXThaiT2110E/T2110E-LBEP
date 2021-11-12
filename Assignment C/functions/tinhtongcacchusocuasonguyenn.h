/bai2  Tinh tong các chu so cua 1 so nguyên n
int TongCacChuSo(int n){
	//if(n<0) n=-n;
	int total = 0;
	for( ; n!=0;n/=10){
		total+= abs(n%10);
	}
	return total;
}
