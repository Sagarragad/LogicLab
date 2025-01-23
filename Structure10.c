#include<stdio.h>

struct Demo
{
    int no ;
    int *ptr;
    float *p;
};




int main()
{
  struct Demo obj ;
   int n = 1;
   float f = 1.258;

   obj .no =10;
   obj .ptr = &n;
   obj.p = &f;

   printf("%d\n",obj.no);
   printf("%d\n",*(obj.ptr));
   printf("%f\n",*(obj.p));




    return 0;
}