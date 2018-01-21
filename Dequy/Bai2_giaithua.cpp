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

int giaithua(int x)
{
  if(x!=0)
  {
    return x*giaithua(x-1);
  }
  else
  {
    return 1;
  }
  //x=0 thi giai thua la 1
  
}

void in()
{
  cout <<"Giai thua cua N la: "<<giaithua(N);
}

//chuong trinh chinh
int main()
{
  nhap();
  in();
  //ket thuc chuong trinh
  return 0;
}
