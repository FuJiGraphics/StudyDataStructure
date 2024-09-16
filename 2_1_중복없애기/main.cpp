/* [2024-09-17] Jin
* sub: 중복 없애기
* 정렬되어 있지 않은 연결리스트가 주어졌을 때
* 이 리스트에서 중복되는 원소를 제거하는 코드를 작성하라.
*/
#include "SinglyLinkedList.h"

int main(void)
{
	fz::SinglyLinkedList<int> list;
	int abc = 20;
	list.AppendToTail(abc, 30, 20, 20, 10);
	list.Print();

	return (0);
}