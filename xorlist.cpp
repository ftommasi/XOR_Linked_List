#include <iostream>

class xorlist{

public:
  
  int size;
  

private:
  
  node* head;
  node* tail;

};


void xorlist::insert(int val){
  //initial values
  node* current = head;
  node* prev = 0; //null == 0
  node* next = head->np; //np ^ 0 == np

  while(current != tail){
    
  }
  
  node* new_node = new node();
  new_node->np = prev;
  new_node->elem = val;
  tail=new_node;


}

void xorlist::dump(){
  cout << "]|-- ";
  node* current = head;
  while(current != tail){
    cout << current -> elem << " -> ";
  }
}

//template<typename T>
struct node{
  
  //Debug pointes
  node* next;
  node* prev;

  node* np; //use this pointer 
  int elem;

};



int main(){
 
  //Test  


}
