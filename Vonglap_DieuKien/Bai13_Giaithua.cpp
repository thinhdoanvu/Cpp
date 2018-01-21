#include<iostream>
using namespace std;

//khai bao bien
int N;

//chuong trinh  con
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

long giaithua(int x)
{
  long gt;
  int z;
  
  gt=1;
  for(z=1;z<=x;z++)
  {
    gt=gt*z;
  }
  
  return gt;
}

void in()
{
  cout<<endl<<N<<"!="<<giaithua(N);
}

//chuong trinh chinh
int main()
{
  nhap();
  in();
  //ket thuc chuong trinh
  return 0;
}
