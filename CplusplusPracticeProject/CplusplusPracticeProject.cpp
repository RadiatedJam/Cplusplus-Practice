// CplusplusPracticeProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
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

    /*
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
    */

    //selection
    bool decision = false;
    if (decision == true)
    {
        std::cout << "decision was true!\n";
    }
    else
    {
        std::cout << "decision was false!\n";
    }

    //avanced if statement: ternary
    //written if line with other code, such as an assignment
    //statement.
    // it results in one of two values based on the condition
    int ternResult = (decision ? 1 : 2);

    //example of output to console
    std::cout << "Hello World!\n";
        

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
