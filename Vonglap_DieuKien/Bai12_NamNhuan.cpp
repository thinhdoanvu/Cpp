#include<iostream>
using namespace std;

//khai bao bien
long year;

//chuong trinh con
void nhap()
{
  cout << "Nhap nam can tinh: ";
  cin >> year;
}

//mot nam duoc goi la nam nhuan khi thoa man:
//1. chia het cho 400
//2. neu nhung nam truoc nam 400 thi chia het cho 100
//3. nhung nam truoc 100 thi chia het cho 4
bool is_nhuan(long x)
{
  if(x%4==0)
  {
    if(x%100==0)
    {
      if(x%400==0)
      {
        return true;
      } 
      else
      {
        return false;
      }
    }
    return true;
  }
  return false;
}
//in ket qua
void in()
{
  if(is_nhuan(year)==true)
  {
    cout << "\nNam "<<year<<" la nam nhuan" << endl;
  }
  else
  {
    cout << "\nNam "<<year<<" khong la nam nhuan" << endl;
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
