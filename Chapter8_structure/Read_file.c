#include<stdio.h>

void main(){
    
    char str1[100];
    FILE *file;

    file=fopen("2nd_file.txt","r");
   fscanf(file,"%s",str1);
   printf("%s",str1);
}