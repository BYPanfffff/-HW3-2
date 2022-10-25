#include <stdio.h>
#include <stdlib.h>

void lcm(int a, int b);

int main(void){
	int a, b, i;
	printf("¿é¤J¨â¼Æ¦r\n");
	scanf("%d %d", &a, &b);
	lcm(a, b);
} 

void lcm(int a, int b){
	int i=1;
	 while (1) // (flag = 1)  
    {  
        if (i % a == 0 && i % b == 0)  
        {  
            printf( "The LCM of %d and %d is %d. ", a, b, i);  
            break;  
        }  
        i++; // pre-increment max_div  
    }  
}

