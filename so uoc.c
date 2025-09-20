#include <stdio.h>

int main(){
	long long n;
	scanf("%d",&n);
	long long i;
	long long so_uoc = 0;
	for(i = 1; i <= n; i++){
		if(n % i == 0){
			so_uoc ++;
		}
	}
	printf("%lld",so_uoc);
	return 0;
}
