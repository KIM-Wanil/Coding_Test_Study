/*
plan 문자열을 파싱을 써서 처리해야된다고 생각했는데,
답지 참고하니 주석처리한 부분처럼 문자열 그대로 써도 상관X
ssstream으로 파싱하는 것도 공부해보기.
*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int n;
int x=1,y=1;
vector <string>v;
string plan;
string delimeter = " ";
int pos;
string token;
int main() {
  cin>>n; 
  cin.ignore();
  getline(cin,plan);

  while((pos = plan.find(delimeter)) != string::npos)
    {
      token = plan.substr(0,pos);
      v.push_back(token);
      plan.erase(0,pos+ delimeter.length());
    }
  v.push_back(plan);
  for(int i=0;i<v.size();i++)
    {
      if(v[i]=="L" && y>1)
      {
        y-=1;
      }
      else if(v[i]=="R" && y<n)
      {
        y+=1;
      }
      else if(v[i]=="U" && x>1)
      {
        x-=1;
      }
      else if(v[i]=="D" && x<n)
      {
        x+=1;
      }
    }
  /*
  for(int i=0;i<plan.length();i++)
    {
      if(plan[i]=='L' && y>1)
      {
        y-=1;
      }
      else if(plan[i]=='R' && y<n)
      {
        y+=1;
      }
      else if(plan[i]=='U' && x>1)
      {
        x-=1;
      }
      else if(plan[i]=='D' && x<n)
      {
        x+=1;
      }
    }
  */
  cout<<x<<" "<<y<<endl;
  return 0;
}