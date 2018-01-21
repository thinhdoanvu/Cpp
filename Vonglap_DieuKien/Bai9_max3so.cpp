#include<iostream>

using namespace std;
//khai bao bien
int n1;
int n2;
int n3;

//chuong trinh con
void nhap()
{
  cout << "Nhap so thu 1: ";
  cin >> n1;
  cout << "Nhap so thu 2: ";
  cin >> n2;
  cout << "Nhap so thu 3: ";
  cin >> n3;
}

//tim max
int max()
{
  //khai bao bien
  int max;

  max=n1;
  if(max<n2)
  {
    max=n2;
  }
  if(max<n3)
  {
    max=n3;
  }

 return max;
}

void in()
{
  cout << "\nSo lon nhat trong 3 so (" <<n1<<", "<<n2<<", "<<n3 <<") la: " << max();
}

//chuong trinh chinh
int main()
{
  nhap();
  max();
  in();
  //ket thuc chuong trinh
  return 0;
}
