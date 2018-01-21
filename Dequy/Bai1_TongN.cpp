#include<iostream>
using namespace std;

//khai bao bien
int N;

//chuong trinh con
void nhap()
{
  cout <<"Nhap N= ";
  cin >> N;
}

int tong(int x)
{
  if(x!=0)
  {
    return x+tong(x-1);
  }
  else
  {
    return 0;
  }
  //x=0 thi tong la 0
  
}

void in()
{
  cout <<"Tong cua N so hang dau tien la: "<<tong(N);
}

//chuong trinh chinh
int main()
{
  nhap();
  in();
  //ket thuc chuong trinh
  return 0;
}
