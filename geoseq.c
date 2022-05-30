#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
typedef long double f96;
int main(int argc,char**argv){
if(argc<4){puts("SYNTAX:geoseq init_num mult steps [\"separator\"]\n Creates geometric sequences starting from num\n(treated as double rounded to integer) with N steps,\n each multiplying num by 'mult'\n [optional] separator is newline by default \nExample:./geoseq  20 1.01 4 \nResult:20 20 20 21");return 1;}
f96 i=strtold(argv[1],NULL);
f96 mult=strtold(argv[2],NULL);
char* sep=argc==5?argv[4]:"\n";
uint64_t count=strtoull(argv[3],NULL,10);
printf("%.0Lf",i);
for(uint64_t k=1;k<count;k++){
i*=mult;printf("%s%.0Lf",sep,i);}
return 0;}
