#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
int main(int argc,char**argv){
if(argc!=4){puts("SYNTAX:geoseqr init_num mult steps\n Creates geometric sequences starting from num(treated as double,output as integer) with N steps, each multiplying num by 'mult' \nExample: geoseqr 20 1.01 4 \nResult:20 20 20 20");return 1;}
double i=strtod(argv[1],NULL);
double mult=strtod(argv[2],NULL);
uint64_t count=strtoull(argv[3],NULL,10);
int64_t oint=(int64_t)i,lastint;
printf("%"PRIi64"\n",oint);
for(uint64_t l=1;l<count;l++){
i*=mult;lastint=oint;
oint=(int64_t)i;
printf("%"PRIi64"\n",oint);


}

return 0;}
