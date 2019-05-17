//해쉬 테이블
//mislav stanko mislav ana
//participant
// completion..
// 해쉬 테이블을 구현할 때
//해쉬 충돌이 발생하면, Chaining OR Open Addressing을 통해서 해결


#include <iostream>
#define MAX_HASH 10
using namespace std;

typedef struct Node {
	int id;

}Node;

Node*hashTable[MAX_HASH];


int main(void)
{
	for (int i = 0; i < MAX_HASH; i++) {
		Node*node = (Node*)malloc(sizeof(Node));
		node->id = i;
		hashTable[i] = node;
	}
	return 0;


	return 0;
}
