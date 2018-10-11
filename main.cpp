//Author: Marco Garcia
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
  vector<string> list;
  int numItems = 0;
  char input;
  string NewItem; 

  do
  {
    cout<<"\n==GROCERY LIST MANAGER==";
    cout<<"\nEnter your choice: ";
    cout<<"\n (A)dd an item";
    if(list.size()>0)
    {
      cout<<"\n (D)elete last item";
    }
    cout<<"\n (Q)uit";
    cout<<"\nYour choice (A/Q): ";
    cin>>input;
    if(input =='a'||input =='A')
    {      
      cout<<"What is the item?\n";
      cin>>NewItem;
      list.push_back(NewItem);
    }
    if((input == 'd' || input == 'D') && list.size()>0)
    {
      cout<<list[list.size()-1]<<" was deleted from the list.\n";
      list.pop_back();
    }
  } while(input!='q' && input!='Q');

  if(list.size()==0)
  {
    cout<<"No items to buy!\n";
  } 
  else
  {
    cout<<"==ITEMS TO BUY==\n";
    for(int index=0;index<list.size();index++)
    {
      cout<<index+1<<" "<<list[index]<<endl;
    }
  }


  return 0;
}
