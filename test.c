#include "contact.h"

void menu()
{
	printf("**************************************\n");
	printf("*****    1.add          2.del    *****\n");
	printf("*****    3.search       4.modify *****\n");
	printf("*****    5.show         6.sort   *****\n");
	printf("*****    7.save         0.exit   *****\n");
	printf("**************************************\n");
}
int main()
{
	int input = 0;
	struct Contact con;
	InitContact(&con);
	do
	{
		menu();
		printf("请选择你需要的操作:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			break;
		case EXIT:
			Release(&con);
			printf("退出程序\n");
			break;
		case SAVE:			
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}


	} while (input);
	system("pause");
	return 0;
}