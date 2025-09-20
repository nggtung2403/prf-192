#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int i;
	int so_uoc = 0;
	for(i = 1; i <= n; i++){
		if(n % i == 0){
			so_uoc ++;
		}
	}
	printf("%d",so_uoc);
	return 0;
}
