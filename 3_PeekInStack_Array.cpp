#include<iostream>
using namespace std;

struct stack
{
    int top;
    int *s;
    int size;
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


int peek(struct stack *st,int pos)
{
  int index;
  if(st->top-pos+1<0)
  {
    cout<<"Invalid position..";
  }
  else
  {
    index=st->s[st->top-pos+1];
  }
  return index;  
}

int main()
{
  struct stack st;
    create(&st);

    push(&st,10);
    push(&st,50);
    push(&st,90);
    push(&st,60);
    
    display(st);

    cout<<"\nUsing peek function,finding the value of any specific index : "<<peek(&st,2);

    return 0;
}