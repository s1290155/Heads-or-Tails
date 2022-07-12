#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  srand((unsigned int) time(NULL));
  int cnt1=0, cnt2=0;
  
  printf("Tossing a coin...\n");

  for(int i = 1 ; i < 4 ; i++){
    printf("Round %d: ", i);
    int res = rand() % 2;
    if(res == 0){
      printf("Heads\n");
      cnt1++;
    }
    else{
      printf("Tails\n");
      cnt2++;
    }
  }

  printf("Heads: %d, Tails: %d\n", cnt1, cnt2);

  if(cnt1 > cnt2) printf("You won!\n");
  else printf("You lost!\n");

  return 0;
}
