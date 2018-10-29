#include<iostream>
using namespace std;
int main()
{
    long long int A[5],sum; int i,j;  long long max,min;
    
    for(i=0;i<5;i++)
    {
        cin>>A[i];
    }
    max=0;
    min=A[0]+A[1]+A[2]+A[3]+A[4];
    for(i=0;i<5;i++)
    {   sum=0;
        for(j=0;j<5;j++)
      {
        if(i!=j)
        {
            sum+=A[j];
        }
      }
     if(max<sum)
        {
            max=sum;
        }
        if(min>sum)
        {
            min=sum;
        }
    }
   
    cout<<min<<" "<<max;
    return 0;
    
}
