#include <stdio.h>

int main(){
	int a,b;
	scanf("%d %d", &a, &b);
	int sum=0;
	if(a<b){
		for(int i=a; i<=b; i++){
			sum+=i;
		}
	}
	else{
		for(int i=b; i<=a; i++){
			sum+=i;
		}
	}
	printf("%d", sum);
	return 0;
}
