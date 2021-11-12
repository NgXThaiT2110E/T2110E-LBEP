int sdn(int n){
	int a = n%10;
	n /=10;
	int b;
	while(n > 0){
		b = n % 10;
		n /= 10;
		a = a*10+b;
	}
	return a;
}
