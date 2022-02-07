#include<stdio.h>
#include<string.h>
 int main(void)
 {
  char s1[80], s2[80];
  unsigned int len;
  
  gets(s1);
  gets(s2);
   
   /*compute how many chars will actually fit */
   len = 79-strlen(s2);
   strncat(s2, s1, len);
   printf(s2);
   
   return 0;
   }
