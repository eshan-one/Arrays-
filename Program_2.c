#include<stdio.h>
int main()
{
  int a[10],sum =0,i;
  float avg;
  printf("Enter 10 numbers:\n");

  for(i=0;i<=9;i++)
    {
      scanf("\n%d",&a[i]);
      sum = sum+a[i];
      avg = sum/10.00;
      
    printf("\nThe average is %f", avg);

  return 0;
}
