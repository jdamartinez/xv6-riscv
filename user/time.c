#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
#include <stdio.h> 
#include <stdlib.h> 
#include <sys/types.h> 
#include <unistd.h>


int main(int argc, char *argv[]){

 float starttime = uptime();
    
 int p = fork();    //creates a copy and makes p equal the pid

if(p<0){
printf("Fork Failed"); //if fork function fails print error
exit(1);
}

if(p==0){
    //exec(argc, argv);
    

}else{
    wait(NULL);
    float stoptime = uptime();
    float finaltime = stoptime - starttime;
    printf("%f",finaltime);
}


}

