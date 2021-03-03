#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
int main(int argc,const char** argv[]){
	srand(time(NULL));
	float bakiye = (float) (rand() % 2000);
	float cekilen;
	printf("Mevcut Bakiyeniz: %.2f \n",bakiye);
	printf("Cekmek istediginiz miktari giriniz: ");
	scanf(" %f", &cekilen);
	
	if(cekilen <= bakiye){
		bakiye = bakiye - cekilen;
		printf("Cektiginiz miktar: %.2f \n",cekilen);
		printf("Kalan bakiye: %.2f \n",bakiye);
		}
		else {
			printf("Bakiyeniz yeterli degil!!! \n");
			
		}
	printf("Program sonlandi");
	return 0 ;
	
	
	
	
}
