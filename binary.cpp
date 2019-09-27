#include <iostream>
using namespace std;
struct node
{
        int bin;
        node* next;
        node* previous;
};
class binary
{
                node* head;
                node* tail;
                int count;
        public :
                binary()
                {
                        count=0;
                        head=NULL;
                        tail=NULL;
                }
                void create()
                {
                        
                        int bit;
                        node* current;
                        node* prev;
                        char ch;
                        do{
                                
                                current=new node;
                                char choice;
                                do{
                                cout<<"\nEnter the binary data( '1' or '0')\t";
                                cin>>bit;
                                if(bit==1 || bit ==0)
                                {
                                    current->bin=bit;
                                    current->next=NULL;
                                    if(head==NULL)
                                        {
                                                head=current;
                                                prev=current;
                                                tail=current;
                                                current->previous=NULL;
                                                count++;
                                        }
                                    else
                                        {
                                                prev->next=current;
                                                current->previous=prev;
                                                prev=current;
                                                tail=current;
                                                count++;
                                        }
                                        choice='n';
                                }
                                else
                                        {
                                        cout<<"\nPlease enter binary data";
                                        choice='y';
                                        }
                                }while(choice=='y');
                                cout<<"\nDo you wish to add more bits?(press y)\t";
                                cin>>ch;
                           }while(ch=='y'||ch=='Y');
                }
                void display()
                {
                        node* temp;
                        temp=head;
                        cout<<"\n\nThe Binary digits are\n\t"; 
                        while(temp->next!=NULL)
                        {
                                cout<<temp->bin;
                                temp=temp->next;
                        }
                        cout<<temp->bin;
                        //cout<<"\nThe size of input is :\t"<<count;
                        cout<<"\n";
                }
                void ones(binary& c)
                {
                        node* temp;
                        node* temp1;
                        node* prev1;
                        temp=head;
                        while(temp!=NULL)
                        {
                                if(temp->bin==1)
                                {
                                       temp1=new node;
                                       temp1->bin=0;
                                       temp1->next=NULL;
                                       if(c.head==NULL)
                                       {
                                                c.head=temp1;
                                                prev1=temp1;
                                                c.tail=temp1;
                                                temp1->previous=NULL;
                                       }
                                       else
                                       {
                                                prev1->next=temp1;
                                                temp1->previous=prev1;
                                                prev1=temp1;
                                                c.tail=temp1;
                                       }
                                }       
                                else if(temp->bin==0)
                                {
                                        temp1=new node;
                                        temp1->bin=1;
                                        temp1->next=NULL;
                                        if(c.head==NULL)
                                       {
                                                c.head=temp1;
                                                prev1=temp1;
                                                temp1->previous=NULL;
                                                c.tail=temp1;
                                       }
                                       else
                                       {
                                                prev1->next=temp1;
                                                temp1->previous=prev1;
                                                prev1=temp1;
                                                c.tail=temp1;
                                       }
                                }
                                temp=temp->next;
                        }
                }
                void twos(binary& c)
                {
                        node* temp;
                        temp=tail;
                        node* temp1;
                        node* prev1;
                        while(temp!=NULL)
                        {
                                if(temp->bin==1)
                                {
                                       temp1=new node;
                                       temp1->bin=1;
                                       temp1->previous=NULL;
                                       if(c.tail==NULL)
                                       {
                                                c.tail=temp1;
                                                prev1=temp1;
                                                c.head=temp1;
                                                temp1->next=NULL;
                                       }
                                       else
                                       {
                                                prev1->previous=temp1;
                                                temp1->next=prev1;
                                                prev1=temp1;
                                                c.head=temp1;
                                       }
                                        temp=temp->previous;
                                        break;
                                        
                                }
                               else
                                {
                                       temp1=new node;
                                       temp1->bin=0;
                                       temp1->previous=NULL;
                                       if(c.tail==NULL)
                                       {
                                                c.tail=temp1;
                                                prev1=temp1;
                                                c.head=temp1;
                                                temp1->next=NULL;
                                       }
                                       else
                                       {
                                                prev1->previous=temp1;
                                                temp1->next=prev1;
                                                prev1=temp1;
                                                c.head=temp1;
                                       }
                                        temp=temp->previous;
                                }
                        }
                        while(temp!=NULL)
                        {
                                if(temp->bin==1)
                                {
                                       temp1=new node;
                                       temp1->bin=0;
                                       temp1->previous=NULL;
                                       if(c.tail==NULL)
                                       {
                                                c.tail=temp1;
                                                prev1=temp1;
                                                c.head=temp1;
                                                temp1->next=NULL;
                                       }
                                       else
                                       {
                                                prev1->previous=temp1;
                                                temp1->next=prev1;
                                                prev1=temp1;
                                                c.head=temp1;
                                       }
                                }
                                else
                                {
                                       temp1=new node;
                                       temp1->bin=1;
                                       temp1->previous=NULL;
                                       if(c.tail==NULL)
                                       {
                                                c.tail=temp1;
                                                prev1=temp1;
                                                c.head=temp1;
                                                temp1->next=NULL;
                                       }
                                       else
                                       {
                                                prev1->previous=temp1;
                                                temp1->next=prev1;
                                                prev1=temp1;
                                                c.head=temp1;
                                       }
                                }
                                temp=temp->previous;
                        }
                }
                void addition(binary& c)
                {
                        node* temp;
                        //temp= new node;
                        node* temp1;
                        temp=tail;
                        node* temp2;
                        temp2=c.tail;
                        int carry=0;
                        int sum=0;
                                while(temp!=NULL)
                                {
                                      sum= carry + temp->bin + temp2->bin;
                                      
                                      if(sum==0)
                                      {
                                        //temp= new node;
                                        temp->bin=0;
                                        carry=0;
                                        temp=temp->previous;
                                        //temp1=temp1->next;
                                        temp2=temp2->previous;
                                      }
                                      else if(sum==1)
                                      {
                                        //temp= new node;
                                        temp->bin=1;
                                        carry=0;
                                        temp=temp->previous;
                                        //temp1=temp1->next;
                                        temp2=temp2->previous;
                                      }
                                      else if(sum==2)
                                      {
                                        //temp= new node;
                                        temp->bin=0;
                                        carry=1;
                                        temp=temp->previous;
                                        //temp1=temp1->next;
                                        temp2=temp2->previous;
                                      }
                                      else if(sum==3)
                                      {
                                        //temp= new node;
                                        temp->bin=1;
                                        carry=1;
                                        temp=temp->previous;
                                        //temp1=temp1->next;
                                        temp2=temp2->previous;
                                      } 
                                      else
                                        cout<<"\n\tInvalid\n"; 
                                }
                        
                                temp1=head;
                                cout<<"\nThe addition is \n\t";
                                while(temp1!=NULL)
                                {
                                        cout<<temp1->bin;
                                        temp1=temp1->next;
                                }
                           
                        cout<<"\n";
                }
                void compare(binary& c)
                {
                        if(count!=c.count)
                        {       
                                if(count<c.count)
                                {
                                        int diff=0;
                                        diff=c.count-count;
                                        for(int i=0;i<diff;i++)
                                        {
                                                node* extra;
                                                extra=new node;
                                                //extra=head;
                                                extra->next=head;
                                                extra->previous=NULL;
                                                head->previous=extra;
                                                extra->bin=0;
                                                head=extra;
                                        }
                                }
                                else
                                {
                                        int diff=0;
                                        diff=count-c.count;
                                        for(int i=0;i<diff;i++)
                                        {
                                                node* extra2;
                                                extra2=new node;
                                                extra2->next=c.head;
                                                extra2->previous=NULL;
                                                c.head->previous=extra2;
                                                extra2->bin=0;
                                                c.head=extra2;
                                        }        
                                }
                        }   
                }
                
};
int main()
{
        binary b1,b6,b5,b8;
        b1.create();
        b1.display();
        char ch;
        char choice;
        do
        {
              cout<<"\nEnter 1.ones compliment, 2. twos complment, 3. addition, 4. original digits.\n\t";
                cin>>ch;
                switch(ch)
                {
                        case '1':
                                b1.ones(b6);
                                cout<<"\n\nThe ones compliment is\n\t";
                                b6.display();
                                break;
                        case '2':
                                b1.twos(b5);
                                cout<<"\n\nThe twos compliment is\n\t";
                                b5.display();
                                break;
                        case '3':
                                cout<<"\nEnter the  new binary digits:";
                                b8.create();
                                b8.display();
                                b1.compare(b8);
                                b1.addition(b8);
                                break;
                       case '4':
                                b1.display();
                                break;
                }
                cout<<"\nDo you wish to continue?(Y for yes)\t";
                cin>>choice;
        } while(choice=='Y'||choice=='y');      
        
        return 0;
}
