<h3>Architecture of the Machine: 🛠</h3>
The machine has two main components: a built-in cash register and several dispensers to hold and release the products. 
Define class <b>cashRegister</b> with the following descriptions : 
<li>
  Private Members: cashOnHand of type integer
</li>
<li>
    Public Members: A default constructor cashRegister() sets the cash in the register to 500. A constructor cashRegister(int) sets the     cash in the register to a specific amount. A function getCurrentBalance() which returns value of cashOnHand . A function                 acceptAmount(int) to receive the amount deposited by the customer and update the amount in the register.
</li>
<br/>
Define class <b>dispenserType</b> with the following descriptions :
<br/>
<li>
  Private Members: numberOfItems of type integer cost of type integer
</li>
<ul>Public Members: A default constructor dispenserType () sets the cost and number of items in the dispenser to 50 each. A constructor      dispenserType (int,int) sets the cost and number of items in the dispenser to the values specified by the user. A function              getNoOfItems() to return the value of number of Items. A function getCost() to return the value of cost. A function makeSale() 
     to reduce the number of items by 1. When the program executes, it must do the following: 
     <li>
       1. Show the different products sold by the candy machine
     </li>
     <li>2. Show how to select a particular product. once the user has made the appropriate selection, the candy machine must act                accordingly.If the user has opted to buy a product and that product is available,the candy machine should show the cost of the
         product and ask the user to deposit the money. If the amount deposited is at least the cost of the item, the candy machine              should sell the item and display an appropriate message.
     </li>
 </ul>
<h4>Divide this program into three functions:</h4> 
<b>showSelection(), sellProduct(), and main()</b> 
The function sellProduct must have access to the dispenser holding the product (to decrement the number of items in the dispenser by 1 and to show the cost of the item) as well as the cash register (to update the cash). 
<br/>Therefore, this function has two parameters: one corresponding to the dispenser and the other corresponding to the cash register.
