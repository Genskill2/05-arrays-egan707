/* Enter your solutions in this file */
#include <stdio.h>
int max(int arr[],int n)
{
  int max;
  max=arr[0];
  for(int i=0;i<n;i++)
  {
    if(max<arr[i])
    max=arr[i];
  }
  return max;
}
int min(int arr[],int n)
{
  int min;
  min=arr[0];
  for(int i=0;i<n;i++)
  {
    if(min>arr[i])
    min=arr[i];
  }
  return min;
}
float average(int arr[],int n)
{
 float avg;
 avg=0.0;
 for(int i=0;i<n;i++)
{
 avg=avg+arr[i];
}
 avg=avg/(float)n;
 return avg;
}

int mode(int arr[],int n)
{
  int md,mdn,mdc;
  md=1;
  mdc=1;
  mdn=arr[0];
  
  for(int i=0;i<n;i++)
  {
    mdc=1;
    
    for(int j=i+1;j<n;j++)
    {
      if(arr[i]==arr[j])
      {
        mdc++;
      }
    }
    if(mdc>md)
    {
      md=mdc;
      mdn=arr[i];
    }
  }
  return mdn;
}

int factors(int n;int arr[])
{
  int i=0;
  num=n;
  while(num%2==0)
  {
    arr[i]=2;
    i++;
    num=num/2;
  }
   int j;
 for(j=3;j<=sqrt(num);j=j+2)
 {
  while(num%j==0)
  {
   arr[i]=j;
   ++i;
   num=num/j;
  } 
 }
if(num > 2) {
     arr[i]=num;
     ++i;
   } 

return i;

}
