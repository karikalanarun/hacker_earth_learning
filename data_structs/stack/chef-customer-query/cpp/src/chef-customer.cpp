#include "iostream"

using namespace std;

void push(int stack[], int val, int size);
int pop(int stack[]);
int size_of_stack(int stack[]);
int top = -1;

int main(int argc, char const *argv[])
{	
	int size = 100, no_of_queries, stack[size], query, price;
	cin >> no_of_queries;
	for (int i = 0; i < no_of_queries; ++i) {
		cin >> query;
		if (query == 1) { if (size_of_stack(stack) > 0) { cout << pop(stack) << endl; } else { cout << "No Food" << endl; } } 
		else if (query == 2) {
			cin >> price;
			push(stack, price, size);
		}
	}
	return 0;
}

void push(int stack[], int val, int size) {
	top++;
	if (top < size) { stack[top] = val; } else { cout << "stack overflow" << endl; }
}

int size_of_stack(int stack[]) {
	return top + 1;
}

int pop(int stack[]) {
	int prevTop = top--;
	return stack[prevTop];
}