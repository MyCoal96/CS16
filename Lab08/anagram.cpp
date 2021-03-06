#include <iostream>
#include <string>
using namespace std;
string alphabet_counter(string input, int alphabet_1[26])
{
  //Fills up alphabet array, and counts how many alphabetical characters are present in the input.
  string alphabet_counts("");
  int length = input.length();
  for(int i = 0; i < length; i++)
  {
    //Parses through alphabetical characters in the input string.
    if(isalpha(input[i]))
    {
      int char_val(static_cast<int>(input[i]));
      if(char_val <= 90)
      {
        //Adds all uppercase alphabetical characters to the array.
        alphabet_1[char_val - 65] += 1;
      }
      else
      {
        //Adds all lowercase alphabetical characters to the array.
        alphabet_1[char_val - 97] += 1;
      }
    }
  }
  for(int i = 0; i < 26; i++)
  {
    //Concatenates the amount of each alphabetical characters to a string in order from A-Z.
    alphabet_counts += alphabet_1[i];
  }
  return alphabet_counts;
}
int main()
{
  int alphabet_1[26] = {0}, alphabet_2[26] = {0}, length_1(0), length_2(0);
  string input_1(""), input_2(""), alphabet_counts_1(""), alphabet_counts_2("");

  cout << "Enter first string:" << endl;
  getline(cin,input_1);
  alphabet_counts_1 = alphabet_counter(input_1, alphabet_1);

  cout << "Enter second string:" << endl;
  getline(cin,input_2);
  alphabet_counts_2 = alphabet_counter(input_2, alphabet_2);

  if(alphabet_counts_1 == alphabet_counts_2)
  {
    //Checks if strings match.
    cout << "The strings are anagrams." << endl;
  }
  else
  {
    cout << "The strings are not anagrams." << endl;
  }
}
