#include <stdio.h>
#include <stdlib.h>

void power(int base, int exponent);

int main(void){
	int a, b;
	printf("��J��Ʀr�A��Xa��b����\n");
	scanf("%d %d", &a, &b);
	power(a, b);
} 

void power(int base, int exponent){
	int ans=base;
	for(int i=2; i<=exponent; i++){
		ans = ans*base;
	}
	printf("%d", ans);
}

