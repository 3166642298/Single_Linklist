#include "Single_Linklist.h"

bool InitList(Linklist& l)
{
    l = new LNode;      //����һ��ͷ���
    if (l == NULL)
    {
        cout << "�ڴ治�㣬����ʧ��";
        return false;
    }
    else {
        l->next = NULL; //ͷ���֮����ʱ��û�н��
        return true;
    }
}

bool isEmpty(Linklist l)
{
    if (l == NULL)
    {
        return true;
    }
    else {
        return false;
    }
}

void DestoryList(Linklist& l)
{
    LNode* p;
    while (l != NULL) {
        p = l;
        l = l->next;
        delete p;
    }
}

void ClearList(Linklist& l)
{
    LNode* p;
    LNode* q;
    p = l->next;//��pָ��ͷ�ڵ��ָ����
    while (p != NULL)
    {
        q = p->next;
        delete p;
        p = q;
    }
    l->next = NULL;//ͷ�ڵ�ָ�����ÿ�
}

int ListLength(Linklist l)
{
    LNode* p;
    p = l->next;
    int i = 0;
    while (p != NULL)
    {
        i = i + 1;
        p = p->next;
    }
    return i;
}

bool ListInsert(Linklist& l, int i, Elem e)
{
    if (i < 1) {
        return false;
    }
    LNode* p=l;//ָ��pָ��ǰɨ��Ľ��
    int j = 0;//��¼��ǰpָ��ָ���ǵڼ������
    while (p != NULL && j < i - 1)
    {
        p = p->next;
        j++;
    }
    if (p == NULL)
    {
        return false; //iֵ���Ϸ�
    }
    LNode* q = new LNode;
    q->data = e;
    q->next = p->next;
    p->next = q;
    return true;
}

bool GetElem_l(Linklist l, int i, Elem& e)
{
    LNode* p = l->next;//ָ����Ԫ�ڵ㣬������ָ��ͷ�ڵ�
    int j = 1;
    while (p != NULL && j < i)
    {
        p = p->next;
        j++;
    }
    if (p == NULL || j > i) {
        return false;
    }
    e = p->data;
    return true;
}

int FindList(Linklist l, Elem e)
{
    LNode* p;
    p = l->next;
    int j = 1;
    while (p != NULL)
    {
        if (p->data == e)
        {
            break;
        }
        p = p->next;
        j++;
    }
    if (p == NULL)
    {
        return 0;
    }
    else {
        return j;
    }   
}

bool ListDelete(Linklist& l, int i, Elem& e)
{
    if (i < 1)
    {
        return false;
    }
    LNode* p = l;
    int j = 0;
    while (p->next!= NULL && j < i-1)
    {
        p = p->next;//Ѱ�ҵ�i���ڵ㣬��pָ����ǰ��
        j++;
    }
    if (p->next == NULL) {
        return false;
    }
    LNode* q = p->next;//��ʱ���汻ɾ�ڵ�ĵ�ַ���Ա��ͷ�
    p->next = q->next;
    e = q->data;//����ɾ���ڵ��������
    delete q;//�ͷ�ɾ���ڵ�ĵ�ַ
    return true;
}

void CreateList_H(Linklist& l, Elem e)
{
    LNode* q=new LNode;
    q->data = e;
    q->next = l->next;
    l->next = q;
}

void CreateList_R(Linklist& l, Elem e)
{
    LNode* q = new LNode;
    q->data = e;
    q->next = NULL;
    LNode* p = l;
    while (p->next!= NULL)
    {
        p = p->next;
    }
    p->next = q;
}

void PrintList(Linklist l)
{
    LNode* p = l->next;
    while (p != NULL)
    {
        cout << p->data << endl;
        p = p->next;
    }
}

