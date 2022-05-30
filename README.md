# geoseq
Geometric sequence generator
similar to seq unix utility 

#Syntax
```
SYNTAX:geoseq init_num mult steps
Creates geometric sequences starting from num
(treated as double,output as integer) with N steps,
each multiplying num by 'mult' 
with identical integer numbers are skipped 
(until unique N numbers are printed)
Example: geoseq 20 1.01 4 
20 21 22 23
Example2: geoseq 5 1.4 5
5 7 9 13 19


geoseqr: same as above but will repeat identical
numbers.
geoseqf: same as above with double float output
```
