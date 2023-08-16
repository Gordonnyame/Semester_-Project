#include <iostream>

using namespace std;

int main() {
	int choice;
	int quantity=0;
	
	while(true){
		cout<<"Inventory System"<<endl;
		cout<<"1.Add item"<<endl;
		cout<<"2.Remove item"<<endl;
		cout<<"3.View inventory"<<endl;
		cout<<"0.Exit"<<endl;
		cout<<"Enter your choice:";
		cin>>choice;
		
		switch(choice){
			case1:
			{
				int itemToAdd;
				cout<<"item to add:";
				cin>>itemToAdd;
				quantity+=itemToAdd;
				cout<<"Added"<<itemToAdd<<"items."<<endl;
				break;
			}
			case 2:
			{
				int itemToRemove;
				cout<<"Item to remove:";
				cin>>itemToRemove;
				if(itemToRemove<=quantity){
					quantity-=itemToRemove;
					cout<<"Remove"<<itemToRemove<<"items."<<endl;
				}else{
				
				cout<<"Not enough items in inventory."<<endl;
			}
			break;
				
			}
			
			case 3:
			cout<<"Current inventory:"<<quantity<<endl;
			break;
			
			case 0:
				cout<<"Exiting..."<<endl;
				return 0;
				
				default:
					cout<<"Invaild choice. Please try again."<<endl;
					break;
			
		}
	}
	return 0;
}
