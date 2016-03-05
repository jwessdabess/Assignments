//Lab05 
//Joshua Wessling

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//To practice writing programs using loops.
/*Write a program that will allow the user to buy notebook(s), pen(s), pencil(s) and / or
a calculator from your store and display the total due.*/

int main()
{
	// 2. The prices for the items are as follows : 
	// Notebooks are $1.50 each(2 points)
	// Pens are $.30 each, unless the user enters the coupon code “pen123.”(2 points)
	// If the user enters the code, pens are $.25 each(2 points)
	// Pencils are $.20 each if the user buys less than 5.    (2 points)
	// Pencils are $.15 each if the user buys 5 or greater, but less than 10.    (2 points)
	// Pencils are $.10 each if the user buys 10 or greater.    (2 points)
	
	const double NOTEBOOK_PRICE = 1.50;
	const double PEN_PRICE = 0.30;
	const double PEN_DISCOUNT_PRICE = 0.25;
	const double PENCIL_PRICE_1 = 0.20;
	const double PENCIL_PRICE_2 = 0.15;
	const double PENCIL_PRICE_3 = 0.10;
	
	// 3. A calculator is
	//	a.$10 for type A or a, (2 points)
	// b.$15 for type B or b, and (2 points)
	//	c.$20 for type C or c.    (2 points)
	//	d.If the user picks another type, (2 points)display an error message 
	//	and assign a subtotal of 0.

	const double CALC_A = 10.00;
	const double CALC_B = 15.00;
	const double CALC_C = 20.00;

	string typeChoice;
	string couponEntry;
	int notebookNumber = 0;
	int pencilNumber = 0;
	int penNumber = 0;
	int calcChoice = 0;
	string calcType;
	double totalPencilBalance = 0;
	double totalNotebookBalance = 0;
	double totalPenBalance = 0;
	double totalCalcBalance = 0;


	/*4. This process of allowing the user to select an item and your program displaying the subtotal 
	should continue until the user enters exit when prompted for the item he / she wants to purchase.*/
	do
	{
		// 1. User Input(5 points)
		//	a.Your program should first ask the user what item he / she wants to purchase. 
		//  b.If the user indicates a notebook, pen, or pencil, ask the user how many of the item he / she wants to buy. Make sure that the input is a positive number before proceeding.

		cout << "This store sells Notebooks, Pencils, Pens and Calculators.\n";
		cout << "Type: Notebook, Pencil, Pen, Calculator or Exit: \n";
		cin >> typeChoice;


		/*6. You can assume that the user will type in his / her input choice using one of the following : (3 points)
			a.all lower - case letters(example:  pencil) 
			b.all upper - case letters(example:  PENCIL) 
			c.Mixed case with only the first letter capitalized(example:  Pencil)*/
			if (typeChoice == "Notebook" || typeChoice == "NOTEBOOK" || typeChoice == "notebook")
			{
				cout << "How many Notebooks? (zero to start over)\n";
				cin >> notebookNumber;
				
				//  1b.If the user indicates a notebook, pen, or pencil, ask the user how many of the item he / she wants to buy. Make sure that the input is a positive number before proceeding.
				if (notebookNumber < 0)
				{
					cout << "Please enter number above 0.\n\n";
				}
				else if(notebookNumber > 0)
				{
					cout << "The subtotal for the Notebooks is $" << setprecision(2) << fixed << (NOTEBOOK_PRICE * notebookNumber) << endl << endl;
					
					/*5. only use the subtotal calculated for the last selection(and quantity) of this item when calculating
					the total amount due.*/
					totalNotebookBalance = (NOTEBOOK_PRICE * notebookNumber);
				}
				else
				{
					cout << "Enter a valid number PLEASE.";
				}
			}
			
			/*6. You can assume that the user will type in his / her input choice using one of the following : (3 points)
			a.all lower - case letters(example:  pencil)
			b.all upper - case letters(example:  PENCIL)
			c.Mixed case with only the first letter capitalized(example:  Pencil)*/
			else if (typeChoice == "Pencil" || typeChoice == "PENCIL" || typeChoice == "pencil")
			{
				cout << "How many Pencils? (zero to start over)\n";
				cin >> pencilNumber;

				if (pencilNumber > 0 && pencilNumber < 5)
				{
					cout << "The subtotal for the Pencils is $" << setprecision(2) << fixed << (PENCIL_PRICE_1 * pencilNumber) << endl << endl;
					
					/*5. only use the subtotal calculated for the last selection(and quantity) of this item when calculating
					the total amount due.*/
					totalPencilBalance = (PENCIL_PRICE_1 * pencilNumber);
				}
				else if (pencilNumber > 5 && pencilNumber < 10)
				{ 
					cout << "The subtotal for the Pencils is $" << setprecision(2) << fixed << (PENCIL_PRICE_2 * pencilNumber) << endl << endl;
					
					/*5. only use the subtotal calculated for the last selection(and quantity) of this item when calculating
					the total amount due.*/
					totalPencilBalance = (PENCIL_PRICE_2 * pencilNumber);
				}
				//  1b.If the user indicates a notebook, pen, or pencil, ask the user how many of the item he / she wants to buy. Make sure that the input is a positive number before proceeding.
				else if (pencilNumber <= 0)
				{
					cout << "The number of pencils must be greater than 0.\n\n";
				}
				else
				{
					cout << "The subtotal for the Pencils is $" << setprecision(2) << fixed << (PENCIL_PRICE_3 * pencilNumber) << endl << endl;
					
					/*5. only use the subtotal calculated for the last selection(and quantity) of this item when calculating
					the total amount due.*/
					totalPencilBalance = (PENCIL_PRICE_3 * pencilNumber);
				}
			}
			
			/*6. You can assume that the user will type in his / her input choice using one of the following : (3 points)
			a.all lower - case letters(example:  pencil)
			b.all upper - case letters(example:  PENCIL)
			c.Mixed case with only the first letter capitalized(example:  Pencil)*/
			else if (typeChoice == "Pen" || typeChoice == "PEN" || typeChoice == "pen")
			{
				cout << "How many Pens? (zero to start over)\n";
				cin >> penNumber;
				
				// 1b.If the user indicates a notebook, pen, or pencil, ask the user how many of the item he / she wants to buy. Make sure that the input is a positive number before proceeding.
				if (penNumber < 0)
				{
					cout << "Please enter number above 0.\n\n";
				}
				else
				{
					cout << "Please enter coupon code, if available: ";
					cin >> couponEntry;

					if (couponEntry == "pen123")
					{
						cout << "The subtotal for the Pens is $" << setprecision(2) << fixed << (PEN_DISCOUNT_PRICE * penNumber) << endl << endl;
						
						/*5. only use the subtotal calculated for the last selection(and quantity) of this item when calculating
						the total amount due.*/
						totalPenBalance = (PEN_DISCOUNT_PRICE * penNumber);
					}
					else
					{
						cout << "The subtotal for the Pens is $" << setprecision(2) << fixed << (PEN_PRICE * penNumber) << endl << endl;
						
						/*5. only use the subtotal calculated for the last selection(and quantity) of this item when calculating
						the total amount due.*/
						totalPenBalance = (PEN_PRICE * penNumber);
					}
				}

			}
			
			/*6. You can assume that the user will type in his / her input choice using one of the following : (3 points)
			a.all lower - case letters(example:  pencil)
			b.all upper - case letters(example:  PENCIL)
			c.Mixed case with only the first letter capitalized(example:  Pencil)*/
			else if (typeChoice == "Calculator" || typeChoice == "CALCULATOR" || typeChoice == "calculator")
			{
				//  1c. If the user indicates a calculator, you can assume he / she wants to buy just one.Your program should ask which type of calculator they want to buy, instead of how many.
				cout << "What type of calculator would you like to buy (A, B, or C)? ";
				cin >> calcType;

				if (calcType == "A" || calcType == "a")
				{
					cout << "The subtotal for the Calculator is $" << setprecision(2) << fixed << CALC_A << endl << endl;
					
					/*5. only use the subtotal calculated for the last selection(and quantity) of this item when calculating
					the total amount due.*/
					totalCalcBalance = CALC_A;
				}
				else if (calcType == "B" || calcType == "b")
				{
					cout << "The subtotal for the Calculator is $" << setprecision(2) << fixed << CALC_B << endl << endl;
					
					/*5. only use the subtotal calculated for the last selection(and quantity) of this item when calculating
					the total amount due.*/
					totalCalcBalance = CALC_B;
				}
				else if (calcType == "C" || calcType == "c")
				{
					cout << "The subtotal for the Calculator is $" << setprecision(2) << fixed << CALC_C << endl << endl;

					/*5. only use the subtotal calculated for the last selection(and quantity) of this item when calculating
						the total amount due.*/
					totalCalcBalance = CALC_C;
				}
				else
				{
					cout << "Error! The subtotal for the calculator is: $0.00 \n" << endl;
				}

			}
			// If the user indicates an item that your store does not sell, an error message
			//	should display telling the user that you don’t sell that item.
			else
			{
				if (typeChoice != "Exit" && typeChoice != "exit")
				{
					cout << "We do NOT sell that item!\n\n";
				}
			}
		
	} while (typeChoice != "Exit" && typeChoice != "exit");

	// 4. After the user types exit, your program should display the total amount due. (5 points)

	/*5. If while the program is running the user selects an item and later indicates the same exact 
	item, only use the subtotal calculated for the last selection(and quantity) of this item when calculating 
	the total amount due.
	In other words, if a customer buys 2 pencils, the subtotal is $0.40.If the customer later buys 10 pencils, 
	the subtotal for that transaction is $1.00 The subtotal at the end will be $1.00. (3 points)*/
	
	// 7. Upon exit display the following lines where XXXX is your name : (2 points)
	// Your total is 99.99.Thank you for shopping at XXXX Store
	cout << "Your total is: $" << setprecision(2) << fixed << (totalNotebookBalance + totalPencilBalance + totalPenBalance + totalCalcBalance) << ".\n\n";
	cout << "Thank you for shopping at Wessling store.\n";

	//8. Make sure your program looks like the examples below when it runs.

	system("pause");
}