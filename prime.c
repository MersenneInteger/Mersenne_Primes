#include <stdio.h>
#include <stdbool.h>

int power(int base, int exponent);

void main(){

  int i,j,k;
 
  for(j = 2; j < 100; j++){	
       	int i = 2;
       	for(; i <= j-1; i++){
	       	if(j % i == 0){
	       		break;
	       	}
       	}
       	if((i == j && i != 2)){
	   for(k = 2; k < 10; k++){
	    if(power(2, k)-1 == j)
	      printf("%d ", j);
	     }
       }
   }
}
int power(int base, int exponent){

  int ans = 1;
  while(exponent-- > 0)
    ans = ans * base;

  return ans;
}

