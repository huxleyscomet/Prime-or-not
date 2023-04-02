#include <stdio.h>
#include <math.h>

int main(){
  float number = 23;
  float divisor = 1;
  int isPrime = 1;

  while(number!=divisor){
    divisor++;
    printf("\n%.3f", number/divisor);
    if(fmodf(number,divisor)==0){
      isPrime = 0; 
    }
    }
  if (isPrime==1){
    printf("\nThe number is prime!");
  }
  else {
    printf("\nThe number isn't prime!");
  }
}