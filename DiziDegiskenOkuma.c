#include<stdio.h>
int main () {
	int i = 0;
	int tekSayilar[5];
	char a;
	while (i < 5){
		printf("Dizinin %d . elemanni tek sayi olarak  giriniz: \n",i+1);
		scanf("%d",&tekSayilar[i]);
		if((tekSayilar[i] % 2) == 0 ){
			printf("Girdiginiz sayi tek sayi degil! \n");
			continue ;
			}
		i++ ;
			}
		
		
	
	for(i=0;i<5;i++){
		printf("Dizinin %d . elemani : %d \n",i+1,tekSayilar[i]);
		}
		return 0 ;
	
	
	
}
