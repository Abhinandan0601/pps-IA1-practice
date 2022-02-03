#include <stdio.h>
int input()
{
  int a;
  printf("enter a number\n");
  scanf("%d", &a);
  return a;
}

int cmp(int a, int b,int c,int largest)
{
  if(a>b && a>c)
  return 1;
  else if  (b>a && b>c)
  return 0;
  else 
  return 1;
}

void output( int a, int b, int c,int largest)
{
  if(largest == 1)
  printf("a is greatest among %d,%d and %d",a,b,c);
  else if (largest == 0)
   printf("b is greatest among %d,%d and %d",a,b,c);
  else
    printf("c is greatest among %d,%d and %d",a,b,c);
}
 int main()
 {
   int a,b,c,largest;
   a = input();
   b = input();
   c = input();
   largest = cmp(a,b,c,largest);
   output(a,b,c,largest);
   return 0;
 }


 




