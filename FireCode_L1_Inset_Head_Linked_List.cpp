#include <stdio.h>
#include <algorithm>
#include <assert.h>
#include <bitset>
#include <cmath>
#include <complex>
#include <deque>
#include <functional>
#include <iostream>
#include <limits.h>
#include <map>
#include <math.h>
#include <queue>
#include <set>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <time.h>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

struct listnode {
  int value;
  struct listnode *next;
};

class LinkedList
{
private:
  listnode *head,*tail;
  bool isEmpty()
  {
    return head==NULL;
  }
public:
    void insert(int data);
    void print();
};

void LinkedList::insert(int data){
    listnode* node = new listnode();
    node->value = data;
    if (isEmpty())
    {
      node->next = NULL;
      head = node;
      tail = node ;
    }
    else
    {
      tail->next = node;
      tail = node;
    }
}

void LinkedList::print(){
    listnode* head = this->head;
    int i = 1;
    while(head){
        std::cout << i << ": " << head->value << std::endl;
        head = head->next;
        i++;
    }
}

listNode* insert_at_head( listNode* head, int data)
{
    listNode* temp = new listNode();
    temp->value = data ;
    temp->next = head;
    return temp;
}

int main()
{
  LinkedList* l = new LinkedList();
  for (int i=0; i<10;i++)
  {
    l->insert(rand() % 10);
  }
  l->print();
  delete l;
  return 0;
}
