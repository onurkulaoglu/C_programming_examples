#include<stdio.h>
 int main(){
 //1'den 10'a kadar olan sayýlarýn faktoriyelini yazdýran programa hoþgeldiniz.
int a=1;
int faktoriyel=1;

while(a<=10){
	faktoriyel=faktoriyel*a;
	a++;
	printf("%d faktoriyel = %d \n",a-1,faktoriyel);

}
	
return 0;


}
