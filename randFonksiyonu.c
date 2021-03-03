#include<stdlib.h>
#include<time.h>
#include<stdio.h>


int main(int argc, const char * argv[]){
	srand(time(NULL));
	float bakiye = (float) (rand() % 2000);
	
	float cekilen = 0;
	printf("Su anki bakiyeniz: %.2f \n",bakiye);
	
	
	printf("Cekmek istediginiz para miktarini girin:  ");
	scanf("%f ", &cekilen);
	
	if (cekilen <= bakiye)
	 {
	
	bakiye = bakiye - cekilen;

	printf("Cekilen para: %.2f \n  ",cekilen);
	printf("Kalan bakiye: %.2f \n",bakiye);

}

	
printf("Program sonlandi");
	
	

	return 0 ;
	
	
	
	
}
