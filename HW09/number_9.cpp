#include <iostream>
using namespace std;
int sequence_1(int element, int value)
{
  if(element > 1)
  {
    value = (value * 2) + 5;
    sequence_1(element - 1,value);
  }
  else
  {
    return value;
  }
}
int main()
{
  int element(0), value(3);
  cout << "Which element of the sequence would you like to know?" << endl;
  cin >> element;
  cout << "Element number " << element << " in the sequence is " << sequence_1(element,value) << ".";
  return 0;
}
