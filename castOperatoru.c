float sayi1 = 8.1 / 3;
float sayi2 = (float)8 / 3;
float sayi3 = 8 / (float) 3;
float sayi4 = (float)(8/3);
float sayi5 = (float)8 / (float)3 ;

#include <stdio.h>
int main(int argc,const char * argv[]){
	

printf("%f \n",sayi1);
printf("%f \n",sayi2);
printf("%f \n",sayi3);
printf("%f \n",sayi4);
printf("%f \n",sayi5);

double d1=5.3;
double d2=5.4;
double d3=5.9;

int toplam1= (int)(d1+d2+d3);
int toplam2=(int)d1 + (int)d2 + (int)d3;
printf("%d %d \n",toplam1,toplam2);


}
