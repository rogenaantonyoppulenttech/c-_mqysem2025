#include <iostream>
using namespace std;
void clearConsole()
{
     //this function print 50 new lines on te screen pushing old text up and making screen look clean when you scroll up youll actually see the code execution
    cout<< string(50, '\n');
}

//step 1 get range of values function
void getRange(int& x, int& y)
{
    cout<<"Group D: number guessing system !! . \n";
    cout<<" The program demonstrates core concepts of humor, user interaction,data types, functions , \n randomization of digits, control flow and basic arithmetic logic to simulate a guessing game";
    cout<<"\n";
    cout<< string(3, '\n'); // skips 3 lines
    cout<<"intro song: JET2 HOLIDAY ...\n Nothing beats a Jet2 Holiday, and right now you can save 50 pounds per person thats 200 pounds for a family of 4 #group D "<<endl;
    cout<<"Goated music intro \n";
    cout<< string(3, '\n');
    cout<<""<<endl;
    cout<<"Enter the lower range number/ starting number (X): .\n";
    cin>>x;
    cout<<"enter the higher range number/ending Number (Y): \n";
    cin>>y;
    clearConsole();
}
//THIS FUNCTION CONFIRMS THE RANGE INPUT

// Step 2: Confirm the range
bool confirmRange(int x, int y) {
    cout<< string( 9, '\n');
    cout<< "love Island im a mommy series recap. \n";
    cout<<"Huda: i'm a mommy, Nic : Mommy?? \n huda: im a mom Nic: Mamacita?? Huda: no im a mommmy NiC: a mom of what? A dog? \n hUDA: no like a daughter!! Nic: like a daughter like a real baby?? \n Huda: yeah like a human child ";

    cout<<string(7, '\n');
    cout<<"";
    cout<<"";

    cout << "STEP 2: You selected range " << x << " to " << y << ".\n";
    cout << "Is this correct? (Y/N): ";
    char confirm;
    cin >> confirm;
    confirm = toupper(confirm);
    clearConsole();
    return confirm == 'Y';
}

// Step 3: Ask user to pick number secretly
void promptSecretPick(int x, int y) {
    cout << " Now think of a number between " << x << " and " << y << ".\n";
    cout <<" Do not tell me or type it. Keep it secret in your mind.\n";
    cout << "Press any key then Enter when ready to continue... ";
    char dummy;
    cin >> dummy;
    clearConsole();
}

// Step 4: Guide user through math operations
int performOperations() {
    int result;
    cout<<" song suggestion 1: Doot Doot (67) .\n";
            cout<<" shades on.\n";
            cout<<" im boul with the glasses, bro say er' cos he a savage, so many dead opps so many as*** (brr) you aint cant that , i cant pass this shooter stay strapped \n i dont need mine bro put belt right to they behind the way that switch (brrrr) i know he dy....\n";
            cout<< string (10, '\n');
    cout << "STEP 4: Perform the following operations:\n";
    cout << "1Add 3 to your secret number.\n";
    cout << "Multiply the result by 2.\n";
    cout << "Subtract 4 from the result.\n";
    cout << "Now enter the final result here: ";
    cin >> result;
    clearConsole();
    return result;
}

// Step 5: System attempts to reverse engineer
int reverseOperations(int finalResult) {
    // Reverse of: ((x + 3) * 2) - 4
    // Step-by-step:
    // Add 4 → finalResult + 4
    // Divide by 2 → (finalResult + 4) / 2
    // Subtract 3 → ((finalResult + 4) / 2) - 3
    return ((finalResult + 4) / 2) - 3;
}

// Step 6: Guess the number in 3 tries
void guessNumber(int x, int y, int finalResult) {
    cout<< string( 5, '\n');
    cout<< "song suggestion no 2 \n";
    cout<< " Kendrick Lamar: UNited In Grief \n";
    cout<<"Tell them the truth \n";
    cout<<"i hope you find some paradise ,narator( tell em , tell em ) \n kendrick: ive been going though something be afraid ... \ what is a ....  \n";
    cout<<"this is a dope example of a printed out song \n ";
    cout<< string(15, '\n');
    cout << " Now I will try to guess your number in 3 tries...\n";

    int guess = reverseOperations(finalResult);
    bool guessedCorrectly = false;

    for (int attempt = 1; attempt <= 3; ++attempt) {
            cout<<"But do not forget to do God and to share for with such acts God is well pleased \n";
        cout<<string(3, '\n');

        cout << " Attempt #" << attempt << ": Is it " << guess << "? (Y/N): ";
        char reply;
        cin >> reply;
        reply = toupper(reply);

        if (reply == 'Y') {


            cout << "I knew it! Your number was " << guess << "!\n";
            cout << "Here's how I guessed it:\n";
            cout << "Final result = ((your number + 3) * 2) - 4\n";
            cout << "So, original = ((final + 4) / 2) - 3 = " << guess << "\n";
            cout<< string (10, '\n');

            guessedCorrectly = true;
            break;
        } else {
            if (attempt < 3)
                cout << "ohh no Let me try again...\n";
        }
    }

    if (!guessedCorrectly) {
        cout << "\n I couldn’t guess your number in 3 tries.\n";
        cout << "Maybe try again or double-check the math steps.\n";
    }
}

//  Whole program logic
int main() {
    int x, y;
    bool validRange = false;

    // Loop until range is confirmed
    do {
        getRange(x, y);
        validRange = confirmRange(x, y);
    } while (!validRange);

    promptSecretPick(x, y);
    int finalResult = performOperations();
    guessNumber(x, y, finalResult);
    cout<<"any questions!! \n";
    cout << "\n Program complete. Thanks for playing with group D and learning more about as you hae fun . to mwalimu Thank you for a great sem !\n";
    cout<< "God bless You \n";
   cout<< string(15, '\n');
    return 0;
}
