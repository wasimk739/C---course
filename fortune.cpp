#include <iostream>

#include <time.h>

using namespace std;

int main()

{

	srand(time(NULL));

	string arrayNum[5] = {"hello world", "damn you", "true friend", "Forever","After life"};

	int RanIndex = rand() % 5;

	cout << arrayNum[RanIndex];

}