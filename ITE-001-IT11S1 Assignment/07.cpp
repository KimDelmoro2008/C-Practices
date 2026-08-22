#include <iostream> 
using namespace std; 

  

int main() { 

    int itemNum; 
    double basePrice = 0; 
    double disc, tax, minFree; 
    double savings, afterDisc, addedTax, shipping, amountDue;
    string itemName; 
    string userName; 

  

    cout << "=============================" << endl; 
    cout << "      TINDAHAN NI KIM        " << endl; 
    cout << "=============================" << endl; 
    cout << "[1] Matcha Chicken       - P250" << endl; 
    cout << "[2] Cake Ni Boss Seth    - P500" << endl; 
    cout << "[3] Matcha Champorado    - P100" << endl; 
    cout << "[4] Gin Sampalok         - P110" << endl; 
    cout << "[5] Airplane Rice        - P25" << endl; 
    cout << "=============================" << endl; 
    cout << "Choose item number: "; 
    cin >> itemNum; 

  

    if (itemNum >= 1 && itemNum <= 5) { 
        if (itemNum == 1) { 
            itemName  = "Matcha Chicken"; 
            basePrice = 250; 
        } else { 
            if (itemNum == 2) { 
                itemName  = "Cake Ni Boss Seth"; 
                basePrice = 500; 
            } else { 
                if (itemNum == 3) { 
                    itemName  = "Matcha Champorado"; 
                    basePrice = 100; 
                } else { 
                    if (itemNum == 4) { 
                        itemName  = "Gin Sampalok"; 
                        basePrice = 110; 
                    } else { 
                        itemName  = "Airplane Rice"; 
                        basePrice = 25; 
                    } 
                } 
            } 
        } 

    } else { 
        cout << "Sorry, that item is not on the menu." << endl; 
        return 0; 
    } 
     
     

    cout << "What is your name?: "; 
    cin >> userName; 
    cout << "Enter your discount: "; 
    cin >> disc; 
    cout << "Enter your Tax Rate (%): "; 
    cin >> tax; 
    cout << "Enter your minimum order for a chance of free delivery: "; 
    cin >> minFree; 

  
    savings   = basePrice * (disc / 100); 
    afterDisc = basePrice - savings; 
    addedTax  = afterDisc * (tax / 100); 
    amountDue = afterDisc + addedTax; 
  

    if (amountDue >= minFree) { 
        shipping = 0; 
        cout << "\n Congrats, You got a free delivery!" << endl; 

    } else { 
        if (amountDue >= 50) { 
            shipping = 30; 
        } else { 
            shipping = 50; 
        } 
    } 
     
    amountDue += shipping; 
  

    cout << "=============================" << endl; 
    cout << "      TINDAHAN NI KIM        " << endl; 
    cout << "=============================" << endl; 
    cout << "Item :          " << itemName << endl; 
    cout << "Item Price :    P" << basePrice << endl; 
    cout << "Discount :      P" << disc << endl; 
    cout << "After Discount  P" << afterDisc << endl; 
    cout << "Tax Rate :      %" << tax << endl; 
        if (shipping = 0) { 
            cout << "Delivery Fee : FREE"; 
        } else { 
            cout << "Delivery Fee :   " << shipping << endl; 
        } 
    cout << "=============================" << endl; 
    cout << "      RECEIPT NI " << userName << endl; 
    cout << "=============================" << endl;
    
}    