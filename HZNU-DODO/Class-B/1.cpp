#include <iostream>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node() {}
    Node(int x) : value(x), next(NULL) {}
};
class SingleLinkedList
{
public:
    SingleLinkedList()
    {
        head = NULL;
    }
    void init()
    { // 链表初始化
        int val;
        cin >> val;
        head = new Node(val);
        Node *tmpNode = head;
        for (int i = 0; i < 9; i++)
        { // 链表共有10个节点，head后还有9个
            cin >> val;
            Node *pNode = new Node(val);
            tmpNode->next = pNode;
            tmpNode = pNode;
        }
        tmpNode->next = NULL;
    }
    void output()
    {
        Node *p = head;
        bool first = true;
        while (p != NULL)
        {
            if (p->value % 2 != 0)
            {
                if (!first)
                    cout << " ";
                cout << p->value;
                first = false;
            }
            p = p->next;
        }
        cout << endl;
    }

private:
    Node *head;
};
int main()
{
    SingleLinkedList list;
    list.init();
    list.output();
    return 0;
}