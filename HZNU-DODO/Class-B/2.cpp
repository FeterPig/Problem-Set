#include <iostream>
using namespace std;

template <typename T>
class LinkedList
{
    struct Node
    {
        T data;
        Node *next;
        Node(T d, Node *n = NULL) : data(d), next(n) {}
    };
    Node *head;

public:
    LinkedList() : head(NULL) {}
    void add(T val)
    {
        Node *newNode = new Node(val);
        if (head == NULL || val > head->data)
        {
            newNode->next = head;
            head = newNode;
        }
        else
        {
            Node *p = head;
            while (p->next != NULL && p->next->data >= val)
                p = p->next;
            newNode->next = p->next;
            p->next = newNode;
        }
    }
    void print() const
    {
        Node *p = head;
        while (p != NULL)
        {
            cout << p->data;
            if (p->next != NULL)
                cout << " ";
            p = p->next;
        }
        cout << endl;
    }
};

int main()
{
    LinkedList<int> list;
    int num;
    cin >> num;
    while (num > 0)
    {
        list.add(num); // 输入的正整数按从大到小的顺序添加到链表中
        cin >> num;
    }
    list.print(); // 输出链表
    return 0;
}
