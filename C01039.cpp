#include <stdio.h>

int main(){
	int a;
	scanf("%d", &a);
	int count=0;
	while(a!=0){
		count++;
		a/=10;
	}
	printf("%d", count);
	return 0;
}
