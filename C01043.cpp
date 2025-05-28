#include <stdio.h>

int main(){
	int a;
	scanf("%d", &a);
	int b=a;
	long long mod, sum=0;
	while(a!=0){
		long long product=1;
		mod=a%10;
		for(int i=1; i<=mod; i++){
			product*=i;
		}
		sum+=product;
		a/=10;
	}
	if(sum==b) printf("1");
	else printf("0");
	return 0;
}
