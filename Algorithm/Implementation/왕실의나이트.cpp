#include <iostream>
#include <string>
using namespace std;

string x= "abcdefgh";
string y = "12345678";
string pos;
int xPos,yPos;
int count = 8;
/*
나이트의 움직임을 이런식으로 배열로 정의한 뒤 for문으로 dx dy더하고,
그 좌표값을 검토하는게 더 직관적이고 단순한듯 
int dx[] = {-2, -1, 1, 2, 2, 1, -1, -2};
int dy[] = {-1, -2, -2, -1, 1, 2, 2, 1};
*/
int main()
{
  cin>>pos;
  xPos = x.find(pos[0]);
  yPos = y.find(pos[1]);
  /*
  문자열 안쓰고 아스키코드 사용해서 바로 숫자로 만들수있음
  (이 경우 인덱스 1~8) 
  xPos = pos[0] - 'a'+1;  
  yPos = pos[1] - '0';
  */
  cout<<xPos<<yPos<<endl;
  if (xPos==0 || xPos==7)
  {
    count-=4;
    if(yPos==0 || yPos==7)
    {
      count -=2;
    }
    else if ((yPos==1 || yPos==6))
    {
      count -=1;
    }
  }
  else if (xPos==1 || xPos == 6)
  {
    count -=2;
    if(yPos==0 || yPos==7)
    {
      count -=3;
    }
    else if ((yPos==1 || yPos==6))
    {
      count -=2;
    }
  }
  else 
  {
    if(yPos==0 || yPos==7)
    {
      count -=4;
    }
    else if ((yPos==1 || yPos==6))
    {
      count -=2;
    }
  }
  cout<<count<<endl;
}