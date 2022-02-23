#include<iostream>
using namespace std;
int main {
float *pt= new float;
*pt=55;
cout<<"value="<<*pt;
cout<<"address="<<pt;
cout<<"\nsize="<<(*pt);
cout<<"\nsize ptr="<<sizeof pt;
}

