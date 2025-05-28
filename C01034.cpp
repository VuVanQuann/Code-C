#include <stdio.h>
#include <math.h>

int main(){
	int m,n;
	scanf("%d %d", &m, &n);
	int count=0;
	int bac2;
	for(int i=m; i<=n; i++){
		int a=sqrt(i);
		if(a*a==i) count++;
	}
	printf("%d\n", count);
	for(int i=sqrt(m); i<=sqrt(n); i++){
		bac2=i*i;
		printf("%d\n", bac2);
	}
	return 0;
}
