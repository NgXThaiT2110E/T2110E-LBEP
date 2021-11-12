//bai3  Tính chu vi tam giác
int ChuVi(int a,int b, int c){
	if(a+b>c && a+c >b && b+c>a)
		return a+b+c;
	return 0;	
}


//bai4   Tính dien tích tam giác
double DienTich(int a,int b, int c){
	int cv = ChuVi(a,b,c);
	if(cv == 0) return 0;
	double p = (double)p/2;
	return sqrt(p*(p-a)*(p-b)*(p-c));
}
