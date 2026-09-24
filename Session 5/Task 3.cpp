/*
3.Write a function in Java or Python that simulates a Flipkart-style search: overload a method searchProduct() to allow searching by product name or by product name and category. Demonstrate both usages with sample data.
*/

#include <iostream>
using namespace std;

class FlipkartSearch
{
public:
    void searchProduct(string productName)
    {
        cout << "Searching for Product: " << productName << endl;
        cout << "Results found for \"" << productName << "\"" << endl;
    }

    void searchProduct(string productName, string category)
    {
        cout << "Searching for Product: " << productName
             << " in Category: " << category << endl;
        cout << "Results found for \"" << productName
             << "\" under \"" << category << "\" category" << endl;
    }
};

int main()
{
    FlipkartSearch search;

    search.searchProduct("iPhone 16");

    cout<<endl;

    search.searchProduct("iPhone 16","Mobiles");

    return 0;
}
