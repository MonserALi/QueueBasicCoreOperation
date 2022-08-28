#include<bits/stdc++.h>
#include "MYQUEUE.h"

using namespace std;


int main()
{
    Queue <int>q;

    cout<<"Choice 1: Enqueue/Push Into Queue "<<endl
        <<"Choice 2: Dequeue/Pop From Queue "<<endl
        <<"Choice 3: Peak Front From The Queue "<<endl
        <<"Choice 4: Peak Back From The Queue "<<endl
        <<"Choice 5: Check The Queue Is Empty Or Not "<<endl
        <<"Choice 0: Exit"<<endl;


    int choice = 1,chk,val;

    while(choice!=0)
    {
        cout<<"\nEnter Next Choice: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"Enter the value you want to Push: ";
            cin>>val;
            q.enqueue(val);
            break;
        case 2:

            if(!q.Empty())
            {
                val = q.dequeue();
                cout<<"Dequeued Value is "<<val<<endl;
            }
            else
            {
                cout<<"The Queue Is Empty..!"<<endl;
            }
            break;
        case 3:
            if(!q.Empty())
            {
                val = q.Front();
                cout<<"Front Value is "<<val<<endl;
            }
            else
            {
                cout<<"The Queue Is Empty..!"<<endl;
            }
            break;
        case 4:
            if(!q.Empty())
            {
                val = q.Back();
                cout<<"Back Value is "<<val<<endl;
            }
            else
            {
                cout<<"The Queue Is Empty..!"<<endl;
            }
            break;
        case 5:
            if(q.Empty())
            {
                cout<<"The Queue Is Empty!"<<endl;
            }
            else
            {
                cout<<"The Queue Is Not Empty!"<<endl;
            }

        }
    }

}
