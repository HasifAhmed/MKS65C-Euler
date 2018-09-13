/*Hasif Ahmed Systems Period 10 Project Euler Question 6*/
#include <stdio.h>
int main(){
  int diff;

  int sumofsq = 0;
  int i;
  for(i = 1; i <= 100; i+= 1){
    sumofsq += ( i * i );
  }

  int sqofsum = 0;
  int x;
  for(x = 1; x <= 100; x += 1){
    sqofsum += x;
  }
  sqofsum = sqofsum * sqofsum;


  diff = sqofsum - sumofsq;
  printf("%d\n",diff);
  return 0;

}
