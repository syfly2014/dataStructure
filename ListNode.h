#include <iostream>
using namespace std;

#ifndef DDXXLISTS_H
#define DDXXLISTS_H



template <class T> 
class ListNode
{
private:
	T data;
	ListNode <T> *link;
public:
	ListNode() :link(NULL){}//默认构造函数
	ListNode(T value);
	~ListNode();

	void SetLink(ListNode<T> *next);
	ListNode <T> *GetLink();
	T & GetData();
};


//template <class T> ListNode<T>::ListNode()
//{
//	link = NULL;
//} 

template<class T> ListNode<T>::ListNode(T value)
{
	data = value;
	link = NULL;
}

template <class T> ListNode<T>::~ListNode()
{

}

//设置当前节点下一个节点
template <class T> void ListNode<T>::SetLink(ListNode<T> *next)
{
	link = next;
}

//返回该节点的下一个节点
template <class T> ListNode<T> *ListNode<T>::GetLink()
{
	return link;
}

//返回节点中的数据
template <class T> T& ListNode<T>::GetData()
{
	return data;
}


//template <class T> class CirList
//{
//	ListNode<T> *head;
//	ListNode<T> *tail;
//	ListNode<T> *cur;
//public:
//	CirList();
//	~CirList();
//
//	bool AddTail(T value);//用来向单项循环链表的表尾插入新节点
//	void RemoveThis();//用来删除cur所指向的系欸但，在删除完成之后cur自动向后移动一个节点
//	void RemoveAll();//用来删除链表中所有的节点
//	void SetBegin();//用来置cur为head节点
//	int GetCount();//用来获得链表中节点的数目，表头节点除外
//
//	ListNode<T> * GetCur();
//	bool IsEmpty();
//	T GetNext();
//
//};
//
//
//template <class T> CirList<T>::CirList()
//{
//	head = tail = new ListNode < T >;//新建节点，并初始化head和tail
//	cur = NULL;
//	head->SetLink(head);//创建初始循环
//}
//
//template <class T >
//bool CirList<T>::AddTail(T value)//在表尾插入新节点
//{
//	ListNode<T> *add = new ListNode<T>(value);//创建新节点，用来存储数据value
//
//	tail->SetLink(add);//把新节点链入链表,将tail指向刚刚加入的节点
//	tail = tail->GetLink();//移动tail至新表尾处
//	tail->SetLink(head);//使表尾指针指向表头
//
//	if (tail != NULL)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//template <class T>
//void CirList<T>::RemoveAll()
//{
//	SetBegin();//开始从第一个节点删除
//	int length = GetCount();//获取链表的长度
//
//	for (int i = 0; i < length; i++)
//	{
//		RemoveThis();
//	}
//
//	cur = head;//置cur为head
//}
//
//template <class T>
//void CirList<T>::RemoveThis()//把cur指向的节点删除
//{
//	//如果当前的cur在head节点处，由于表头节点不能删除，顺序移动cur到下一点节点处
//	if (cur == head)
//	{
//		cur = cur->GetLink();
//	}
//
//	//用指针preCur标记cur的前一节点
//	ListNode<T> *preCur = cur;
//
//	//寻找cur的前一节点，并用preCur记录下来??????????为何遍历所有节点
//	for (int i = 0; i < this->GetCount(); i++)
//	{
//		preCur = preCur->GetLink();
//	}
//
//	//使cur的前一节点的指针指向cur后一节点，跳过cur节点
//	preCur->SetLink(cur->GetLink());
//	//删除cur之后顺序移动一位
//	cur = preCur->GetLink();
//	preCur = NULL;
//}
//
//template <class T>
//void CirList<T>::SetBegin()
//{
//	cur = head;//置cur到head处，表示链表的开始
//}
//
//template <class T>
//int CirList<T>::GetCount()
//{
//	int num = 0;
//	ListNode<T>* here = cur;//记录当前结点位置
//	while (cur->GetLink() != here)
//	{
//		cur = cur->GetLink();
//		++num;
//	}
//
//	cur = cur->GetLink();//cur返回遍历前的位置
//	return  num;
//}
//
//template <class T>
//ListNode<T> * CirList<T>::GetCur()
//{
//	return cur;
//}
//
//template<class T>
//bool CirList<T>::IsEmpty()
//{
//	return head->GetLink() == head;
//}
//
//template <class T>
//T CirList<T>::GetNext()//返回当前节点中的数据，并使cur顺序移动一个位置
//{
//	if (cur == head)
//	{
//		//跳过表头节点，因为表头节点中不存储有效数据
//		cur = cur->GetLink();
//	}
//
//	T num = cur->GetData();
//
//	cur = cur->GetLink();
//	return num;
//}

#endif
