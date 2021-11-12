//bai1  Tìm so nguyên to tiep theo cua n
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
