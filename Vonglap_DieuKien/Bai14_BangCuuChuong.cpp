#include<iostream>
using namespace std;

//khai bao bien
int N;

//chuong trinh con
 void nhap()
{
  cout <<"Nhap so can tinh giai thua: ";
  cin >>N;
  while(N<5 || N>100)
  {
    cout <<endl<<"N khong thoa dieu kien"<<endl;
    cout <<"Nhap so can tinh giai thua: ";
    cin >>N;
  }
}

void in()
{
  //khai bao bien
  int i;
  for(i=1;i<=N;i++)
  {
    cout<<N<<" * "<<i<<" = "<<N*i<<endl;
  }
}

//chuong trinh chinh
int main()
{
  nhap();
  in();
  //ket thuc chuong trinh
  return 0;
}
