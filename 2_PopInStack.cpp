#include<iostream>
#include<stdlib.h>

using namespace std;

struct stack
{
    int size;
    int top;
    int *s;
};


void create(struct stack *st)
{
  cout<<"Enter size : ";
  cin>>st->size;

  st->top=-1;

  st->s=(int *)malloc(st->size*sizeof(int));
}


void display(struct stack st)
{
  int i;
  cout<<"Displaying :\n";
  for(i=st.top;i>=0;i--)
  {
    cout<<st.s[i]<<" ";
  }
}

void push(struct stack *st,int x)
{
  if(st->top==st->size-1)
  {
    cout<<"Stack Overflow..\n";
  }
  else
    {
        st->top++;
        st->s[st->top]=x;
    }
}


//time taken-->0(1)---->constant

int pop(struct stack *st)
{
    int x=-1;
  if(st->top==-1)
  {
      cout<<"Stack underflow..";
  }
  else
   {
     x=st->s[st->top];
     st->top--;
   }
   return x;
}


int main()
{
    struct stack st;
    create(&st);

    push(&st,10);
    push(&st,50);
    push(&st,90);
    push(&st,60);   
   
    cout<<"Before pop operation,";
    display(st);
    
    cout<<"\n5The deleted value is : ";
    cout<<pop(&st)<<endl;
    cout<<"After pop operation,";
    display(st);

    return 0;
}