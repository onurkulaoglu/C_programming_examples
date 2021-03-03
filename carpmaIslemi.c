#include <stdio.h>
int main(int argc,const char * argv[])
{
	int sayi1,sayi2,sonuc;
	printf("Carpma islemi icin 2 tamsayi giriniz:\n");
	scanf("%d %d",&sayi1, &sayi2);
	sonuc=carpmaYap(sayi1,sayi2);
	printf("Carpma isleminin sonucu : %d",sonuc);
	return 0;
	
}
	
	int carpmaYap(int a,int b)
	{
		
		int c;
		c= a*b;
		return c;
	}
	
	
	
