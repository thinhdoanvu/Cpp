#include<iostream>
using namespace std;

//khai bao bien
int sochia;
int sobichia;

//chuong trinh con
void nhap()
{
  //khai bao bien
  cout <<"Nhap so bi chia: ";
  cin >> sobichia;
  cout << "So chia: ";
  cin >> sochia;
}

int phannguyen(int a, int b)
{
  return a/b;
}

int phandu(int a, int b)
{
  return a%b;
}

void in()
{
  //khai bao bien

  cout << sobichia <<" chia cho " << sochia << " duoc phan nguyen " << phannguyen(sobichia,sochia) << "\nva phan du la " << phandu(sobichia,sochia);
}
//chuong trinh chinh
int main()
{
  nhap();
  in();
  //ket thuc chuong trinh
  return 0;
}

