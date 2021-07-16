#include<bits/stdc++.h>
using namespace std;
#define REP_F(i,a,b)   for (int i = a; i < b; ++i)
#define REP_B(i,b,a)   for (int i = b; i > a; --i)
#define b  begin
#define e  end
#define ITER(it,v)     for(auto it=v.b(); it!=v.e(); it++)
#define PB    push_back
#define el   endl
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define mod 1000000007
#define f first
#define s second
#define MP make_pair

struct node
{
	int data;
	node *next;
};

class linked_list
{
private:
	node *head, *tail;
public:
	linked_list()
	{
		head = NULL;
		tail = NULL;
	}

	void add_node(int n)
	{
		node *tmp = new node;
		tmp->data = n;
		tmp->next = NULL;

		if (head == NULL)
		{
			head = tmp;
			tail = tmp;
		}
		else
		{
			tail->next = tmp;
			tail = tail->next;
		}
	}
	void display()
	{
		node *tmp;
		tmp = head;
		while (tmp != NULL)
		{
			cout << tmp->data << endl;
			tmp = tmp->next;
		}
	}
	void del (node *before_del)
	{
		node* temp;
		temp = before_del->next;
		before_del->next = temp->next;
		delete temp;
	}
};


int main()
{
	// code here
	linked_list a;
	a.add_node(1);
	a.add_node(2);

	return 0;

}