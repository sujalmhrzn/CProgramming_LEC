//wap to create the file.

    //when working with file we need to declare a pointer of type file,this decleration
    //is need for communication between file and program
    //syntax ptr=fopen("filename","mode")


#include<stdio.h>

void file(){
    FILE *file;

    file=fopen("new file","w");

}
void main(){
    file();
}