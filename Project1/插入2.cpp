#include <stdio.h>

#define MAX 100
struct sqlist {
	int date[MAX];
	int length;
};
void insert(struct sqlist* list, int pos, int x) {
	for (int i = list->length; i >= pos; i--) {
		list->date[i] = list->date[i - 1];
	}
	list->date[pos - 1] = x;
	list->length++;
}
void delet(struct sqlist* list, int pos) {
	for (int i = pos; i < list->length; i++) {
		list->date[i - 1] = list->date[i];
	}
	list->length--;
}void print(struct sqlist* list) {
	for (int i = 0; i < list->length; i++) {
		printf("%d", list->date[i]);
	}
	printf("\n");
}
int main() {
	struct sqlist L;
	L.length = 5;
	L.date[0] = 1;
	L.date[1] = 3;
	L.date[2] = 5;
	L.date[3] = 7;
	L.date[4] = 9;
	print(&L);
	insert(&L, 3, 4);
	print(&L);
	delet(&L, 5);
	print(&L);
	return 0;

}