#include "iostream"

using namespace std;

int insert_pos = 0;

int parent(int pos) {
	int parent_pos = pos/2;
	if (not (pos % 2)) { --parent_pos; }
	return parent_pos;
}

void max_heapify(int heap[], int pos) {
	int parent_pos = parent(pos), value = heap[pos], temp;
	if (heap[parent_pos] < value and parent_pos != -1) {
		temp = heap[parent_pos];
		heap[parent_pos] = value;
		heap[pos] = temp;
		max_heapify(heap, parent_pos);
	}
}

void insert(int heap[], int value) {
	// cout << "inside insert ..." << endl;
	// cout << value << endl;
	heap[insert_pos] = value;
	if (insert_pos) {
		max_heapify(heap, insert_pos);	
	}
	++insert_pos;
}



int main(int argc, char const *argv[])
{
	int initial_list_size, value;
	cin >> initial_list_size;
	int queue_size = 10000 + initial_list_size, heap[queue_size];

	for (int i = 0; i < initial_list_size; ++i)	{
		cin >> value;
		// cout << value << endl;
		insert(heap, value);
	}
	int nQ, q, v;
	cin >> nQ;
	for (int i = 0; i < nQ; ++i) {
		cin >> q;
		if (q == 1) {
			cin >> v;
			insert(heap, v);
		} else {
			cout << heap[0] << endl;
		}
	}
	return 0;
}