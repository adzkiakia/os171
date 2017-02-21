/*
*me: Adzkia Husnul Abidat
* NPM: 1506757680
* Class: A
* Comment:Kok suruh ngitung? 
*/

#define LOOP 4
#include <stdio.h>

void main() {
 int input = 5;
 int i;
 int result = 0; 

 for(i =0; i<LOOP; i++){
	result = result + input;
}
printf("%d", input);
printf(" times ");
printf("%d", LOOP);
printf(" equals ");
printf("%d", result);

}
