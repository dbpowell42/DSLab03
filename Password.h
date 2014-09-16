#if !defined PASSWORD_H
#define PASSWORD_H
#include "ListArray.h"
#include "Text.h"
#include "Double.h"
#include "HighPerformanceCounter.h"
#include "Integer.h"
#include "Keyboard.h"
#include "ListArrayIterator.h"
#include "Matrix.h"
#include "Permutation.h"
#include "Poly.h"
#include "ReadFile.h"
#include "WriteFile.h"
#include "Random.h"
#include <iostream>


using namespace std;
using namespace CSC2110;



//complete the includes

class Password
{
   private:
      ListArray<String>* viable_words;  //the list of words that can still be the password
      ListArray<String>* all_words;  //the original list of words
      int len;  //the length of the first word entered is stored to check that all subsequent words have the same length

      //a private helper method to report the number of character matches between two Strings
      int getNumMatches(String* curr_word, String* word_guess);

   public:
       Password();
       ~Password();
       void addWord(String* wrd);
       void guess(int pGuess, int pMatch);
       int getNumberOfPasswordsLeft();
       void displayViableWords();
       int bestGuess();
       String* getOriginalWord(int index);
};


#endif
