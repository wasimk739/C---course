#include <iostream>

#include <time.h>

using namespace std;

int main()

{

	srand(time(0));

	string arrayNum[5] = {"hello world", "damn you", "true friend", "Forever","After life"};
	// srand(time(0));

	int RanIndex = rand() % 5;
	cout<<RanIndex;

	cout << arrayNum[RanIndex];

}