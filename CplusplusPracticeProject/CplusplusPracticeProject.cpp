// CplusplusPracticeProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

void BasicFunction() {
    std::cout << "Basic funtction ran!\n";
}

int main()
{
    /*
    //examples of different variable types
    int testInt = 50;
    unsigned testUnsighned = 100u;
    float testFloat = 5.5f;
    double testDouble = 0.5;
    bool testBool = true;
    
    char testChar = 'f';
    char firstNameOld[] = "James";

    std::string firstName = "James";
    std::string lastName = "Doran";

    //can add strings together (concatenate) with
    //the + sign
    std::string fullName = firstName + " " + lastName;

    // can access characters in string as if the
    // string was an array
    char firstInitial = fullName[0];

    //substr splits based on an
    //initial postion and a length
    std::string initials = fullName.substr(0, 1);

    // you can find the position in the sting and store it
    // in a variable of type "std::size_t", similar to int
    std::size_t spacePos = fullName.find(" ");

    // example of output to console
    initials += fullName.substr(spacePos + 1, 1);

    std::string paragraph = "I'm meant to be writing at this moment. What I mean is, I'm meant to be writing something else at this moment. The document I'm meant to be writing is, of course, open in another program on my computer and is patiently awaiting my attention. Yet here I am plonking down senseless sentiments in this paragraph because it's easier to do than to work on anything particularly meaningful. I am grateful for the distraction.";

    std::string shortendP = paragraph.substr(0, 20);

    shortendP += "\n" + paragraph.substr(20, std::string::npos);

    
    // input
    std::cout << "please enter a word.\n";
    std::string entryString = "";

    std::cin >> entryString;

    std::cout << "you typed " << entryString << "!\n";

    // we can also input to things arent't stings
    int entryInt;
    std::cout << "Please enter a whole number.\n";
    std::cin >> entryInt;
    std::cout << "you typed " << entryInt << "!\n";

    // note: if they enter somthing other than an int
    // the input will not "consume" the entry
    //this means it will be used again the nest
    // that cin is used - thus probably breaking your program
    // we should use data validation

    //we can use floats aswell
    float entryFloat;
    std::cout << "Please enter a number with a decimal place.\n";
    std::cin >> entryFloat;
    std::cout << "you typed " << entryFloat << "!\n";

    // by default cin ony gets text up to the first space
    // you can get a whole line text (including spaces)
    std::string lineOfText;
    std::cout << "please enter a line of text.\n";
    std::getline(std::cin, lineOfText);
    std::cout << "you typed " << lineOfText << "!\n";
    

    //selection
    // if statements are esentially the same as C#
    bool boolCheck = true;
    int decision = 0;
    if (decision == 0)
    {
        std::cout << "decision was 0!\n";
    }
    else if (decision == 1)
    {
        std::cout << "decision was 1!\n";
    }
    else
    {
        std::cout << "decision was no 0 or 1!\n";
    }

    int errorCode = 2;

    switch (errorCode)
    {
    case 0:
    {
        std::cout << "error was 0!\n";
        break;
    }
    case 1:
    {
        std::cout << "error was 1!\n";
        break;
    }
    case 2:
    {
        std::cout << "error was 2!\n";
        break;
    }
    default:
    {
        std::cout << "error was unrecognized!\n";
        break;
    }
    }
    

    
    int direction = 0;

    std::cout << "please pick a number between 1 to 4 to decide what direction you go in\n";
    std::cin >> direction;

    switch (direction)
    {
    case 1:
    {
        std::cout << "you went to the first direction";
        break;
    }
    case 2:
    {
        std::cout << "you went to the second direction";
        break;
    }
    case 3:
    {
        std::cout << "you went to the third direction";
        break;
    }
    case 4:
    {
        std::cout << "you went to the fourth direction";
        break;
    }
    default:
    {
        std::cout << "you din't pick any of the directions and got struck by lighting";
        break;
    }
    }
    

    //avanced if statement: ternary
    //written if line with other code, such as an assignment
    //statement.
    // it results in one of two values based on the condition
    //int ternResult = (decision ? 1 : 2);

    //iteration
    //while loops are the dame in C++ and C#
    
    bool whileB = true;

    while (whileB == true)
    {
        //do the body of the loop
        whileB = false;
        //at the end check the condition, if is still true, we loop again
    }

    int doI = 3;
    do {
        ++doI;
        std::cout << "dowhile ran " << doI << " times!\n";
    } while (doI < 2);

    
    for ( int i = 0 ; i < 5; ++i)
    {
        // do the body of the loop
        std::cout << "for loop ran " << i << " times!\n";;
    }
    

    int searchResults = 25;
    std::string google = "G";

    for (int i = 0; i < searchResults; ++i)
    {
        google += "o";
    }

    google += "gle";
    
    std::cout << google << std::endl;

    //example of output to console
    //std::cout << "Hello World!\n";
    */    

    BasicFunction();

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
