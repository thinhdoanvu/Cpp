#include<iostream>
using namespace std;

//khai bao bien
char s;

//chuong trinh con
void nhap()
{
  //khai bao bien
  cout << "Nhap chuoi ky tu: ";
  cin >>s;
}

int is_na(char c)
{
  switch(c)
  {
    case 'a': 
    case 'e': 
    case 'i': 
    case 'o': 
    case 'u': 
    case 'A': 
    case 'E': 
    case 'I': 
    case 'O': 
    case 'U': 
      return 1;
    default: 
      return 0;
  }
}

void in()
{
  if(is_na(s)==1)
  {
    cout <<s << " la nguyen am";
  }
  else
  {
    cout << s << " la phu am";
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
