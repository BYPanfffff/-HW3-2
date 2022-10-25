#include <stdio.h>
#include <stdlib.h>

void power(int base, int exponent);

int main(void){
	int a, b;
	printf("輸入兩數字，輸出a的b次方\n");
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

