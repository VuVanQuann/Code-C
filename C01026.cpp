#include <stdio.h>
#include <math.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a;
		scanf("%d", &a);
		int check=1;
		for(int i=2; i<sqrt(a); i++){
			if(a%i==0){
				check=0;
				break;
			}
		}
		if(check!=1) printf("NO\n");
		else printf("YES\n");
	}
	return 0;
}
