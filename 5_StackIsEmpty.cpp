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
  cout<<"\nDisplaying :\n";
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


void isemp(struct stack st)
{
   if(st.top==-1)
           cout<<"\nStack is empty!!";
    
    else
      cout<<"\nStack is not empty!!";
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

    isemp(st);
    return 0;
}