#include<iostream>
using namespace std;

//khai bao bien
int N;

//chuong trinh con
void nhapN()
{
  cout << "Nhap gia tri cua N so tu nhien lien tiep: ";
  cin >>N;
  while(N<10 || N>1000)
  {
    cout<<"N khong thoa man dieu kien\n";
    cout << "Nhap gia tri cua N so tu nhien lien tiep: ";
    cin >>N;
  }
}

//tinh tong
void tong()
{
  //khai bao bien
  int i;

  long int tong;
  tong=0;

  for(i=1;i<=N;i++)
  {
    tong+=i;
  }
  cout <<"\nTong cua "<<N<<" so hang lien tiep nhau la: "<<tong;
}

//chuong trinh chinh
int main()
{
  nhapN();
  tong();
  //ket thuc chuong trinh
  return 0;
}
