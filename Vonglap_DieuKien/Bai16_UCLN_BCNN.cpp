#include<iostream>
using namespace std;

//khai bao bien
int n1;
int n2;

//chuong trinh con
void nhap()
{
  cout<<"Nhap phan tu thu 1:";
  cin >>n1;
  cout<<"Nhap phan tu thu 2:";
  cin >>n2;
}

//tim UCLN
int ucln(int a, int b)
{
  while(a!=b)
  {
    if(a>b)
    {
      a=a-b;
    }
    else
    {
      b=b-a;
    }
  }
  return a;
}

//tim BCNN
int bcnn(int a, int b)
{
  return a*b/(ucln(a,b));
}

//in ket qua
void in()
{
  cout <<"\nUCLN cua ("<<n1<<","<<n2<<")="<<ucln(n1,n2)<<endl;
  cout <<"\nBCNN cua ("<<n1<<","<<n2<<")="<<bcnn(n1,n2)<<endl;
}
//chuong trinh chinh
int main()
{
  nhap();
  in();
  //ket thuc chuong trinh
  return 0;
}
