/*通讯录1

作业内容
实现一个通讯录；

通讯录可以用来存储1000个人的信息，每个人的信息包括：姓名、性别、年龄、电话、住址

提供方法：

添加联系人信息
删除指定联系人信息
查找指定联系人信息
修改指定联系人信息
显示所有联系人信息
清空所有联系人
以名字排序所有联系人
*/

/*#include "Contact.h";
​
void menu()
{
	printf("******************************\n");
	printf("** 1. add   2. del **\n");
	printf("** 3. search 4. modify **\n");
	printf("** 5. show  6. clear **\n");
	printf("** 7. sort  0. exit **\n");
	printf("******************************\n");
}
​
int main()
{
	int input = 0;
	//创建通讯录
	Contact con;//
	//初始化通讯录
	InitContact(&con);
	do
	{
		menu();
		printf("请选择:>");
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
			FindContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case CLEAR:
			ClearContact(&con);
			break;
		case EXIT:
			printf("退出程序\n");
			return 0;
		default:
			printf("输入有误，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}*/

int main()
{
	int input = 0;
	do{
		menu();
		printf("请选择功能：\n");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact();
			break;
		case DEL:
			DelContact();
			break;
		case SEARCH:
			FindContact();
			break;
		case SORT:
			SortContact();
			break;
		case MODIFY:
			ModifyContact();
			break;
		case SHOW:
			ShowContact();
			break;
		case CLEAR:
			ClearContact();
			break;
		case EXIT:
			printf("程序退出！\n");
			return 0;
		default:
			printf("输入有误，请重新输入！\n");
			break;
		}
	} while (input);
	return 0;
}