#include <iostream>
#include <stdint.h>

struct node{
  
  //Debug pointes
  node* next;
  node* prev;

  node* np; //use this pointer 
  int elem;

};

void dump_pointerrs(node* a, node* b, node* c){
//  std::cout << ""
}

class xorlist{

public:
  
  int size;
  
  void insert(int val){
    //initial values
    node* current = head;
    node* prev = 0; //null == 0
    node* next = head->np; //np ^ 0 == np
    
    while(current != tail){
      std::cout << "current: " << current << std::endl;    
      std::cout << "prev: " << prev << std::endl;    
      std::cout << "next: " << next << std::endl;
      std::cout << "tail: " << tail << std::endl;
      node* old = current;
      current = next;
      if(current == tail)
        break;

      uintptr_t u_next = (uintptr_t)old->np ^ (uintptr_t)current;
      uintptr_t u_np = (uintptr_t)old->np ^ (uintptr_t)next;
      next = (node*)next;
      prev = old;
    }
  
    node* new_node = new node();
    new_node->np = prev;
    new_node->elem = val;
    tail=new_node;


  }

  void dump(){
    std::cout << "]|-- ";
    node* current = head;
    while(current != tail){
      std::cout << current -> elem << " -> ";
      node* old = current;
      current = (node*)( (uintptr_t)old ^ (uintptr_t)current);
    }
  }

 

private:
  
  node* head;
  node* tail;

};


//template<typename T>

int main(){
  //Test 
  xorlist list;
  for(int i=0; i<4; i++){
    list.insert(i);
  }

  std::cout << "done inserting" << std::endl;
  list.dump();


}
