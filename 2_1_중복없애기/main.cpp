/* [2024-09-17] Jin
* sub: �ߺ� ���ֱ�
* ���ĵǾ� ���� ���� ���Ḯ��Ʈ�� �־����� ��
* �� ����Ʈ���� �ߺ��Ǵ� ���Ҹ� �����ϴ� �ڵ带 �ۼ��϶�.
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