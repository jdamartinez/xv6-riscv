#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"


int main(int argc, char *argv[]){
float T;
T = timeins(0);
sleep(1000);
float T2 = timeins(0);

T =(T2-T)/100000;
printf("Time in Seconds: %.2f\n", T);
exit(0);
}