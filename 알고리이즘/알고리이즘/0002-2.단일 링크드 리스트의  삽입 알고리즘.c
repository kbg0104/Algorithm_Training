#include <stdio.h>
#include <stdlib.h>

typedef struct _NODE {
	char data[10];
	struct _NODE *next;
} NODE;

NODE *head, *end, *temp;
NODE *index;
int num = 0;

void InsertNode(NODE *);
//void RemoveNode(NODE *);

void InsertNode(NODE *ptr) {
	NODE *indexptr;
	scanf("%d", &num);
	int s = 0;
	for (indexptr = head; indexptr != end; indexptr = indexptr->next) {
		s++;
		if (s < num)
			break;
	}

	ptr->next = indexptr->next;
	indexptr->next = ptr;
}

/*void RemoveNode(NODE *) {


}
*/
void main() {
	NODE *ptr;
	int i = 0;
	int j;
	
	
	printf("#��ũ�� ����Ʈ#\n ���Ͻô� ����� �Է��� �ֽʽÿ�.\n1. ����\n2. ����\n3. ��� ���\n");
	scanf("%d", &j);
	switch (j) {
		case 3 : {
			ptr = head->next;
			for (i = 0; i < 4; i++) {
				printf("%s ", ptr->data);
				ptr = ptr->next;
			}
			printf("\n");
		}

		case 1: {
			temp = (NODE*)malloc(sizeof(NODE));
			//temp->data = 'C';
			printf("���� ���\n");
			scanf("%s", temp->data);
		
			InsertNode(temp);
		}

		/*case 2: {
			temp = (NODE*)malloc(sizeof(NODE));
			//temp->data = 'C';
			scanf("%s", temp->data);
			RemoveNode(temp);
		
		}*/
		default: {
		}
	}
}