/bai2  Tinh tong c�c chu so cua 1 so nguy�n n
int TongCacChuSo(int n){
	//if(n<0) n=-n;
	int total = 0;
	for( ; n!=0;n/=10){
		total+= abs(n%10);
	}
	return total;
}
