#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
int main(int argc,char**argv){
if(argc!=4){puts("SYNTAX:geoseq init_num mult steps\n Creates geometric sequences starting from num(treated as double rounded to integer) with N steps, each multiplying num by 'mult'  \nExample:./geoseq  20 1.01 4 \nResult:20 20 20 21");return 1;}
double i=strtod(argv[1],NULL);
double mult=strtod(argv[2],NULL);
uint64_t count=strtoull(argv[3],NULL,10);
printf("%.0f\n",i);
for(uint64_t l=1;l<count;l++){
i*=mult;printf("%.0f\n",i);}
return 0;}
