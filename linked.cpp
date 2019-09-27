#include <iostream>
#include <string.h>
using namespace std;
struct node
{
        int prn;
        char name[30];
        node* next;
};
class pinnacle
{
                node* head;
                node* tail;
        public :
                pinnacle()
                {
                        head=NULL;
                        tail=NULL;
                }
                void create()
                {
                        char choice='\0';
                        char nav[30];
                        int id;
                        node* current;
                        node* previous;
                        do
                        {
                                if(head==NULL)
                                        cout<<"\nEnter the information for the president of the club";
                                else
                                        cout<<"\nEnter information for member";
                                current=new node;
                                cout<<"\nEnter the Name of the student\t";
                                cin>>nav;
                                cout<<"\nEnter the PRN of the student\t";
                                cin>>id;
                                strcpy(current->name,nav);
                                current->prn=id;
                                current->next=NULL;
                                if(head==NULL)
                                {
                                        head=current;
                                        previous=current;
                                        tail=current;
                                        
                                }
                                else
                                {
                                        previous->next=current;
                                        previous=current;
                                        tail=current;
                                        
                                }
                                cout<<"\nTo add more members press 'y' or 'Y'\t";
                                cin>>choice;
                         }
                         while(choice=='y'||choice=='Y');
                }
                void display()
                {
                        node* temp;
                        temp=head;
                        while(temp!=NULL)
                        {
                                if(temp==head)
                                {
                                        cout<<"\nThe Name of President is\t";
                                        cout<<temp->name;
                                        cout<<"\nThe PRN of President is\t";
                                        cout<<temp->prn;
                                        temp=temp->next;
                                        
                                }
                                else if(temp==tail)
                                {
                                        cout<<"\nThe Name of Secratary is\t";
                                        cout<<temp->name;
                                        cout<<"\nThe PRN of Secratary is\t";
                                        cout<<temp->prn;
                                        break;
                                }       
                                else
                                {
                                        cout<<"\nThe Name of Member is\t";
                                        cout<<temp->name;
                                        cout<<"\nThe PRN of Member is\t";
                                        cout<<temp->prn;
                                        temp=temp->next;
                                        
                                }
                          }
                  }
                  void insert()
                  {
                       char ch;
                       cout<<"\n\tEnter 1.Add Member\n\t2.Add President\n\t3.Add Secratary\n\n";
                       cin>>ch;
                       switch(ch) 
                       {
                                case '1':
                                        node* temp3,*f;
                                        char n[30];
                                        int r;
                                        cout<<"\nEnter the name for new Member\t";
                                        cin>>n;  
                                        cout<<"\nEnter the PRN for new Member\t";
                                        cin>>r;
                                        temp3=new node;
                                        strcpy(temp3->name,n);
                                        temp3->prn=r;
                                        f=head;
                                        while(f->next!=tail)
                                        {       f=f->next;      }
                                        f->next=temp3;
                                        temp3->next=tail;
                                        break;
                                case '2':
                                        node* temp2;
                                        char nav[30];
                                        int id;
                                        cout<<"\nEnter the name for new President\t";
                                        cin>>nav;  
                                        cout<<"\nEnter the PRN for new President\t";
                                        cin>>id;
                                        temp2=new node;
                                        strcpy(temp2->name,nav);
                                        temp2->prn=id;
                                        temp2->next=head;
                                        head=temp2;  
                                        break;
                               case '3':
                                        node* temp1,*last;
                                        char na[30];
                                        int i;
                                        cout<<"\nEnter the name for new Secratary\t";
                                        cin>>na;  
                                        cout<<"\nEnter the PRN for new Secratary\t";
                                        cin>>i;
                                        temp1=new node;
                                        strcpy(temp1->name,na);
                                        temp1->prn=i;
                                        last=head;
                                        while(last->next!=NULL)
                                        { last=last->next; }
                                        temp1->next=NULL;
                                        last->next=temp1;
                                        tail=temp1;
                                        break;
                  }
               }
               void demolish()
               {
                        int key;
                        cout<<"\nEnter the PRN number of the student to be deleted\t";
                        cin>>key;
                        node* temp;
                        node* temp1;
                        temp1=head;
                        temp=head;
                        while(temp->prn!=key)
                        {
                                temp=temp->next;
                        }
                        while(temp1->next!=temp)
                        {
                                temp1=temp1->next;
                        }
                        temp1->next=temp->next;
                        delete(temp);
               }
               void delete_president()
               {
                        cout<<"\n\tWould you like to add new president or appoint new from members\n\t1 or 2";
                        char ch;
                        cin>>ch;
                        switch (ch)
                        {
                                case '1':
                                        node* temp;
                                        temp=head;
                                        node* temp2;
                                        char nav[30];
                                        int id;
                                        cout<<"\nEnter the name for new President\t";
                                        cin>>nav;  
                                        cout<<"\nEnter the PRN for new President\t";
                                        cin>>id;
                                        temp2=new node;
                                        strcpy(temp2->name,nav);
                                        temp2->prn=id;
                                        temp2->next=head->next;
                                        head=temp2; 
                                        delete(temp);
                                       
                                        break;
                                  case '2':
                                        cout<<"\nEnter the prn of student to be the new president";
                                        node* temp3;
                                        temp3=head;
                                        head=head->next;
                                        delete(temp3);
                                        break;
                        }
               }
               void delete_sec()
               {
                        node* temp;
                        node* temp2;
                        temp=head;
                        temp2=head;
                        while(temp->next!=NULL)
                        {
                                temp=temp->next;
                        }
                        while(temp2->next!=temp)
                        {
                                temp2=temp2->next;
                        }
                        temp2->next=NULL;
                        delete(temp);
                        tail=temp2;
               }
               void concat(pinnacle& c)
               {
                        node* temp;
                        temp=c.head;
                        tail->next=temp;
                        c.head=NULL;
                        tail=c.tail;
               }
};
int main()
{
        pinnacle p1,p2;
        p1.create();
        p1.display();
        cout<<"\nAdding members";
        p1.insert();
        p1.display();
        cout<<"\nDeleting members";
        do{
                int sw;
                switch(sw)
                {
                        p1.demolish();
                        p1.delete_president();
                        p1.delete_sec();
                        p1.display();
                        p2.create();
                        p1.concat(p2);
                }
        }
}
