#include <stdio.h>

int moved=0;

void hanoi(int n, char A, char B, char C) {
    if(n == 1) {
        printf("�q %c ���� %c\n", A, C);
        moved++;
    }
    else {
        hanoi(n-1, A, C, B);	//���N�̩��h�H�~��������B 
        hanoi(1, A, B, C);		//�A�⩳�h����C 
        hanoi(n-1, B, A, C);	//�b���Ĥ@���@�˪����ơA��B������C 
    }
}

int main() {
    int n;
    printf("��J�e����h�ơG");
    scanf("%d", &n);
    hanoi(n, 'A', 'B', 'C');
    printf("\�����ಾ��%d\�ӨB�J\n\n",moved);
    system("pause");
    return 0;
}

