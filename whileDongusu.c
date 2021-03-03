#include<stdio.h>
#include<math.h>


int main(int argc, const char** argv[]){
int sayi;
do {
	printf("Karekokunu almak istediginiz sayiyi girin: \n");
	printf(" \\ 0 girmek programi sonlandirir! \\  \n");
	scanf("%d",&sayi);
	float kok = sqrt(sayi);
	printf("Sayinin karekoku: %.2f \n",kok);
	
}	while( sayi == 0);
	printf("Programdan cikiliyor...");
	
	

	
		
		
	

	
	return 0;
	
}

