#include<iostream>
using namespace std;
int main() {
    // Find daily profit
    int orange_tree = 15, apple_tree = 18, fruit_per_tree = 21;
    float apple_price = 0.5f, orange_price = 0.7f;
    float apple_per_day = apple_tree * fruit_per_tree, orange_per_day = orange_tree * fruit_per_tree;
    float daily_profit = (apple_per_day * apple_price) + (orange_per_day * orange_price);
    cout << "Daily profit '=' $" << daily_profit << endl;

    // Find total spending and money left
    int lili_money = 50,  number_of_book = 4;
    float book_price = 11.5f;
    float total_spending = number_of_book * book_price;
    float money_left = lili_money - total_spending;
    cout << "Total spending '=' $" << total_spending << endl;
    cout << "money left '=' $" << money_left << endl;

    // Find needed money for trip
    int number_of_student = 42, price_per_student = 78, money_have = 500;
    int total_price = number_of_student * price_per_student;
    int money_needed = total_price - money_have;
    cout << "Money needed for trip '=' $" << money_needed << endl;
}

