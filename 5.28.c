#include <stdio.h>
#include <stdlib.h>

void ReSmall(char EN);

int main(void){
	char EN;
	printf("��J�@�Ӥj�g�^��r��\n");
	scanf("%c", &EN);
	ReSmall(EN);
} 

void ReSmall(char EN){	
	printf("%c", EN+32);
} 
