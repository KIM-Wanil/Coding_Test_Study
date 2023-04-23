#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n,m;
int x,y;
int d;
int cardinal[4] = {0,1,2,3};
int dx[4] = {-1,0,1,0};
int dy[4] = {0,1,0,-1};

int main()
{
  cin>>n>>m;
  cin>>x>>y>>d;
  int map[n][m];
  bool is_visit_map[n][m];
  for(int i=0;i<n;i++)
    {
      for(int j=0;j<m;j++)
        {
          cin>>map[i][j];
          is_visit_map[n][m]=false;
        }
    }
  while(true)
    {
      for(int i=0;i<4;i++)
        {
          if(d==cardinal[i])
          {
            if(i==0)
            {
              d=cardinal[3];
            }
            d=cardinal[i-1];
          }
        }
      
    }
    
  
  return 0;
}