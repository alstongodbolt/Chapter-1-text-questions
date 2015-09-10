//
//  main.cpp
//  Chapter 1 text questions
//
//  Created by Alston Godbolt on 8/28/15.
//  Copyright (c) 2015 Alston Godbolt. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{

    //cout << "Hello, World!" << endl;
    
    //Available credit exercise
    
    /*
     double max_credit;
    double creit_used_by_customer;
    
    cout << "Enter the customer's maximum credit. $";
    cin >> max_credit;
    cout << "Enter the amount of credit used by the customer $";
    cin >> creit_used_by_customer;
    double available_credit = max_credit - creit_used_by_customer;
    cout << "The customer's available credit is: $" << available_credit << endl;
    */
    
    // Account balance exercise
    /*
    double beginning_balance;
    double deposits;
    double withdrawals;
    
    cout << "What is the customer's beginning balance? $";
    cin >> beginning_balance;
    cout << "What is the total amount of deposits made? $";
    cin >> deposits;
    cout << "What are the total number of withdrawals made? $";
    cin >> withdrawals;
    double ending_balance = beginning_balance + deposits - withdrawals;
    cout << "The customer's ending balance is: $" << ending_balance << endl;
    */
    
    //Sales Tax
    /*
    double retail_price;
    double sales_tax;
    
    cout << "What is the price of the item? $";
    cin >> retail_price;
    
    cout << "What is the sales tax? %";
    cin >> sales_tax;
    
    double new_tax = sales_tax / 100 * retail_price;
    // learn how to round to nearest
    cout << "Sales tax for this item is: $" << new_tax << endl;
    
    double new_price = retail_price + new_tax;
    // learn how to round to nearest
    cout << "The total price is: $" << new_price << endl;
    */
    
    //Candy bar sales
    /*
    double candy_bars_sold;
    double profit_per_bar;
    
    cout << "Please enter the number of candy bars sold " ;
    cin >> candy_bars_sold;
    
    cout << "Please enter the profit made from each candy bar sold $";
    cin >> profit_per_bar;
    
    double total_profit = candy_bars_sold * profit_per_bar;
    cout << "The total profit made is: $" << total_profit << endl;
    */
    
    // Baseball costs
    
    double number_of_baseballs_purchased;
    double cost_per_ball;
    
    cout << "Please enter the total number of baseballs purschased last season ";
    cin >> number_of_baseballs_purchased;
    
    cout << "Please enter the cost of each ball purchased $";
    cin >> cost_per_ball;
    
    double total_spent = number_of_baseballs_purchased * cost_per_ball;
    cout << "The total amount spent on baseballs last season was: $" << total_spent << endl;
    
    return 0;
}
