#pragma once
#ifndef SINGLE_LINKLIST_H
#define SINGLE_LINKLIST_H 
#include<iostream>
#include"Elem.h"
using namespace std;
typedef struct LNode {   //���嵥����ڵ�����
	Elem data;//ÿ���ڵ���һ������Ԫ��
    LNode* next;//ָ��ָ����һ��Ԫ��
}*Linklist;//LinklistΪָ��ṹ��LNode��ָ������

bool InitList(Linklist& l);//��ʼ��һ���յĵ�����
bool isEmpty(Linklist l);//�жϵ������Ƿ�Ϊ��
void DestoryList(Linklist& l);//�����������
void ClearList(Linklist& l);//���������գ�ͷָ���ͷ�ڵ���Ȼ��
int ListLength(Linklist l);//������ı�
bool ListInsert(Linklist& l, int i, Elem e);//�ڵ�i��λ��ǰ����Ԫ��e(��ͷ���)
bool GetElem_l(Linklist l, int i, Elem& e);//ȡ�������i���ڵ�����ݣ���ͷ�ڵ㣩
int FindList(Linklist l, Elem e);//��ֵ����
bool ListDelete(Linklist& l, int i, Elem& e);//ɾ����i���ڵ�
void CreateList_H(Linklist& l, Elem e);//����Ԫ�ز�������ͷ��
void CreateList_R(Linklist& l, Elem e);//����Ԫ�ز�������β��
void PrintList(Linklist l);//���������
#endif // !SINGLE_LINKLIST_H
