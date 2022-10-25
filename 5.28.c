#include <stdio.h>
#include <stdlib.h>

void ReSmall(char EN);

int main(void){
	char EN;
	printf("輸入一個大寫英文字母\n");
	scanf("%c", &EN);
	ReSmall(EN);
} 

void ReSmall(char EN){	
	printf("%c", EN+32);
} 
