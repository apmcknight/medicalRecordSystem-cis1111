/* 
(c) 2021 - Adam McKnight, All Rights Reserved.

Licence Should be pasted here.

Expected Code Output should be pasted here.

For detailed documentation, open the index.html file in the /docs folder or see the github readme.md file in the directory root.
*/


#include <iostream>
#include <string>
//#include <math>

using namespace std;

int main () 
{    
    int selection;
    double billAmount;
    double taxRate;
   


    printf("\n\n\nBON SOURS GENERAL MEDICAL CENTER\nCopyright 2021.\nFor assistance dial the IT Department x2222 form an IP phone.\n\n");

    printf("To exit, press CONTROL + C -- OR -- To begin, please select an option below…\n\n");


    printf("Option 1. Retrieve a medical record by First Name sorted alphabetically.\n");
    
    printf("Option 2. Retrieve a medical record by Last Name sorted alphabetically.\n");
    
    printf("Option 3. Recall a medical record\n");

    printf("Option 4. Create a new medical record\n");

    printf("Option 5. Start billing calculator\n\n\n");


    cout << "Please enter your selection: ";
    cin >> selection;

    switch( selection ) {
        case 1:
            printf("This program is being built, and functionality for retrieving paitent records has not been released.");
            
            break;
            
        case 2:
            printf("This program is being built, and functionality for retrieving paitent records has not been released.");
            break;
        
        case 5:
            printf("\nTo begin, please enter the amount of the bill: $");
            cin >> billAmount;

            printf("\nPlease enter the tax amount as a decimal: ");
            cin >> taxRate;

            printf("\nHere's the patients total bill: $");
            cout << (billAmount + taxRate);

            printf("\n");

            break;
        
        default:
            printf("Please enter a valid option");
            break;
    } 


    return 0;

}
