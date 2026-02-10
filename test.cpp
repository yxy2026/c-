#include <stdio.h>
int main()
{
	int a;
	scanf_s("%d", &a);
	switch (a / 10){                            
	case 6:
		printf("及格");
		break;
	case 7:
	case 8:
			printf("良好");
			break;
	case 9:
				printf("优秀");
	}
	return 0;
}