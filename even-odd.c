

#include <stdio.h>
int even(int);
int main()
{
 int num;
 printf("number :");
 scanf("%d",&num);
 even(num);
 return 0;

}
int even  (int num)
{
  if(num%2==0)
   printf("Even",num);
 else
   printf("Odd",num);
}

