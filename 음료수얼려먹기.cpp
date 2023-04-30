#include <iostream>
#include <string.h>
#include <random>
using namespace std;
int n,m;
bool dfs(int Y,int X, int **PACK)
{
  if(Y>n-1 || Y<0 || X>m-1 || X<0) return false;
  if(PACK[Y][X]==0) PACK[Y][X]=1;
  else return false;
  dfs(Y-1,X,PACK);
  dfs(Y+1,X,PACK);
  dfs(Y,X-1,PACK);
  dfs(Y,X+1,PACK);
  return true;
}
int main()
{
  //원래 문제처럼 값 입력하는 부분
  /*
  cin>>n>>m;
  cin.ignore();
  int** pack= new int*[n];
  for(int i=0;i<n;i++)
    {
      pack[i] = new int[m];
      string str;
      getline(cin,str);
      for(int j=0;j<m;j++)
        {
          pack[i][j]=str[j]-'0';
        }
    }
    */
  /////////////////////////////////////////////////
  //값 일일이 입력하기 어려워서 문제의 조건처럼 난수 생성
  //원래 1<n,m<1000인데 오래걸려서 100으로 조정
  random_device rd;
  mt19937 gen(rd());
  uniform_int_distribution<int> map_dis(1, 100);
  uniform_int_distribution<int> dis(0, 1);
  n= map_dis(gen);
  m= map_dis(gen);
  int** pack= new int*[n];
  for (int i = 0; i < n; i++) 
  {
    pack[i] = new int[m];
    for(int j=0;j<m;j++)
      {
        pack[i][j]=dis(gen);
      }
  }
  for (int i = 0; i < n; i++) 
  {
    for(int j=0;j<m;j++)
      {
        cout<<pack[i][j];
      }
    cout<<endl;
  }
  ///////////////////////////////////////////////////
  int count =0;
  for(int i=0;i<n;i++)
    {
      for(int j=0;j<m;j++)
        {
          if(dfs(i,j,pack))count++;
        }
    }
  for(int i=0;i<n;i++)
    {
      delete[] pack[i];
    }
  delete[] pack;
  cout<<n<<" "<<m<<endl;
  cout<<count;
  
  return 0;
}