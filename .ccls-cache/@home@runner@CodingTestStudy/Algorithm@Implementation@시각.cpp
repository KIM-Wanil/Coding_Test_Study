#include <iostream>
#include <string>
using namespace std;
int n;
int count=0;
int main() 
{
  cin>>n;
  for(int i=0;i<=n; i++)
    {
      string h = to_string(i);
      if(h.find("3")!=string::npos)
      {
        count+=3600;
        continue;
      }
      for(int j=0;j<60;j++)
        {
          string m = to_string(j);
          if(m.find("3")!=string::npos)
          {
            count+=60;
            continue;
          }
          for(int k=0;k<60;k++)
            {
              string s = to_string(k);
              if(s.find("3")!=string::npos)
              {
                count+=1;
                continue;
              }
            }
        }        
    }
  cout<<count<<endl;
  return 0;
}