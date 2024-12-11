#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    srand(time(0));
    int generatedNumber=1 +rand() % 101   ,tries , N , selectedLvl;
    bool playAgain=true;
    char wantplay;
    cout << generatedNumber;
    string levels[]={"Easy" , "Meduim" , "Hard"};
    int chances[]={10 , 5 ,3};


    cout << "====================================================================\n";
    cout << "\t Welcome to the Number Guessing Game!" << endl;
    cout << "\t I'm thinking of a number between 1 and 100." <<endl;
     cout << "====================================================================\n";
     cout << endl;cout << endl;
        do{
            cout << "Please select the difficulty level:" <<endl;
     cout <<"1. Easy (10 chances)" <<endl;
    cout << "2. Medium (5 chances)"<<endl;
    cout << "3. Hard (3 chances)"<<endl;
    do{
        cout << "Enter your choise : ";
        cin >> selectedLvl;
    }while(selectedLvl <= 0 || selectedLvl >3);
     cout << endl;cout << endl;
     cout << "Great you have selected " << levels[selectedLvl -1]<< " difficulty level." <<endl;
     cout << "You have only " <<chances[selectedLvl - 1] <<"\n";
     cout <<"Let's start the game!" <<endl;
     cout << endl;cout << endl;
     tries = 0;
    while( tries< chances[selectedLvl - 1] && N != generatedNumber){
        cout << "Enter your guess: ";
        cin >>N;
        if(N > generatedNumber){
            cout << "Incorrect the Number is less than " <<N << endl;
        }
        else if(N < generatedNumber){
            cout << "Incorrect the Number is greather than "<<N <<endl;
        }
        else{
            cout << endl;cout << endl;
            cout <<"Congratulations! You guessed the correct number in "<<  tries+1  << " attempts.";
            break;
        }
        tries++;
    }

    if( tries == chances[selectedLvl - 1]   && N!=generatedNumber){
        cout << endl;cout << endl;
        cout << "Sorry you'r out of chances ! "<<endl;
    }
         cout << endl;cout << endl;
         cout << "You want to play another round ? (1:Yes / 0:No) \n";
         cout << "Enter your choise please : ";
         cin >>wantplay;
         wantplay !='1'?playAgain=false:playAgain;
        }while(playAgain);

        cout << endl;cout << endl;
        cout << "Thanks for using the game see you soon ! \n";




    return 0;
}
