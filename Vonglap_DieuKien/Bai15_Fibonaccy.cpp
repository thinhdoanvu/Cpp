#include<iostream>
using namespace std;
//khai bao bien
int N;
int n1;
int n2;

//chuong trinh con
void nhap()
{
  cout <<"Nhap so hang thu 1: ";
  cin >>n1;
  cout <<"Nhap so hang thu 2: ";
  cin >>n2;
  cout <<"Nhap so luong phan tu: ";
  cin >>N;
}
void in()
{
  //khai bao bien
  int i;
  int sum;

  //in ra 2 so dau tien
  cout <<n1<<"\t";
  cout <<n2<<"\t";
  for(i=0;i<N-2;i++)
  {
    sum=n1+n2;
    cout <<sum<<"\t";
    n1=n2;
    n2=sum;
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
