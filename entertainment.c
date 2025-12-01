// entertainment for everyone
//source code make by accident to get a complex way for print a thing
//and create a trash, very fun
//memory trash but can clean and just end task after play
//dont thinking about "morris worm"

//portable, multi platform
//pc:vim/nvim, VS, ...
//mobile:termux(with vim/nvim downloaded),...
//
#include<stdio.h>

int main(){
        int i=1;
        for(char arg[i]; *arg; i++ ){ //get a trash
                arg[i]='o';
                 //printf("%s",arg);
                printf("%p",(void*)arg);                             
// printf("%d\n",*arg);                 
//printf("%lu\n",(unsigned long)arg);                                                                                           }                                               
 return 0;                                                      
}