#include<iostream>
using namespace std;

//khai bao bien
int a;
int n;

//chuong trinh con
void nhap()
{
  cout <<"Nhap co so = ";
  cin >> a;
  cout <<"Nhap so mu = ";
  cin >> n;
}

int luythua(int cs, int lt)
{
  if(lt!=0)
  {
    return cs*luythua(cs,lt-1);
  }
  else
  {
    return 1;
  }
  //x=0 thi giai thua la 1
  
}

void in()
{
  cout <<a<<"^"<<n<<" = "<<luythua(a,n);
}

//chuong trinh chinh
int main()
{
  nhap();
  in();
  //ket thuc chuong trinh
  return 0;
}
