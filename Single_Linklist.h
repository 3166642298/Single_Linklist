#pragma once
#ifndef SINGLE_LINKLIST_H
#define SINGLE_LINKLIST_H 
#include<iostream>
#include"Elem.h"
using namespace std;
typedef struct LNode {   //定义单链表节点类型
	Elem data;//每个节点存放一个数据元素
    LNode* next;//指针指向下一个元素
}*Linklist;//Linklist为指向结构体LNode的指针类型

bool InitList(Linklist& l);//初始化一个空的单链表
bool isEmpty(Linklist l);//判断单链表是否为空
void DestoryList(Linklist& l);//单链表的销毁
void ClearList(Linklist& l);//单链表的清空，头指针和头节点仍然在
int ListLength(Linklist l);//求单链表的表长
bool ListInsert(Linklist& l, int i, Elem e);//在第i个位置前插入元素e(带头结点)
bool GetElem_l(Linklist l, int i, Elem& e);//取单链表第i个节点的数据（带头节点）
int FindList(Linklist l, Elem e);//按值查找
bool ListDelete(Linklist& l, int i, Elem& e);//删除第i个节点
void CreateList_H(Linklist& l, Elem e);//将新元素插在链表头部
void CreateList_R(Linklist& l, Elem e);//将新元素插在链表尾部
void PrintList(Linklist l);//输出该链表
#endif // !SINGLE_LINKLIST_H
