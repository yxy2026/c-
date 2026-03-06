#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int date;
	struct node* next;
}node;
int main() {
	node* node1, * node2, * node3, * p;
	node1 = (node*)malloc(sizeof(node));
	node2 = (node*)malloc(sizeof(node));
	node3 = (node*)malloc(sizeof(node));
	scanf_s("%d %d %d", &node1->date, &node2->date, &node3->date);
	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;
	p = node1;
	while (p != NULL) {
		printf("%d", p->date);
		p = p->next;
	}
	free(node1);
	free(node2);
	free(node3);
	return 0;
}
