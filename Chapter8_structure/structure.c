//wap to find details of students using structure
#include<stdio.h>
#include<string.h>

   struct student
   {
      char name[20];
      int citzn;

   }s1,s2;



int main(){
  
  
  s1.citzn=1005;
  s2.citzn=1010;
  
  strcpy(s1.name,"sujal maharjan");
  strcpy(s2.name,"amit maharjan");

  printf("Details of student 1 is\n");
  printf("name of student  is: %s\n",s1.name);
  printf("citizen number is: %d\n",s1.citzn);

  printf("Details of student 2 is\n");
  printf("name of student is :%s\n",s2.name);
  printf("citizen number is :%d\n",s2.citzn);

  
  
return 0;
}


