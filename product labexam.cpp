
#include <iostream>
using namespace std;

class product
{
   public:
    int productID;
    string productName;
    double Unite_price;
    string product_category;

};
int main()
{
    product P[5];
   int i, n = 0;
   product temp;

   string productName;


 cout<<"*********PRODUCTS's Information*********"<<endl;
     for(i=0; i<5; i++)
   {
       cout << "  " << (i + 1) << "th PRODUCT's Info"<< endl;
       cout<<"PRODUCT ID: ";
       cin>>n;
                P[i].productID = n;
                cout<<"PRODUCT'S Name: ";
                cin>>P[i].productName;
                cout<<"PRODUCT CATEGORY: ";
                cin>>P[i].product_category;
               cout<<"PRICE: ";
               cin>>P[i].Unite_price;
    }
cout<<"*********Sorted By PRICE BY SELECTION SORT*********"<<endl;
    for(int i=0; i<5; i++)
        {
        int min_index = i;
        for(int j=i+1; j<5; j++)
            {
            if(P[min_index].Unite_price> P[j].Unite_price)
            {
                min_index = j;

            }
            }
        temp = P[min_index];
        P[min_index] = P[i];
        P[i] = temp;
        }


for(int i=0; i<5; i++)
{
cout<<"PRODUCT ID: "<<P[i].productID<<" ";
cout<<"PRODUCT NAME: "<<P[i].productName<<" ";
cout<<"PRODUCT_CATEGORY: "<<P[i].product_category<<" ";
cout<<"PRICE: "<<P[i].Unite_price<<" ";
cout<<endl;

}
cout<<"*********Sorted By PRICE in bubble sort*********"<<endl;
for(int i=0; i<(5-1);i++)
{
for(int j=0; j<(5-i-1);j++)
    {
        if(P[j].Unite_price>P[j+1]. Unite_price)
        {

        temp= P[j];
        P[j]=P[j+1];
        P[j+1]=temp;
        }

    }

}

cout<<endl;
for(int i=0; i<5; i++)
    {
        cout<<"PRODUCT ID: "<<P[i].productID<<" ";
cout<<"PRODUCT NAME: "<<P[i].productName<<" ";
cout<<"PRODUCT_CATEGORY: "<<P[i].product_category<<" ";
cout<<"PRICE: "<<P[i].Unite_price<<" ";
cout<<endl;


}


 cout<<"ENTER THE NAME TO SEARCH : ";
 cin>> productName;

 for(i=0;i<5;i++)
 {
     if(P[i].productName == productName)
     {
                 cout<<"PRODUCT ID: "<<P[i].productID<<" ";
cout<<"PRODUCT NAME: "<<P[i].productName<<" ";
cout<<"PRODUCT_CATEGORY: "<<P[i].product_category<<" ";
cout<<"PRICE: "<<P[i].Unite_price<<" ";
cout<<endl;
     }
 else
     {
         cout<<"product not found "<<endl;
     }
}
return 0;

     }






























