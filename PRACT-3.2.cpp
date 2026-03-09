#include<iostream>
using namespace std;

int  sum_data(int SUM[0],int s,int p)
    {
        if(p==s-1)
            return SUM[p];
        else
        {
            return SUM[p]+ sum_data(SUM,s,p+1);
        }
    }
int main()
{

    int n;
     cout<<"Enter the no. of Numbers \n";
     cin>>n;
     int s=n;
     int SUM[n];
       cout<<"enter elements of array \n ";
       for(int i=0;i<n;i++)
       {

           cin>>SUM[i];
       }
       int sum=0;
       for(int i=0;i<n;i++)
       {

           sum+=SUM[i];
       }
       cout<<"sum of array by iterative approaches:"<<sum<<endl;
       cout<<"sum of array by recursion:"<<sum_data(SUM,s,0);

      return 0;
}
