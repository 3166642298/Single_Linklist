#include<iostream>
#include"Elem.h"
#include"Single_Linklist.h"
using namespace std;
int main()
{
	Linklist linklist=NULL;//声明一个指向单链表的指针
	if (InitList(linklist))
	{
		cout << "单链表初始化成功" << endl;
	}
	else {
		cout << "单链表初始化失败" << endl;
	}
	Elem elem1("pzn", 20, 1);
	Elem elem2("www", 20, 2);
	Elem elem3("xxx", 20, 3);
	Elem elem4("rrr", 20, 4);
	Elem elem5("yyy", 20, 5);
	/*CreateList_H(linklist, elem1);
	CreateList_H(linklist, elem2);
	CreateList_H(linklist, elem3);
	CreateList_H(linklist, elem4);
	CreateList_H(linklist, elem5);*/

	CreateList_R(linklist, elem1);
	CreateList_R(linklist, elem2);
	CreateList_R(linklist, elem3);
	CreateList_R(linklist, elem4);
	CreateList_R(linklist, elem5);

	/*ListInsert(linklist, 1, elem1);
	ListInsert(linklist, 2, elem2);
	ListInsert(linklist, 3, elem3);
	ListInsert(linklist, 4, elem4);
	ListInsert(linklist, 5, elem5);*/

	ListDelete(linklist, 1, elem1);
	PrintList(linklist);
	return  0;
}
