#include<stdio.h>
int bolunebiliyorMu(int, int);
int ebobBul(int, int);
int ekokBul(int, int);
int main(){
	int a,b;
	printf("Bir sayi giriniz: \n");
	scanf("%d",&a);
	printf("2.sayiyi girinizi: \n");
	scanf("%d",&b);
	
	int ebob =ebobBul(a,b);
	int ekok = ekokBul(a,b);
	
	printf("ebob(%d,%d) = %d \n",a,b,ebob);
	printf("ekok(%d,%d) = %d \n",a,b,ekok);
	
	return 0;
}
int bolunebiliyorMu(int a,int b){
	if(a % b == 0){
	
	return 1;
	}else
	return 0;
}
int ebobBul(sayi1,sayi2){
		if(sayi1 == 0 || sayi2 == 0)
	return 0;

	int kucukSayi= sayi1;
	int buyukSayi=sayi2;
	if(sayi2 < kucukSayi){
	
	kucukSayi=sayi2;
	buyukSayi=sayi1;
	

}
	int i;
	for(i=kucukSayi;i<=0;i--){
	
	if(bolunebiliyorMu(sayi1,i) == 1 && bolunebiliyorMu(sayi2,i) == 1){
	
	return i;
}
}
}
int ekokBul(sayi1,sayi2){
		if(sayi1 == 0 || sayi2 == 0)
	return 0;
	int buyukSayi=sayi1;
	int kucukSayi=sayi2;
	if(sayi2>sayi1){
	buyukSayi=sayi2;
	kucukSayi=sayi1;
}
	
	if(bolunebiliyorMu(buyukSayi,kucukSayi) ==1){
	
	return buyukSayi;
	}
	int i;
	
	for(i=buyukSayi*2; ;i+=buyukSayi){
		if(bolunebiliyorMu(i,sayi1)==1 && bolunebiliyorMu(i,sayi2)==1){
		
		return i;
		
	}
	
	
	}
	
	

}
