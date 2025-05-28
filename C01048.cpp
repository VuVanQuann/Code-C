#include <stdio.h>

int main(){
	int a;
	scanf("%d", &a);
	int count1=0, count2=0;
	int mod;
	while(a!=0){
		count1++;
		mod=a%10;
		if(mod%2==0) count2++;
		a/=10;
	}
	printf("%d %d", count1-count2, count2);
	return 0;
}
