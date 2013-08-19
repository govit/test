#include <stdio.h>

struct stuInfo
{
  char name[10];
  char ID[10];
  int score;
};

void findBestandWorst(stuInfo *begin,stuInfo *end)
{
  //check the input
  //find
  stuInfo *best = begin;
  stuInfo *worst = begin;
  while(begin != NULL)
  {
    if(best->score < begin->score)
      best = begin;
    if(worst->score > begin->score)
      worst = begin;
    begin++;
  }
  printf("%s %s",best->name,best->ID);
  printf("%s %s",worst->name,worst->ID);
}

int main()
{
  stuInfo *begin = new stuInfo;
  stuInfo *end = begin;
  int stuNum;
  scanf("%d",&stuNum);
  for(int i = 0;i < stuNum;i++)
  {
    end++;
    scanf("%s %s %d",&end->name[0],&end->ID[0],&end->score);
  }

  findBestandWorst(begin,end);
  return 0;
}
