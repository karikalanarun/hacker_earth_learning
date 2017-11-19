#define OP_D "D"
#define OP_E "E"
#define Q_SIZE 100
#include <iostream>
using namespace std;


void enqueue (short int queue[],int ele, short int& rear, short int& count, const int arraySize){
	if (count == arraySize) { cout << "OVERFLOW" << endl; return;}
	queue[rear] = ele;
	rear = (rear + 1) % arraySize;
	count += 1;
}

short int dequeue (short int queue[], short int& front, short int& count, const int arraySize){
	if (count == 0) { return -1;}
	else {
		short int ele = queue[front];
		queue[front] = 0;
		front = (front + 1) % arraySize;
		count -= 1;
		return ele;
	}
}

int main() {	
	short int queue[Q_SIZE], x, N, front = 0, rear = front, count = 0;
	string op;
	cin >> N;
	for (int i = 0; i < N; ++i) {
		cin >> op;
		if (op == OP_E) {
			cin >> x;
			enqueue(queue, x, rear, count, Q_SIZE);
			cout << count << endl;
		} else {
			cout << dequeue(queue, front, count, Q_SIZE);
			cout << " " << count << endl;
		}
	}
    return 0;
}
