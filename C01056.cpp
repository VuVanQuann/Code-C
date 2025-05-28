#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long a;
		scanf("%lld", &a);
		int check=0;
		int mod1=a%10;
		a/=10;
		while(a!=0){
			int mod1=a%10;
			a/=10;
			int mod2=a%10;
			if(mod2<=mod1){
				check=1;
			}
			else{
				check=0;
				break;
			}
			a/=10;
		}
		if(check==0) printf("NO\n");
		else printf("YES\n");
	}
	return 0;
}
