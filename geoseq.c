#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
int main(int argc,char**argv){
if(argc!=4){puts("SYNTAX:geoseq init_num mult steps\n Creates geometric sequences starting from num(treated as double,output as integer) with N steps, each multiplying num by 'mult' with identical integer numbers are skipped \nExample: geoseq 20 1.01 4 \nResult:20 21 22 23");return 1;}
double i=strtod(argv[1],NULL);
double mult=strtod(argv[2],NULL);
uint64_t count=strtoull(argv[3],NULL,10);
int64_t oint=(int64_t)i,lastint;
printf("%"PRIi64"\n",oint);
for(uint64_t l=1;l<count;l++){
i*=mult;lastint=oint;
oint=(int64_t)i;
if(lastint!=oint){
printf("%"PRIi64"\n",oint);
}else{if(oint!=0){l--;continue;}}

}

return 0;}
