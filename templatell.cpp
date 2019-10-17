// Program for linked list reverse using templates concept in c++
  #include<iostream>
  using namespace std;
  template <class T>  // class template
    class node
     {
           public:
               T data;
               node<T> * next;
     };
  template<class T>
    class A
     {
         public:
              node <T> *ptr=0;
              node <T> *hptr=0;
              void create()
              {
                   node<T> *temp=0;
                   temp=new node<T>;
                   cout<<"enter data\n";
                   cin>>temp->data;
                    if(ptr==NULL)
                       {
                          temp->next=NULL;
                           ptr=temp;
                       }
                     else
                       {
                          temp->next=ptr;
                          ptr=temp;
                        }  
                       hptr=ptr;
               }
              void revlinks()
               {
                  node <T> *prev =0;
                  node <T> *N =0;
                  node <T> *cur=hptr;
                     while(cur!=NULL){ //while loop begins
                           N = cur->next;
                           cur->next = prev;
                           prev = cur;
                           cur = N;
                        } //while loop ends
                    ptr = prev;
               }
             void display()
             {
                  while(ptr!=NULL)
                    {
                       cout<<ptr->data<<" ";
                       ptr=ptr->next;
                    }
             }
     };   

    int main()   //in C++ main() must returns int,because it follows sticttype checking
    {
          char ch;
          //A <int>ob;
           A<char>ob1;
          do
          {
               ob1.create();
              //ob.create();
               cout<<"do u want to add node y/n\n";
               cin>>ch;
    
          }while(ch=='y'||ch=='Y');
       ob1.display();
       ob1.revlinks();
       cout<<"\n";
       ob1.display();
        //ob.display();
     return 0;
   }
