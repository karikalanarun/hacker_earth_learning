#include "iostream"

using namespace std;


int top = -1;
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

int main(int argc, char const *argv[]) {
	int no_of_test_cases, no_of_moves, curr_player;
	bool revert_pass = false;
	char move;
	cin >> no_of_test_cases;
	for (int i = 0; i < no_of_test_cases; ++i) {
		int size = 100000, player_stack[size];
		// cout << i << endl;
		cin >> no_of_moves;
		cin >> curr_player;
		// cout << no_of_moves << endl;
		push(player_stack, curr_player, size);
		// cout << "pushed" << endl;
		for (int j = 0; j < no_of_moves; ++j) {
			cin >> move;
			if (move == 'P') {
				cin >> curr_player;
				push(player_stack, curr_player, size);
				revert_pass = false;
			} else if (move == 'B') {
				if (!revert_pass) {
					top--;
					revert_pass = true;
				} else {
					top++;
					revert_pass = false;
				}
			}
		}
		cout << "Player" << " " << pop(player_stack) << endl;
		top = 0;
	}
	return 0;
}