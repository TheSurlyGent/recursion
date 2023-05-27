#include <iostream>
#include <string> 
using std::cout;
using std::string;
using std::cin;
using std::endl;

int recursiveSummation(int num)
{
    if (num <= 1)
    {
        return num;
    }
    return num + recursiveSummation(num - 1);
}
std::string findBinary(int decimal) {
    if (decimal == 0)
    {
        return "0"; //returning a string of 0
    }
    else if (decimal == 1)
    {
        return "1"; // returning a string of 1
    }
    else
    {
        //finBinary(decimal/2) to get the first degit
        //finBinary(decimal%2) to get the other digits
        return findBinary(decimal / 2) + findBinary(decimal % 2);
    }

}
std::string reverseString(std::string word)
{
    if (word.empty())
    {
        return "";
    }
    else
    {
        return reverseString(word.substr(1)) + word.at(0);
    }
}
bool isPalindrome(std::string word) // kayak length: 5
{
    
    if (word.length() == 0 || word.length() == 1) //word length =! 0 || 1
    {
        return true;
    }
    else if (word[0] == word.at(word.length() - 1))
    {
       return  isPalindrome(word.substr(1, word.length() - 2));
    }
    // Palindrome Recursive
    // word: kayak
    //  |       |
    //  k a y a k
    //  0 1 2 3 4
    // kayak [0] == word at ((5) - 1) = [4]
    // -> |   |
    //  k a y a k
    //  0 1 2 3 4
    // return isPalindrome on word's substring at position [1] to the word length -2 [3]
    // ayak [1] == word at ((5) - 2) = [3]
    //      |
    //  k a y a k
    //  0 1 2 3 4
    // return isPalindrome on word's substring at position [2] to the word length -2 [2]
    // isPalidrom(word.length ==1) return true
    return false;
}
// Palindrome with for loop
bool isfPalindrome(std::string word)
{
    for (int i = 0; i < word.length() / 2; i++)
        if (word[i] != word[word.length() - i - 1])
        {
            return false;
        }
    return true;
}

//                          WORD : RACECAR
// i:0
//                 word.length (7) - [0] - 1 = 6
//        |           |
// word:  r a c e c a r
// index: 0 1 2 3 4 5 6
//
//length: 7
//middle: 3
// i:1
//                 word.length (7) - [1] - 1 = 5
//          |       |
// word:  r a c e c a r
// index: 0 1 2 3 4 5 6
//
//length: 7
//middle: 3
// i:2
//                  word.length (7) - [2] - 1 = 4
//            |   |
// word:  r a c e c a r
// index: 0 1 2 3 4 5 6
//
//length: 7
//middle: 3








int main()
{
    cout << "Enter number" << endl;
    int sNumber;
    cin >> sNumber;
    cout << "Your recursive sumation is: " << recursiveSummation(sNumber) << endl;
    int result = 1;
    cout << "Your binary number is: " << findBinary(sNumber) << endl;
    cout << "Enter word " << endl;
    string word;
    cin >>word;
    cout <<"Your word reversed is: " << reverseString(word) << endl;
    cout <<"Palindrome: " << std::boolalpha << isPalindrome(word) << endl;
}