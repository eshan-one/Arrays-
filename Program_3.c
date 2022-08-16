#include<stdio.h>
int main()
{
  int a[10],sum1 =0,sum2=0,i;
  
  printf("Enter 10 numbers:\n");

  for(i=0;i<=9;i++)
    {
      scanf("\n%d",&a[i]);

      if(a[i]%2==0)
      {
        sum1 = sum1+a[i];
      }

      else{
        sum2 = sum2 +a[i];
      }

    }

      printf("\nThe sum of even numers in the array is\n%d", sum1);

      printf("\nThe sum of odd numbers in the array is\n%d", sum2);
      
      
      
    

  return 0;
}
