#include<stdio.h>
int carpimYazdir(int,int);
void selamla(void);
int main(){
	int a,b;
	
printf("Bir sayi giriniz: \n");
scanf("%d",&a);
printf("2.sayiyi giriniz: \n");
scanf("%d",&b);

  carpimYazdir( a,  b);

 selamla();

return 0;
}
int carpimYazdir(int sayi1,int sayi2){
	int sonuc= sayi1*sayi2;
	printf("2 sayinin carpimi: %d * %d = %d \n",sayi1,sayi2,sonuc);
	return 1;
	}
	void selamla(){
	
	printf(" \nHerkese merhaba \n ");
}
	

