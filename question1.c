/*Hasif Ahmed Systems Period 10 Project Euler Question 1*/
#include <stdio.h>
int main(){
    int sum = 0;
    int x;
    for(x = 3; x <= 1000; x = x + 1){
      if((x % 3 == 0) || (x % 5 == 0)){
        sum += x;
      }
    }
    printf("%d\n",sum);
    return 0;
}
