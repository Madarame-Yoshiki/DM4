#include <stdio.h>
#include <stdlib.h>

int main(){
  int a=rand();
  int head=0,tail=0;
  printf("Tossing a coin..\n");
  for(int i=1;i<=3;i++){
    if(a%2==0){
      printf("Round %d: Heads\n",i);
      head++;
    }
    else{
      printf("Round %d: Tails\n",i);
      tail++;
    }
  }
  printf("Heads:%d , Tails:%d\n",head,tail);
}
