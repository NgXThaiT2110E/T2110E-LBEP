//bai1  T?m so nguy?n to tiep theo cua n
bool KTSNT(int n){
	if(n <2) return false;
	if(n<4) return true;
	for(int i=2;i<=n/2;i++){
		if(n%i==0) return false;
	}
	return true;
}
int SNTTiepTheo(int n){
	for(int i=n+1; true ; i++ ){
		if(KTSNT(i)) return i;
	}
	return NULL;
}


//bai2  Tinh tong c?c chu so cua 1 so nguy?n n
int TongCacChuSo(int n){
	//if(n<0) n=-n;
	int total = 0;
	for( ; n!=0;n/=10){
		total+= abs(n%10);
	}
	return total;
}


//bai3  T?nh chu vi tam gi?c
int ChuVi(int a,int b, int c){
	if(a+b>c && a+c >b && b+c>a)
		return a+b+c;
	return 0;	
}


//bai4   T?nh dien t?ch tam gi?c
double DienTich(int a,int b, int c){
	int cv = ChuVi(a,b,c);
	if(cv == 0) return 0;
	double p = (double)p/2;
	return sqrt(p*(p-a)*(p-b)*(p-c));
}


//bai5  T?m uoc chung lon nhat cua 2 so
int UCLN(int a,int b){
	for(int i=a;i>0;i--){
		if(a%i==0 && b%i==0)
			return i;
	}
}


//bai6   T?m boi chung nho nhat cua 2 so
int BCNN(int a,int b){
	for(int i=a; true ;i++){
		if(i%a==0&&i%b==0)
			return i;
	}
}
