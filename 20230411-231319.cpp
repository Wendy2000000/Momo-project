#include<iostream>
#include<stdlib.h>
using namespace std;

int balance =1000;
int pin=0000;
int attempts =0 ;

void authenticate() {
int enteredPin;
cout << "Enter your pin:";
cin >> enteredPin;

if (enteredPin==pin) {
cout << "Authentication successful. " << endl ;
attempts=0;
} else {
attempts++;
cout << "Incorrect pin. " << 3-attempts << "attempt left. " <<endl ;
cout << "Maximum attempts reached. Exiting program... " << endl ;
exit(0);
  }
 } 

void ChangePin() {
int newPin, confirm;

cout << "Enter new pin:";
cin >> newPin;
cout << "confirm new pin:";
cin >> confirm;

if (newPin==confirm) 
pin=newPin;
cout <<"Pin changed successfully. " << endl ;
} 
  

void checkBalance () {
cout << "Your balance is:" << balance << endl ;
}
void sendMoney () {
int amount ;
cout << "Enter amount to send:";
cin >> amount;
if (amount > balance) {
cout << "Insufficient funds. Please try again. " << endl ;

} else {
balance-=amount ;
cout << "Transaction successful. New balance is:" << balance << endl;
 }
}

int main() {
    int option;
    
    while (true) {
    cout << "Welcome to Mobile Money service. Please select an option :" << endl ;
    cout << "1.Authenticate" << endl ;
    cout << "2.change PIN" << endl ;
    cout << "3.check balance " << endl ;
    cout << "4.Send money " << endl ;
    cout << "5.Exit" << endl ;

    cin >> option ;
    if (option==1) {
    authenticate () ;
    } else if(option==2) {
    ChangePin();
    } else if(option==3) {
    checkBalance();
    } else if(option==4) {
    sendMoney () ;
    } else if(option==5) {
    cout << "Exiting program... " << endl ;
    exit(0);
    } else {
    cout << "Invalid option selected. Please try again. " << endl ;
    }
  }
return 0 ;
}
        
