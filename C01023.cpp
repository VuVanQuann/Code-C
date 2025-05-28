#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		long long max=-10e9,min=10e9;
		while(n>=0){
			long long du;
			du=n%10;
			if(du>max) max=du;
			if(du<min) min=du;
			n=n/10;
			if(n==0){
				if(max==min) printf("%lld %lld", max, min);
				else printf("%lld %lld", max, min);
				break;
			}
		}
	}
	return 0;
}
