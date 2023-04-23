#include <iostream>
using namespace std;
int main()
{
  int n,m,k;
  cin>>n>>m>>k;
  int num[n];
  int count_num[n];
  for(int i=0;i<n;i++)
    {
      cin>>num[i];
      count_num[i]=0;
    }
  int sum=0;  
  int before_index=0;
  for(int i=0;i<m;i++)
    {
      int big_num=num[0];
      int index=0;
      for(int j=0;j<n;j++)
        {
          if(num[j]>big_num && count_num[j]<3 )
          {
            big_num = num[j];
            index = j;
          }
        }
      if(before_index != index && i!=0 )
      {           
        count_num[before_index]=0;
      }
      count_num[index]++; 
      before_index = index;
      sum+=big_num;
    }
  cout<<sum<<endl;
  return 0;
}