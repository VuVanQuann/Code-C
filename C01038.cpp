#include <stdio.h>
#include <math.h>

int main(){
	int a;
	scanf("%d", &a);
	int count=0;
	int b=a;
	while(b!=0){
		b/=10;
		count++;
	}
	int mod=a%10;
	int left=a/10;
	int mid=left%(int)pow(10,count-2);
	int first=a/(int)pow(10,count-1);
//	printf("%d %d %d %d", mod, left, mid, first);
	if(mod==0) printf("%d", mid*10+first);
	else printf("%d", mod*(int)pow(10,count-1)+mid*10+first); 
	return 0;
}
