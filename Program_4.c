#include<stdio.h>
int main()
{
  int a[10],i;
  
  printf("Enter 10 numbers:\n");

  for(i=0;i<=9;i++)
    {
      scanf("\n%d",&a[i]);
    }

  for (int i = 1; i <= 10; i++) 
  {
  if (a[0] < a[i]) {
    a[0] = a[i];
  }
    
}
  printf("\nThe largest element is %d", a[0]);

      

  return 0;
}
