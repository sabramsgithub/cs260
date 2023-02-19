#include <bits/stdc++.h>
using namespace std;

// node with data, points to next node
class student {
  public:
    int student_id;
    student* next;
};

// utility function to print all nodes. 
// while next is not NULL print id?
void printStudents(student* n){
  auto start = chrono::steady_clock::now();
  while (n != NULL){
    cout << n->student_id << " ";
    n = n->next;
  }
  cout << "\n";
  auto end = chrono::steady_clock::now();
  auto diff = end - start;
  cout << "printStudents Runtime: " << chrono::duration <double, milli> (diff).count() << " ms" << endl;
}

// has an enqueue method that will appropriately add a value to the back of the queue as an appropriate element
void backStudent(student** head_ref, int input_id){
  // create new "node" with attached id
  student* new_student = new student();
  new_student->student_id = input_id;
  new_student->next = NULL;
  // store last "node" so we can change what it points to for the next node
  student *prev = *head_ref;

  // safety for if this is going to be added to an empty list for some reason. would add this to the front of the linked list
  if (*head_ref == NULL){
    *head_ref = new_student;
    return;
  }

  //scan list for last node and add new student to the end
  while (prev->next != NULL){
    prev = prev->next;
  }
  prev->next = new_student;


  return;
}

// has a dequeue method that will appropriately remove an element from the front of the queue and return its value
void dequeue(student** head){
// print deleted value then point to next
  cout << "Deleted Student with the ID: " << (*head)->student_id << "\n";
  *head = (*head) -> next;
}

void peek(student *head){
  cout << "The Student ID at the front of the queue is: " << head->student_id << "\n";
}

//uses a linked-list to store values in the queue
// create three example ones? i dont want to implement direct user input lol
int main(){
  student* head = NULL;
  student* second = NULL;
  student* third = NULL;

  head = new student();
  second = new student();
  third = new student();

  head->student_id = 101;
  head->next = second;

  second->student_id = 102;
  second->next = third;
  
  third->student_id = 104;
  third->next = NULL;

  printStudents(head);

  backStudent(&head, 109);

  printStudents(head);

  dequeue(&head);

  printStudents(head);

  peek(head);

  return 0;
}
