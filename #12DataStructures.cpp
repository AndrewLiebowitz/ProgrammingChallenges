/*  https://ocw.mit.edu/courses/civil-and-environmental-engineering/1-00-introduction-to-computers-and-engineering-problem-solving-spring-2012/lecture-notes/MIT1_00S12_Lec_35.pdf

http://www.math.uaa.alaska.edu/~afkjm/csce211/handouts/SeparateCompilation.pdf
*/

//Basic librares
#include <iostream>
#include <cstdlib>
#include <vector>

//Attempting some level of modular programming
#include "node.h"
#include "stack.h"
#include "queue.h"
#include "linkedlist.h"

//stack driver helper function
void stack(int values){
  
  std::cout << "Creating myStack\n\n";
  
  //Create myStack
  Stack myStack;
  
  //Pushing random integers
  for(int i = 0; i < values; i++){
    int temp = (rand() % 100);
    std::cout << "Pushing: " << temp << "\n";
    myStack.push(temp);
  }

  //Displaying contents of Stack
  std::cout << "\nDisplaying Stack\n\nTop\n";
  myStack.display();
  std::cout << "Bottom\n\n";

  //Popping Elements
  for(int i = 0; i < values; i++){
    std::cout << "Popping: " << myStack.returnTop() << "\n";
    myStack.pop();
  }
  
  //Displaying contents of myStack
  myStack.display();  
}

//queue driver helper function
void queue(int values){

  std::cout << "Creating myQueue\n\n";

  //Create myQueue
  Queue myQueue;

  //Pushing random integers
  for(int i = 0; i < values; i++){
    int temp = (rand() % 100);
    std::cout << "Pushing: " << temp << "\n";
    myQueue.push(temp);
  }

  //Displaying contents of myQueue
  std::cout << "\nDisplaying Queue\n\nFront\n";
  myQueue.display();
  std::cout << "Back\n\n";

  //Popping Elements
  for(int i = 0; i < values; i++){
  std::cout << "Popping: " << myQueue.returnBack() << "\n";
    myQueue.pop();
  }
}

//linkedlist driver helper function
void linkedlisthelper(int values){
  std::cout << "Creating myLinkedList\n";
  
  //Create myLinkedList
  LinkedList myLinkedList;
  
  //Insert front random integers between 0 and 99 inclusive
  for(int i = 0; i < values; i++){
    int temp = (rand() % 100);
    //std::cout << "Inserting Front " << temp << "\n";
    myLinkedList.insertFront(temp);
  }

  //Insert back random integers between 0 and 99 inclusive
  for(int i = 0; i < values; i++){
    int temp = (rand() % 100);
    //std::cout << "Inserting Back " << temp << "\n";
    myLinkedList.insertBack(temp);
  }

  //Display count
  std::cout << "\nNumber of items: " << myLinkedList.countNodes() << "\n";
  //myLinkedList.display();
 
  //Search returns values in a vector
  std::vector<int> myVector = myLinkedList.searchPositions(75);
  
  std::cout << "Does 75 occur at least once? " << myLinkedList.searchContains(75) << "\n";

  std::cout << "How many times does 75 occur? " << myLinkedList.searchNumInstances(75) << "\n\n";

  //Text to show above nicely
  std::cout << 75 << " occurs at positions: \n";
  for(int i = 0; i < myVector.size(); i++){
    std::cout << myVector[i];

    if(i < myVector.size()-1){
      std::cout << "\n";
    }

  }
}

int main() {
  std::cout << "Hello World!\n\n";
  //Initialize random seed with current time
  srand(time(0));
  
  //Number of random values to fill data structures
  int values = 1000;

  //Run stack routine
  //stack(values);
  
  //Run queue routine
  //queue(values);

  //Run linked list routine
  linkedlisthelper(values);
  
  std::cout << "\nGoodbye World!\n";
}
