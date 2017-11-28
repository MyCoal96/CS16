#include <iostream>
#include <vector>
using namespace std;
vector<string> sep_strings;
vector<string> split(string target, string delimiter)
{
  //Fills up a string vector with substrings gathered from a string seperated by delimiters.
  sep_strings.push_back("");
  int j = 0;
  for(int i = 0; i < target.size(); i++)
  {
    if(target.find_first_of(delimiter) == string::npos)
    {
      cout << "The substrings are: " << "\"" << target << "\"" << endl;
      return sep_strings;
    }
    if(target[i] != delimiter[0])
    {
      //Adds characters to the string vector.
      sep_strings[j] += target[i];
    }
    else if(sep_strings[0] != "" && i < target.size() - 1)
    {
      //Expands string vector by 1.
      sep_strings.push_back("");
      j++;
    }
  }
  return sep_strings;
}
int main()
{
  string target(""), delimiter("");
  cout << "Enter string to split:" << endl;
  cin >> target;
  cout << "Enter delimiter string:" << endl;
  cin >> delimiter;
  sep_strings = split(target,delimiter);
  if(sep_strings[0] != "")
  {
    cout << "The substrings are: ";
  }
  for(int i = 0; i < sep_strings.size() - 1; i++)
  {
    //Outputs substrings.
    if(sep_strings[i] != "")
    {
      //Outputs all non-empty vector entries, except for the last entry.
      cout << "\"" << sep_strings[i] << "\"" << ", ";
    }
  }
  if(sep_strings[sep_strings.size() - 1] != "")
  {
    //Outputs last vector entry.
    cout << "\"" << sep_strings[sep_strings.size() - 1] << "\"" << endl;
  }
}
