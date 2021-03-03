#include<stdio.h>
int main() {
	int bulundu = 0;
	int i;
	int arananSayi;
	int dizi[15]= {2,7,23,67,123,9,21,0,124,789,34,8,1235,14,5};
	
	printf("Aranmasini istediginiz sayiyi girin: \n");
	scanf("%d", &arananSayi);
	for(i=0;i<15;i++){
		if (dizi[i] == arananSayi){
			bulundu = 1;
			break;
		}
		
		
	}
	if (bulundu==1)
	printf("Bulundu: aradiginiz sayi dizinin %d . elemani \n",i+1);
	else
	printf("Aradiginiz deger dizide bulunmamaktadir. \n");
	return 0;
	
	
}
