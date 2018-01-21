#include<iostream>
using namespace std;

//khai bao bien
int n1;
int n2;

//chuong trinh con
void nhap()
{
  //khai bao bien
  cout << "Nhap so hang thu 1: ";
  cin >> n1;
  cout << "Nhap so hang thu 2: ";
  cin >> n2;
}

int add(int a, int b)
{
  return a+b;
}

void cong2so()
{
  //khai bao bien
  int tong;
  tong=add(n1,n2);
  cout << "Tong cua " << n1 << "va " << n2 <<" la "<<tong;
}
//chuong trinh chinh
int main()
{
  nhap();
  cong2so();
  //ket thuc chuong trinh
  return 0;
}

