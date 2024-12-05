#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <unistd.h>
#include "fstring.h"
int check(char* filename){
    int i = count(filename)-4; // the index of the .mp3 str
    if(filename[i]=='.'){
        if(filename[i+1]=='m'){
            if(filename[i+2]=='p'){
                if(filename[i+3]=='3'){
                    return 1;
                }else{return 0;}
            }else{return 0;}
        }else{return 0;}
    }else{return 0;}
}
void readDIR(char* path){
    struct dirent *pDirent;
    DIR *pDir = opendir(path);
    while((pDirent = readdir(pDir))!= NULL){
        char* name = pDirent->d_name;
        if(check(poop)==1){
            name = linux_text_format(poop);

        //read and write the file in the path 
            system("echo $HOME >> path.txt");
            FILE* pathfile = fopen("path.txt" , "r");
            char buffer[100];
            fgets(buffer , 100  ,  pathfile); 
            system("rm path.txt");
            //search for the \n and remove it
            for(int i = 0 ; i<100 ; i++){
                if(buffer[i]=='\n'){
                    buffer[i]='/';
                }
            }
            char* c1 = "mv ";
            char* c2 = connect(c1 , path);
            char* c3 = connect(c2 , name);
            char* c4 =connect(c3 , " ");
            char* c5 = connect(buffer , "Music");

            char* c6 = connect(c4 , c5);
            system(c6);
            printf("moved 1 file. \n");
        }
    }   
}
int main(int argc , char* argv[]){
    printf("Listening on :%s\n" , argv[1]);
    int moz;
    while(1){
         readDIR(argv[1]);
        sleep(2);
    }
    return 0 ;
}

