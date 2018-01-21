#include<iostream>
using namespace std;

//khai bao bien
int n1;
int n2;

//chuong trinh con
void nhap()
{
  //khai bao bien
  cout << "Nhap so thu 1: " ;
  cin >> n1;
  cout << "Nhap so thu 2: " ;
  cin >> n2;
}

void doicho(int a, int b)
{
  //khai bao bien
  int tam;
  tam=a;
  a=b;
  b=tam;
}

void in()
{
  doicho(n1,n2);
  cout << "Gia tri cua 2 so sau khi hoan doi la: ";
  cout << n1;
  cout << n2;
}

//chuong trinh chinh
int main()
{
  nhap();
  in();
  //ket thuc chuong trinh
  return 0;
}
