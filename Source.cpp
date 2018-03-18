#include<iostream>
#include<array>
#include<algorithm>

using namespace std;

bool neparni(int broj) {
	if (broj % 2 == 0)
	{
		return false;
	}
	return true;
}
int main() {
	array<int, 10> a = { 1, 21, 3, 41, 51, 61, 7, 81, 9, 10 };
	
	 if (all_of(a.begin(), a.end(), neparni))
	 {
		 cout << "Svi brojevi su neparni u polju!" << endl;
	 }
	 else
	 {
		 cout << "Ima i parnih brojeva u polju!" << endl;
	 }
	
	return 0;
}