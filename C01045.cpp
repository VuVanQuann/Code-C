#include <stdio.h>
#include <math.h>

int main(){
	int a;
	scanf("%d", &a);
	int b=a;
	int count=0;
	while(a!=0){
		count++;
		a/=10;
	}
	int last=b%10;
	int first=b/(int)pow(10, count-1);
	printf("%d %d", first, last);
	return 0;
}
