#include<stdio.h>
int main() {
int i ;
int a=0;
int tekSayilar[50];
for (i=1; i<100 ; i+=2){

tekSayilar[a] = i;
printf("Dizi %d . elemani: %d \n",a+1,tekSayilar[a]);
a++;
	
}

return 0 ;
	
}
