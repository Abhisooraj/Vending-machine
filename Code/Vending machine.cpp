/**
  * @Abhishek does this
  */

#include<iostream>
using namespace std;
class CashRegister
{
  int cashOnHand;
    public:
	CashRegister()
    {
	cashOnHand = 1000;
    }

   CashRegister(int cashIn)
  {
	cashOnHand = cashIn;
  }

  int getCurrentBalance()
  {
	return cashOnHand;
 }
   void acceptAmount(int amountIn)
  {

	cashOnHand = cashOnHand + amountIn;
  }
};
class dispenserType
{
   private:
	int numberOfItems;
	int cost;
   public:
	dispenserType();
	dispenserType(int setNoOfItems, int setCost);
	int getNoOfItems();
	int getCost();
	void makeSale();
 };
dispenserType::dispenserType()
{
	numberOfItems = 50;
	cost = 50;
}
dispenserType::dispenserType(int setNoOfItems, int setCost)
{
	numberOfItems = setNoOfItems;
	cost = setCost;
}
int dispenserType::getNoOfItems()
{
	return numberOfItems;
}
int dispenserType::getCost()
{
	return cost;
}
void dispenserType::makeSale()
{
	numberOfItems--;
}
void showSelection()
{
	cout << "*** Welcome to Candy Shop ***" << endl;
	cout << "To select an item, enter " << endl;
	cout << "1 for Candy" << endl;
	cout << "2 for Chips" << endl;
	cout << "3 for Gum" << endl;
	cout << "4 for Cookies" << endl;
	cout << "5 to exit" << endl;
}
void sellProduct(dispenserType& product, CashRegister& pCounter)
{
	int amount;
	int amount2;
	if (product.getNoOfItems() > 0)
	{
	 cout<< "Please deposit " << product.getCost() << " RS" << endl;
	 cin>>amount;
	 if(amount<product.getCost())
	 {
	  cout<< "Please deposit another " << product.getCost()- amount << " RS" << endl;
	  cin>>amount2;
	  amount=amount+amount2;
	  }
	 if (amount==product.getCost())
	 {
	  pCounter.acceptAmount(amount);
	  product.makeSale();
	  cout<<"Collect your item and "<<"enjoy." << endl;
	  }
	  else if(amount>product.getCost())
	  {
	  pCounter.acceptAmount(amount);
	  product.makeSale();
	  int retamount=amount-product.getCost();
	  cout<<"Collect your item and "<<"enjoy." << endl;
	  cout<<"Take your return amount ="<<retamount<<endl;
	  }
	  else
	    cout << "The amount is not enough. " << "Collect what you deposited." << endl;
	    cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl << endl;
	}
	else
	    cout << "Sorry, this item is sold out." << endl;
}
  int main()
   {
	CashRegister counter;
	dispenserType candy(100, 50);
	dispenserType chips(100, 65);
	dispenserType gum(75, 45);
	dispenserType cookies(50, 85);
	int choice;
	showSelection();
	cin >> choice;
	while (choice != 5)
	{
		switch (choice)
		{
			case 1:
				sellProduct(candy, counter);
				break;
			case 2:
				sellProduct(chips, counter);
				break;
			case 3:
				sellProduct(gum, counter);
				break;
			case 4:
				sellProduct(cookies, counter);
				break;
			default:
				cout << "Invalid selection." << endl;
		}
		showSelection();
		cin >> choice;
	}
	return 0;
}
