#include <stdio.h>

int main(){
	long long a;
	long  max=-10e9;
	while (scanf("%lld", &a)==1){
    	if (a>max){
            max=a;
        }
    }
	printf("%d", max);
	return 0;
}
