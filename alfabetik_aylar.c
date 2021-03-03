#include<stdio.h>
#include<string.h>

void sirala(char[][8],char sirali_aylar[][8]); // Fonksiyonumuzun imzasini yapiyoruz.

int main(){
	char aylar[12][8];
	char sirali_aylar[12][8];
	char *p_aylar[12];
	printf(" Aylari alfabetik siraya gore yazdiran programa hosgeldiniz !!! \n ");
	printf("--------------------------------------------------------------- \n");
	 
	 int a = 0;
	 // Once aylari kullanicidan aliyoruz.
	 do{
	 	printf("%d.ayi giriniz: \n",a+1);
	 	scanf("%s",aylar[a]);
	 	a++ ;
	 } while (a < 12);
	 printf("\n");
	 int b;
	 //aylar dizisndeki elemanlarin adreslerini p_aylar pointerina atýyoruz
	 for(b=0;b<12;b++){
	 	p_aylar[b]= aylar[b];
	 }
	 //Siralama fonksiyonumuzu cagiriyoruz.
	sirala (  aylar,  sirali_aylar);
	return 0;

		}
	
	 
	 void sirala( char aylar[][8],char sirali_aylar[][8]){
	 	int i,j;
	 	char gecici[8];
	 	for(i=0;i<11;i++){
	 		for(j=0;j<11;j++){
	 			if (strcmp(aylar[j],aylar[j+1]) > 0){
	 				strcpy(gecici,aylar[j]);
	 				strcpy(aylar[j],aylar[j+1]);
	 				strcpy(aylar[j+1],gecici);
				 }
			 }
		 }
	
		
		 //aylar dizisindeki siralanmis elemanlari sirali_aylar dizisine atiyoruz.
		 int x,y ;
	 	for(x=0;x<12;x++){
		for(y=0;y<8;y++){
			sirali_aylar[x][y] = aylar[x][y];
		}
	}
	//Son olarak sirali_aylar dizisini yani dizi elemanlarinin alfabetik siralanmis halini  yazdiriyoruz.
	int c;
	printf("--------------- \n");
	printf("\n");
	printf("Aylarin alfabetik siralanmis hali : \n");
	for(c=0;c<12;c++){
		
		printf("%s \n",sirali_aylar[c]);
	} 	
	 }
