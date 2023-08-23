#include "Single_Linklist.h"

bool InitList(Linklist& l)
{
    l = new LNode;      //分配一个头结点
    if (l == NULL)
    {
        cout << "内存不足，分配失败";
        return false;
    }
    else {
        l->next = NULL; //头结点之后暂时还没有结点
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
    p = l->next;//让p指向头节点的指针域
    while (p != NULL)
    {
        q = p->next;
        delete p;
        p = q;
    }
    l->next = NULL;//头节点指针域置空
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
    LNode* p=l;//指针p指向当前扫描的结点
    int j = 0;//记录当前p指针指的是第几个结点
    while (p != NULL && j < i - 1)
    {
        p = p->next;
        j++;
    }
    if (p == NULL)
    {
        return false; //i值不合法
    }
    LNode* q = new LNode;
    q->data = e;
    q->next = p->next;
    p->next = q;
    return true;
}

bool GetElem_l(Linklist l, int i, Elem& e)
{
    LNode* p = l->next;//指向首元节点，而不是指向头节点
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
        p = p->next;//寻找第i个节点，令p指向其前驱
        j++;
    }
    if (p->next == NULL) {
        return false;
    }
    LNode* q = p->next;//临时保存被删节点的地址，以备释放
    p->next = q->next;
    e = q->data;//保留删除节点的数据域
    delete q;//释放删除节点的地址
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

