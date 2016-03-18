// ��һ��������ת��Ϊ��������
#include <stdio.h>

int main(void){
	// �������� 
	const char baseDigits[16] = {
		'0', '1', '2', '3', '4', '5', '6', '7',
		'8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };
	// �����ʾ64λ���� 
	int convertedNumber[64];
	long int numberToConvert;
	int nextDigit, base, index = 0;
	
	// ��ȡ�����ͻ���
	
	printf("Number to be converted? ");
	scanf("%ld", &numberToConvert);
	printf("Base? ");
	scanf("%i", &base);
	
	// ������ת������
	
	do{
		convertedNumber[index] = numberToConvert % base;
		++index;
		numberToConvert = numberToConvert / base;
	} 
	while(numberToConvert != 0);
	
	// �����ӡ��ת����Ľ��
	printf("Converted number = ");
	
	for(--index; index >= 0; --index){
		nextDigit = convertedNumber[index];
		printf("%c", baseDigits[nextDigit]);
	} 
	
	printf("\n");
	return 0;
} 