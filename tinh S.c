#include <stdio.h>

int main(){
	int n;
	float S = 0;
	scanf("%d",&n);
	int i;
	if(n > 0){
		for( i = 1; i <= n; i++){
			S += 1.0/i;
			}
			printf("%.3f",S);
		}
	}
