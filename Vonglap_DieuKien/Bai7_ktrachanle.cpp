#include<iostream>
using namespace std;

//khai bao bien
int number;

//chuong trinh con
void nhap()
{
  //khai bao bien
  cout << "Nhap so can kiem tra: ";
  cin >> number;
}

int is_chan(int a)
{
  if(a%2==0)
  {
    return 0;
  }
  else
  {
    return 1;
  }
}

void in()
{
  if(is_chan(number)==0)
  {
    cout << number << " la so chan";
  }
  else
  {
    cout << number << " la so le";
  }
}

//chuong trinh chinh
int main()
{
  nhap();
  in();
  //ket thuc chuong trinhj
  return 0;
}
