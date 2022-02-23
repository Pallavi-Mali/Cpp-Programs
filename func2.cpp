#include <iostream>

using namespace std;
int add(int, int);
float add(float, float);

int add(int x, int y)
{
  int sum;
  sum = x + y;
  return sum;
}
float add(float x, float y)
{
  float sum;
  sum = x + y;
  return sum;
}
int main()
{
  int a, b, x;
  float c, d, y;

  x = add(3, 4);
  cout << "Sum of integers: " << x << endl;
  y = add(5, 6);
  cout << "Sum of floats: " << y << endl;
  return 0;
}
