#include <stdio.h>
#include <math.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a;
		scanf("%d", &a);
		int count=0;
		for (int i=1; i<=sqrt(a); i++){
            if (a%i==0){
                if (i%2==0){
                    count++;
                }
                int left = a / i;
                if (left!=i&&left%2==0){
                    count++;
                }
            }
        }
		printf("%d\n", count);
	}
	return 0;
}
