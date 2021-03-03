#include<stdio.h>
#define NOTSAYISI 10
void notlariOku(int[] , int);
double ortalamaBul(int[], int);

int main(int argc, char * argv[]){
	int notlar[NOTSAYISI];
	notlariOku(notlar , NOTSAYISI);
	double ortalama=ortalamaBul(notlar, NOTSAYISI);
	printf("Girdiginiz notlarin toplami : %.2f",ortalama);
	
	return 0;
	
}

void notlariOku(int notlar[] , int sayi){
	int i;
	for(i=0;i<sayi;i++){
		printf("%2d. sayiyi giriniz: ",i+1);
		scanf("%d", &notlar[i]);
	}
	}
double ortalamaBul(int notlar[],int sayi){
double	toplam = 0;
int i;
for( i =0;i<sayi;i++){
	toplam+=notlar[i];
	
}
return toplam / (double) sayi;
	
}
