#include<stdio.h>

int main() {
	int a=4;
	int b=5;
	for (a=4,b=5 ; a*b <= 100 ; a+=1, b+=1){
	
	printf("a sayisinin su anki degeri: %d \n",a);
	printf("b sayisinin su anki degeri: %d \n",b);
	printf("axb nin degeri: %d \n",a*b);
}
	
	
	return 0;
}
