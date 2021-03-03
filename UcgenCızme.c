#include<stdio.h>
int main(){
	int sayi = 0;
	int i;
	int j;
	printf("Bir sayi giriniz: \n");
	scanf("%d", &sayi);
	
	for (i=0;i <=sayi ; i++){
		for(j=0; j<=i ; j++){
			printf("*");
			
		}
		printf("\n");
	}
	return 0;
	
}
