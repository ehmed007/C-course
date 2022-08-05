#include <stdio.h>
 void rec(int j, int k) {
 printf("j=%d, \n", j);
 if (j != 0) {
 rec(j-1, k);
 } else if (k!=0) {
 rec(j, k-1);
 }
 printf("k=%d, \n", k);
 }

 int main() {
 rec(3, 4);
 return 0;
 }