#include<iostream>
using namespace std;
void swap(int *x,int *y)
{
int z= *x;
*x = *y;
*y = z;
}
int main()
{
int a= 35, b= 45;
cout << "before swap\n";
cout << "a = " << a << " b = " << b << "\n";
swap(&a,&b);
cout << "after swap with pass by pointer\n";
cout << "a = " << a << "b = " << b << "\n";
}
