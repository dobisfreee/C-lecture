#include <stdio.h>
struct Node
{
	int data;
	struct Node* next;

};



int main()
{
#pragma region ASCII �ڵ�
	// �̱� ���� ��ȯ ǥ�غ�ȣ(ASCII)�� 7��Ʈ�� ���ڸ� ǥ���ϴ� ǥ�� �ڵ��Դϴ�.

	// printf("%d", 'A'); //65

	// for (int i = 0; i < 26; i++)
	// {
	// 	printf("%c ", 'A' + i);
	// }
#pragma endregion

#pragma region �ڱ� ���� ����ü
	// struct Node node1 = { 10, NULL };
	// struct Node node2 = { 20, NULL };
	// struct Node node3 = { 30, NULL };
	// 
	// 
	// node1.next = &node2;
	// node2.next = &node3;
	// node3.next = NULL;
	// 
	// struct Node* currentPtr = &node1;
	// while (currentPtr != NULL)
	// {
	// 	printf("%d\n", currentPtr->data);
	// 	currentPtr = currentPtr->next;
	// }












#pragma endregion



	return 0;
}