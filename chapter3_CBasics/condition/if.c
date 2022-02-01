#include <stdio.h>

int main()
{
  int cmarks;
  printf("enter marks you ve obtained on C programming exams \n:");
  scanf("%d", &cmarks);

  if (cmarks >= 40)
  {
    printf("you have passed the exams");
    if (cmarks >= 90)
    {
      printf("your grade is A++");
    }
    else if (cmarks >= 85 && cmarks < 90)
    {
      printf("your grade is A+");
    }
    else if (cmarks >= 80 && cmarks < 85)
    {
      printf("your grade is A");
    }
    else if (cmarks >= 75 && cmarks < 80)
    {
      printf("your grade is B");
    }
    else if (cmarks >= 50 && cmarks < 75)
    {
      printf("your grade is C");
    }
    else if (cmarks >= 40 && cmarks < 50)
    {
      printf("your grade is d+");
    }
    else
    {
      printf("your grade is d");
    }
  }
  else
  {
    printf("study hard and focus hard because you are learnner");
  }
  return 0;
}