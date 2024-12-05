#include <stdlib.h>
#include <stdio.h>


int count(char* str1 ){
    int num = 0 ; 
    while(str1[num]!= '\0'){
        num++;
    }
    return num;
}

char* connect(char* str1 , char* str2){
    char* connected_file =(char*)malloc(count(str1)+count(str2));
    
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
   return connected_file;
}

char * insert(int index , char* str){
    char* output = (char*)malloc(count(str)+1);
    int tracker = 0;
    for(int i = 0 ; i<index ; i++){
        output[i]=str[i];
        tracker++;
    } 
    
    output[tracker] = '\\';
    for(int i = index ; i <count(str) ; i++){
       
        tracker ++;
        output[tracker] = str[i];
    }
    return output;
}



char*  linux_text_format(char* str){
    for(int i =0; i<count(str) ; i++){
        if(str[i]=='[' || str[i]==']' || str[i]=='(' || str[i]==')' || str[i]=='{' || str[i]=='}' || str[i]==' ' ){
            str = insert(i,str);
            i++;
        }
    }
    return str;
}




