#include <iostream>
#include <string>
using namespace std;

int main() 
{
  const string word = "start";
  string input;
  cout << "Welcome to Wordle" << endl;

  int j = 1;
  for (int i = 0; i < 5; i++)
  {
  cout << "\n\nTry " << j++ << "\nEnter a 5 letter word: ";
  cin >> input;
  if (input[0] != word[0] && input[0] != word[1] && input[0] != word[2] && input[0] != word[3] && input[0] != word[4] && input[1] != word[0] && input[1] != word[1] && input[1] != word[2] && input[1] != word[3] && input[1] != word[4] && input[2] != word[0] && input[2] != word[1] && input[2] != word[2] && input[2] != word[3] && input[2] != word[4] && input[3] != word[0] && input[3] != word[1] && input[3] != word[2] && input[3] != word[3] && input[3] != word[4] && input[4] != word[0] && input[4] != word[1] && input[4] != word[2] && input[4] != word[3] && input[4] != word[4])
  {
    cout << "There is no letter found in the word." << endl;
  }
  if(input[0] == word[0] && input[1] == word[1] && input[2] == word[2] && input[3] == word[3] && input[4] == word[4])
  {
    cout << "You guessed the word!";
    return 0;
  }
  if(input[0] == 'Q' || input[0] == 'W' || input[0] == 'E' || input[0] == 'R' || input[0] == 'T' || input[0] == 'Y' || input[0] == 'U' || input[0] == 'I' || input[0] == 'O' || input[0] == 'P' || input[0] == 'A' || input[0] == 'S' || input[0] == 'D' || input[0] == 'F' || input[0] == 'G' || input[0] == 'H' || input[0] == 'J' || input[0] == 'K' || input[0] == 'L' || input[0] == 'Z' || input[0] == 'X' || input[0] == 'C' || input[0] == 'V' || input[0] == 'B' || input[0] == 'N' || input[0] == 'M' || input[1] == 'Q' || input[1] == 'W' || input[1] == 'E' || input[1] == 'R' || input[1] == 'T' || input[1] == 'Y' || input[1] == 'U' || input[1] == 'I' || input[1] == 'O' || input[1] == 'P' || input[1] == 'A' || input[1] == 'S' || input[1] == 'D' || input[1] == 'F' || input[1] == 'G' || input[1] == 'H' || input[1] == 'J' || input[1] == 'K' || input[1] == 'L' || input[1] == 'Z' || input[1] == 'X' || input[1] == 'C' || input[1] == 'V' || input[1] == 'B' || input[1] == 'N' || input[1] == 'M' || input[2] == 'Q' || input[2] == 'W' || input[2] == 'E' || input[2] == 'R' || input[2] == 'T' || input[2] == 'Y' || input[2] == 'U' || input[2] == 'I' || input[2] == 'O' || input[2] == 'P' || input[2] == 'A' || input[2] == 'S' || input[2] == 'D' || input[2] == 'F' || input[2] == 'G' || input[2] == 'H' || input[2] == 'J' || input[2] == 'K' || input[2] == 'L' || input[2] == 'Z' || input[2] == 'X' || input[2] == 'C' || input[2] == 'V' || input[2] == 'B' || input[2] == 'N' || input[2] == 'M' || input[3] == 'Q' || input[3] == 'W' || input[3] == 'E' || input[3] == 'R' || input[3] == 'T' || input[3] == 'Y' || input[3] == 'U' || input[3] == 'I' || input[3] == 'O' || input[3] == 'P' || input[3] == 'A' || input[3] == 'S' || input[3] == 'D' || input[3] == 'F' || input[3] == 'G' || input[3] == 'H' || input[3] == 'J' || input[3] == 'K' || input[3] == 'L' || input[3] == 'Z' || input[3] == 'X' || input[3] == 'C' || input[3] == 'V' || input[3] == 'B' || input[3] == 'N' || input[4] == 'M' || input[4] == 'Q' || input[4] == 'W' || input[4] == 'E' || input[4] == 'R' || input[4] == 'T' || input[4] == 'Y' || input[4] == 'U' || input[4] == 'I' || input[4] == 'O' || input[4] == 'P' || input[4] == 'A' || input[4] == 'S' || input[4] == 'D' || input[4] == 'F' || input[4] == 'G' || input[4] == 'H' || input[4] == 'J' || input[4] == 'K' || input[4] == 'L' || input[4] == 'Z' || input[4] == 'X' || input[4] == 'C' || input[4] == 'V' || input[4] == 'B' || input[4] == 'N' || input[4] == 'M')
  {
    cout << "Only use lowercase letters";
    i--; // doesn't waste a try for the user
    j--; // keeps the try the same if messed up, otherwise it will go past 5 tries
  }
  if(input[0] == word[0])
  {
    cout << "1st letter is correct. ";
  }
  if(input[1] == word[1])
  {
  cout << "2nd letter is correct. ";
  }
  if(input[2] == word[2])
  {
    cout << "3rd letter is correct. ";
  }
  if(input[3] == word[3])
  {
    cout << "4th letter is correct. ";
  }
  if(input[4] == word[4])
  {
    cout << "5th letter is correct. ";
  }
  if((input[0] != word[0]) && (input[0] == word[1] || input[0] == word[2] || input[0] == word[3] || input[0] == word[4]))
  {
    cout << "The 1st letter is not in that place, but it is in the word." << endl;
  }
  if((input[1] != word[1]) && (input[1] == word[0] || input[1] == word[2] || input[1] == word[3] || input[1] == word[4]))
  {
    cout << "The 2nd letter is not in that place, but it is in the word." << endl;
  }
  if((input[2] != word[2]) && (input[2] == word[0] || input[2] == word[1] || input[2] == word[3] || input[2] == word[4]))
  {
    cout << "The 3rd letter is not in that place, but it is in the word." << endl;
  }
  if((input[3] != word[3]) && (input[3] == word[0] || input[3] == word[1] || input[3] == word[2] || input[3] == word[4]))
  {
    cout << "The 4th letter is not in that place, but it is in the word." << endl;
  }
  if((input[4] != word[4]) && (input[4] == word[0] || input[4] == word[1] || input[4] == word[2] || input[4] == word[3]))
  {
    cout << "The 5th letter is not in that place, but it is in the word." << endl;
  }
  }
  
  cout << "\n\nYou ran out of tries!";
  return 0;
}