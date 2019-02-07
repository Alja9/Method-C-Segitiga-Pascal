#include <stdio.h>
int faktorial(int n){
	if(n==1||n==0){
		return 1;
	}
	return n*faktorial(n-1);
}
int nCr(int n, int r){
	return faktorial(n)/(faktorial(r)*faktorial(n-r));//n!/(n-r)!r!
}
int main(){
	int n=10;
	int i, j, k;
	for(i=0;i<n;i++){
		for(j=n-i;j>0;j--){
			printf("   ");
		}
		for(k=0;k<=i;k++){
			printf("%6d", nCr(i,k));
		}
		printf("\n");
	}
}
