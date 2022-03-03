#include<stdio.h>
void input(int *num1, int *den1, int *num2, int *den2)
{
  printf("enter the first fraction\n");
  scanf("%d%d",num1,den1);
  printf("enter the second fraction\n");
  scanf("%d%d",num2,den2);
}
void add(int num1,int den1, int num2, int den2,  int *x,int *y,int *gcd)
{
    *x=((num1 * den2)+(den1 * num2));
    *y= (den1 * den2);
    for(int i=1;i<=*x && i<=*y;++i)
      {
        if(*x%i==0 && *y%i==0)
         *gcd =i; 
      }
  
}
void output(int num1, int den1, int num2, int den2,int x,int y,int gcd)
{
  printf("the sum of two fractions is %d/%d",x/gcd,y/gcd);
  printf("\n");
}
int main()
{
  int num1,den1,num2,den2,x,y,z;
  input(&num1,&den1,&num2,&den2);
  add(num1,den1,num2,den2,&x,&y,&z);
  output(num1,den1,num2,den2,x,y,z);
  return 0;
}