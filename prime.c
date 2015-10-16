//This program finds and prints mersenne primes

#include <stdio.h>

//custom power function, pow is too unstable
int power(int base, int exponent);

int main(int argc, char *argv[]){

  int i,j,k;
  //outer loop iterates to 10000
  for(j = 2; j < 10000; j++){	
       	int i = 2;
	//inner loop checks each number and whether i is a factor of j
       	for(; i <= j-1; i++){
	       	if(j % i == 0){
	       		break;
	       	}
       	}
       	if((i == j && i != 2)){ //test if j is prime
	  for(k = 2; k < 14; k++){ //test for mersenne property
	    if(power(2, k)-1 == j) //if 2^n-1 == j
	      printf("%d ", j); //j is a mersenne prime
	     }
       }
   }
  return 0;
}
//power function
int power(int base, int exponent){

  int ans = 1;
  while(exponent-- > 0)
    ans = ans * base;

  return ans;
}

