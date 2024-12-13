#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int count(char* str1 ){
    int num = 0 ; 
    while(str1[num]!= '\0'){
        num++;
    }
    return num;
}

char* connect(char* str1 , char* str2){
    char* connected_file =(char*)malloc(count(str1)+count(str2)+1);
    
    int file_i =0;
    for(int i = 0 ; i< count(str1) ; i++){
        connected_file[file_i] =str1[i];
        file_i++;
        //printf("appended \n");
    }
     for(int j = 0 ; j< count(str2) ; j++){
        connected_file[file_i] =str2[j];
        file_i++;
    }
     connected_file[file_i]='\0';

    return connected_file;
}

char* insert( int index , char* str , int size){
    //copy the whole shit into a fucking array
    char kir[count(str)];
    for(int i = 0 ; i<count(str) ; i++){
        kir[i] = str[i];
    }

    int tracker = 0;
    for(int i = 0 ; i<index ; i++){
        str[i] = kir[i];
        tracker++;
    } 
    
    str[index] = '\\';
    int sizemoz = sizeof(kir) ; 
    for(int i = index ; i <sizemoz ; i++){
       
        tracker ++;
        str[tracker] = kir[i];
    }
    str[sizemoz+1] = '\0';
    return str;
}



void  linux_text_format(char* str){
    int size = count(str) ;
    for(int i =0; i<size ; i++){
        if(str[i]=='[' || str[i]==']' || str[i]=='(' || str[i]==')' || str[i]=='{' || str[i]=='}' || str[i]==' ' ){
            size = count(str) ;
            str = realloc(str ,count(str)+1 );
            str = insert(i,str , size);
            size++;
            i++;

        sleep(0.4);
        }
    }
}


