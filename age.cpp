#include <iostream>
using namespace std;

int main()
{

  int age;

  cout << "Please Enter Your Age : ";

  cin >> age;

  int age_in_days = age * 365;
  int age_in_hours = age_in_days * 60;

  cout << " Age in days is: " << age_in_days << " day\n";
  cout << " Age in hours is: " << age_in_hours << " hours\n";

  return 0;
}