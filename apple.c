#include<stdio.h>
#include<string.h>
 
int main() {
   char js[5][20], ks[20];
   int i, j;
   printf("\ngive the 5 inputs  : ");
   for (i = 0; i < 5; i++)
      scanf("%s", js[i]);
 
   for (i = 1; i < 5; i++) {
      for (j = 1; j < 5; j++) {
         if (strcmp(js[j - 1], js[j]) > 0) {
            strcpy(ks, js[j - 1]);
            strcpy(js[j - 1], js[j]);
            strcpy(js[j], ks);
         }
      }
   }
 
   printf("\nthe output is  : ");
   for (i = 0; i < 5; i++)
      printf("\n%s", js[i]);
 
}
