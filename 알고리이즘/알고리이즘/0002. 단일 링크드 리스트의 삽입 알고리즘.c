#include <stdio.h>
#include <stdlib.h>

typedef struct _NODE {
	char data;
	struct _NODE *next;
 } NODE;

NODE *head, *end, *temp;
NODE *temp1, *temp2, *temp3, *temp4;

void Initialize(void);
void InsertNode(NODE *);

void Initialize(void) {
	head = (NODE*)malloc(sizeof(NODE));
	end = (NODE*)malloc(sizeof(NODE));

	temp1 = (NODE*)malloc(sizeof(NODE));
	temp1->data = 'A';
	head->next = temp1;
	temp1->next = end;
	end->next = end;
	
	temp2 = (NODE*)malloc(sizeof(NODE));
	temp2->data = 'B';
	temp1->next = temp2;
	temp2->next = end;

	temp3 = (NODE*)malloc(sizeof(NODE));
	temp3->data = 'D';
	temp2->next = temp3;
	temp3->next = end;

	
	temp4 = (NODE*)malloc(sizeof(NODE));
	temp4->data = 'E';
	temp3->next = temp4;
	temp4->next = end;
}

void InsertNode(NODE *ptr) {
	NODE *indexptr;

	for (indexptr = head; indexptr != end; indexptr = indexptr->next) {
		if (indexptr->next->data > ptr->data)
			break;
	}

	ptr->next = indexptr->next;
	indexptr->next = ptr;
}

void main() {
	NODE *ptr;
	int i = 0;
	Initialize();

	ptr = head->next;

	for (i = 0; i < 4; i++) {
		printf("%2c", ptr->data);
		ptr = ptr->next;
	}

	printf("\n");
	temp = (NODE*)malloc(sizeof(NODE));
	temp->data = 'C';

	InsertNode(temp);

	ptr = head->next;

	for (i = 0; i < 5; i++) {
		printf("%2c", ptr->data);
		ptr = ptr->next;
	}
}