#include<stdio.h>
#include<math.h>

int main(){
	 printf("----------------------------------------------------------- \n");
	 printf("2.dereceden denklemi koklerini bulan programa hosgeldiniz. \n");
	 printf("----------------------------------------------------------- \n");
	
	float x1,x2,a,b,c,d;


	 printf("a degerini girin: \n");
	 scanf("%f",&a);
	 printf("b degerini girin: \n");
	 scanf("%f",&b);
	 printf("c degerini girin: \n");
	 scanf("%f",&c);
	d=(b*b) - 4*a*c;
	x1= (-b + sqrt(d)) / 2*a;
	x2= (-b - sqrt(d)) / 2*a;
	 
	 if(d > 0){
	 	printf("Denklemin 2 farkli reel koku vardir -> x1: %.2f x2= %.2f ",x1,x2);
	 	
	 }  else if(d == 0){
	 	printf("Delta=0 oldugu icin denklemin 2 reel koku vardir fakat bunlar aynidir x = %.2f",x1);
	 } else  {
	 printf("Delta<0 oldugu icin denklemin reel koku yoktur.");
	}
	 return 0;
	 
	
	 
}
