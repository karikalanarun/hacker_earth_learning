#include "iostream"

using namespace std;

int main(int argc, char const *argv[])
{
	int length_of_aray;
	cin >> length_of_aray;
	int array[length_of_aray];
	for (int i = 0; i < length_of_aray; ++i)
	{
		cin >> array[i];
	}
	for (int i = length_of_aray-1; i >= 0; --i) {
		cout << array[i] << endl;
	}
	return 0;
}