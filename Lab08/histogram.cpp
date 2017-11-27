#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;
int max_grade(vector<int> grades)
{
  int grade_count(grades.size());
  int max(0);
  for(int i = 0; i < grade_count; i++)
  {
    if(grades[i] > max)
    {
      max = grades[i];
    }
  }
  return max;
}
int main()
{
  string histogram("");
  int grade_count(0), grade_val(0), max(0);
  vector<int> grades;
  vector<string> grade_histogram;
  cout << "Enter number of grades:" << endl;
  cin >> grade_count;
  cout << "Enter grades (each on a new line):" << endl;
  for(int i = 0; i < grade_count; i++)
  {
    cin >> grade_val;
    grades.push_back(grade_val);
  }
  max = max_grade(grades);
  for(int i = 0; i < max + 1; i++)
  {
    grade_histogram.push_back("");
  }
  int histogram_size = grade_histogram.size();
  for(int i = 0; i < grade_count; i++)
  {
    grade_histogram[grades[i]] += "*";
  }
  cout << "Histogram:" << endl;
  for(int i = 0; i < histogram_size; i++)
  {
    if(grade_histogram[i] != "")
    {
      cout << setw(3) << i << " " << grade_histogram[i] << endl;
    }
  }
}
