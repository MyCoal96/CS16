#include <iostream>
using namespace std;
struct Market
{
  int data;
  string type;
  Market *link;
};
typedef Market* MarketPtr;
void deleteNode(struct Market*& head, int value)
{
  MarketPtr discard = head, before = head;
  before = discard;
  while(discard->link != NULL || discard->data != value)
  {
    before = discard;
    if(discard->data == value && discard == head)
    {
      discard->link = NULL;
      delete discard;
    }
    else if(discard->link == NULL && discard->data == value)
    {
      before->link = NULL;
      delete discard;
    }
    else if(discard->data == value)
    {
      before->link = discard->link;
      delete discard;
    }
    discard = discard->link;
  }
}
int main()
{
  MarketPtr head, aisle_1;
  head = new Market;
  aisle_1 = new Market;
  head -> type = "apples";
  head -> data = 5;
  head -> link = aisle_1;
  aisle_1 -> type = "bananas";
  aisle_1 -> data = 0;
  aisle_1 -> link = NULL;
  deleteNode(head,5);
}
