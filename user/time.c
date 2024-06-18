#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"


int main(int argc, char *argv[]){

 int starttime = uptime();
    printf("start time is: %d\n",starttime);
 int p = fork();    //creates a copy and makes p equal the pid
 
if(p<0){
printf("Fork Failed"); //if fork function fails print error
exit(1);
}

if(p==0){
    
    if(argc==1){
        exit(0);
    }
    if(exec(argv[1],argv)== -1){
        printf("error executing file");
    };
    

}else{
    wait(0);
    int stoptime = uptime();
    printf("stop time is: %d\n",stoptime);
    int finaltime = stoptime - starttime;
    printf("final time is :%d\n",finaltime);
}
exit(0);

}

