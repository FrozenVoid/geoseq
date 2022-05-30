#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
int main(int argc,char**argv){
if(argc!=4){puts("SYNTAX:geoseqf init_num mult steps\n Creates geometric sequences starting from num(treated as double) with N steps, each multiplying num by 'mult'  \nExample:./geoseq  20 1.01 4 \nResult:20.000000 20.200000 20.402000 20.606020");return 1;}
double i=strtod(argv[1],NULL);
double mult=strtod(argv[2],NULL);
uint64_t count=strtoull(argv[3],NULL,10);
printf("%f\n",i);
for(uint64_t l=1;l<count;l++){
i*=mult;printf("%f\n",i);}

return 0;}
