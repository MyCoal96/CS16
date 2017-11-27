#include <iostream>
#include <string>
using namespace std;
int length_of_line(string input)
{
  //Accumulates the amount of characters in a string, excluding whitespace
  int pre_length(input.length()), length_line(0);
  for(int i = 0; i < pre_length; i++)
  {
    if(!isspace(input[i]))
    {
      length_line++;
    }
  }
  return length_line;
}
void alphabet_counter(string input, int length)
{
  for(int i = 0; i < length; i++)
  {
    cout << static_cast <int>(input[i]) - 96 << endl;
  }
}
int main()
{
  int alphabet_1[26] = {0}, alphabet_2 = {0}, length_1(0), length_2(0);
  string input_1(""), input_2("");
  cout << "Enter first string:" << endl;
  getline(cin,input_1);
  length_1 = length_of_line(input_1);
  cout << "Enter second string:" << endl;
  getline(cin,input_2);
  length_2 = length_of_line(input_2);
  alphabet_counter(input_1, length_1);
}
