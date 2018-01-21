#include<iostream>
#include<math.h>
using namespace std;

//khai bao bien
float a;
float b;
float c;

//chuong trinh con
void nhap()
{
  cout <<"Nhap he so a= ";
  cin >>a;
  cout <<"Nhap he so b= ";
  cin >>b;
  cout <<"Nhap he so c= ";
  cin >>c;
}

int delta()
{
  return pow(b,2)-4*a*c;
}

//giai phuong trinh bac nhat ax+b=0
void ptb1(int n1, int n2)
{
  float nghiem;

  if(n1==0)
  {
    cout <<"\nHe phuong trinh vo nghiem\n";
  }
  else
  {
    nghiem=-n2/n1;
    cout <<"He phuong trinh co nghiem la: "<<nghiem<<"\n";
  }
}

void ptb2()
{
  //khai bao bien
  float x1_real;
  float x2_real;
  float x1_complex;
  float x2_complex;

  if(a==0)//giai phuong trinh bac 1
  {
    ptb1(b,c);
  }
  else//giai ohuong trinh bac 2
  {
    if(delta==0)
    {
      cout <<"\nNghiem cua phuong trinh la: "<<-b+sqrt(delta())/(2*a);;
    }
    else
    {
      if(delta>0)
      {
        cout<<"\nPhuong trinh co 2 nghiem phan biet"<<endl;
        cout <<"Nghiem thu nhat la: "<<-b+sqrt(delta())/(2*a)<<endl;
        cout <<"Nghiem thu hai la: "<<-b-sqrt(delta())/(2*a)<<endl;
      }
      else//delta<0 thi co nghiem ao 
      {
        cout <<"\nNghiem ao thu 1: "<<-b/(2*a)+sqrt(-delta())<<"i"<<endl;
        cout <<"\nNghiem ao thu 2: "<<-b/(2*a)-sqrt(-delta())<<"i"<<endl;
      }
    }
  } 
    
}
//chuong trinh chinh
int main()
{
  nhap();
  ptb2();
  //ket thuc chuong trinh
  return 0;
}
