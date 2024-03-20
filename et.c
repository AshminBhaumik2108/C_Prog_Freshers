/*
#include <stdio.h>
#include <stdlib.h> // required for dynamic memory
int main()
{
 int number, *ptr, i;
 printf("How many ints would you like store? Number: ");
 scanf("%d", &number);
 ptr = (int *)malloc(number*sizeof(int)); //allocate memory
 for(i=0 ; i<number ; i++)
{
  *(ptr+i) = i;
}
 for(i=0 ; i<number ; i++)
{
   printf("%d\n", *(ptr + i));
}
 return 0;
}

#include<stdio.h>
#include<stdlib.h>
void main()
{
 float *x;
 int i,n;
 printf("how many elements do u want?");
 scanf("%d",&n);
 x=(float*)calloc(n,sizeof(float));
 if(x!=NULL)
 {
   printf("data is=\n");
   for(i=0;i<n;i++)
     printf("\n x[%d]=%d ",i,*(x+i));
 }
 else
   printf("calloc failed");
 getch();
}

#include<stdio.h>
#include <stdlib.h>
int main()
{
 int *ptr, i;
 ptr = (int *)calloc(5, sizeof(int)); // ptr[1] is equivalent to *(ptr+1)
 *ptr = 0;
 *(ptr+1) = 7;
 ptr[2] = 3;
 ptr[3] = 8;
 ptr[4] = 16;
 printf("Now allocating more memory... \n");
 ptr = (int *)realloc(ptr, 2*sizeof(int));
 ptr[5] = 32; /* now it's legal! *//*
 ptr[6] = 64;
 for(i=0 ; i<7 ; i++){
    printf("ptr[%d] holds %d\n", i, ptr[i]);
 }
}
*/

#include<stdio.h>
int main()
{
int c = 2 ^ 3;
printf("%d", c);
}









