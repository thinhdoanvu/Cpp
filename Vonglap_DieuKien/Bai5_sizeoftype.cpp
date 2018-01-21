#include<iostream>
using namespace std;

//khai bao bien

//chuong trinh con
void in()
{
  cout << "Kich thuoc cua cac kieu du lieu pho bien \n";
  cout << "Kieu int: " << sizeof(int) << " byte \n";
  cout << "Kieu char: " << sizeof(char) << " byte \n";
  cout << "Kieu float: " << sizeof(float) << " byte \n";
  cout << "Kieu longint: " << sizeof(long) << " byte \n";
}
//chuong trinh chinh
int main()
{
  in();
  //ket thuc chuong trinh
  return 0;
}
