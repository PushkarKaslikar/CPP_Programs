#include<iostream>
using namespace std;

#define MAX 100 


class Stack{
    int arr[MAX];
    int top;
  
  public:
  Stack () : top (-1) {} //constructor to initialize the top

void push(int element)
{
      
         if(top >= (MAX-1))
        {
            cout << "Push operation is not possible\n";
        }
        else {
         arr[++top] = element;
        }
}

void pop()
{
    if(arr[top]==-1)
    {
        cout << "We cann't do pop operation\n";
    }
    else
    {
    arr[top--];
    }
}

  void display()
  {
      cout << "Elements in Stacks are : \n";
      for(int i = top; i >= 0; i--)
      {
          cout << arr[i] << endl;
      }
  }
};


int main()
{
   
    Stack s;
     
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.display();
    
    s.pop();
    s.pop();
    s.display();
}

