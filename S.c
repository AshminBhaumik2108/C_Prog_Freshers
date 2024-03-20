#include <stdio.h>

int main()
{
   int n, orig, sum = 0, rem;
   scanf("%d", &n);
   orig = n;
   while (orig != 0)
   {
      rem = orig % 10;
      sum = sum + rem;
      orig = orig / 10;
   }

   printf(sum);
}
