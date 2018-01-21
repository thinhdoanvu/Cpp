#include<iostream>
using namespace std;

//khai bao bien
int number;

//chuong trinh con
void nhap()
{
  //khai bao bien
  cout << "Nhap so can hien thi: ";
  cin >> number;
}

void in()
{
  //khai bao bien
  cout <<"So duoc nhap tu ban phim la: "<<number;
}

//chuong trinh chinh
int main()
{
  nhap();
  in();
  //ket thuc chuong trinh
  return 0;
}
