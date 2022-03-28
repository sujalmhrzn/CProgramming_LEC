//check palindrome 
#include<stdio.h>
#include<string.h>

void main(){
    char name1[20];
    char name2[20];

    
    printf("Enter a string:");
    scanf("%s", name1);

    strcpy(name2,name1);
    strrev(name1);
    printf("%s\n",name1);
     printf("%s\n",name2);

    strcmp(name1,name2);
     if(strcmp(name1,name2)==0){
    
    printf("\nthe value is palindrome");
     }

    else{
        printf("\nthe value is not palindrome");
    }
    

}