//wap to display name,subjects,marks .
#include<stdio.h>
#include<string.h>
#include<math.h>

struct students
{
    char names[50];
    float marks;
    char subjects[50];


}info[5],s[5];
void main(){
 int i,j;
 printf("enter names:\n");
 for(j=1;j<5;j++)
 {
     printf("enter %d names:",j);
     scanf("%s",s[j].names);

     
 printf("students informations:\n");
 for(i=0;i<5;i++)
 {
    
     printf("enter%d subjects\n:",i+1);
     scanf("%s",info[i].subjects);
     printf("enter a marks obtained:");
     scanf("%f",&info[i].marks);
     printf("\n");
 }
 }
 for(j=1;j<5;j++)
 {
     printf("Names:");
     printf("%s",s[j].names);

     
 printf("students informations:\n");
 for(i=0;i<5;i++)
 {
    
     printf("Subjects\n:");
     printf("%s",info[i].subjects);
     printf("\nMarks obtained:");
     printf("%f",info[i].marks);
     printf("\n");
 }
 }

}