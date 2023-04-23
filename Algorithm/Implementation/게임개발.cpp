#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n,m;
int x,y;
int targetX,targetY;
int d=0;
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
          is_visit_map[i][j]=false;
        }
    }
  is_visit_map[x][y]=true;
  int cant_move_num=0;
  int result=1;
  while(true)
    {
      if(cant_move_num==4)
      {
        targetX = x-dx[d];
        targetY = y-dy[d];
        if(map[targetX][targetY]==1)
        {
          cout<<"중단"<<endl;
          break;
        }
        else
        {
          x=targetX;
          y=targetY;
          cant_move_num=0;
          cout<<"[후퇴] 위치:"<<x<<","<<y<<endl;
        }
      }
      if(d==0) d=3;
      else d-=1;
      cout<<"회전"<<endl;
      targetX = x+dx[d];
      targetY = y+dy[d];
      if(is_visit_map[targetX][targetY] || map[targetX][targetY]==1)
      {
        cant_move_num++;  
      }
      else
      {
        is_visit_map[targetX][targetY] = true;
        result++;
        x=targetX;
        y=targetY;
        cant_move_num=0;
        cout<<"[전진] 위치:"<<x<<","<<y<<endl;
      }   
    }
  cout<<result<<endl;
  return 0;
}