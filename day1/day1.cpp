
// Output:
// Sum found!!
// First Number: 1228
// Second Number: 792
// Product: 972576


#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int expense[200];
    int index = 0;
    int n;

    int firstNum;
    int secNum;
    int sum;
    
    bool sumfound = false;

    std::ifstream myfile("E:\\NewtDevelopment\\NonGames\\aoc2020\\day1\\input.txt");
    //myfile.open("input.txt");
    while(!myfile.eof()){
        //myfile >> expense[index];
        myfile >> n;
        expense[index] = n;
        //cout << n << endl;
        //cout << expense[index] << endl;
        index++;
        //printf("%i \n",expense[index] );
    }
    myfile.close();

    for(int i=0; i<index; i++){
        //cout << expense[i] << endl;
        firstNum = expense[i];
        for(int j = 1; j<index; j++){
            secNum = expense[j];
            sum = firstNum + secNum;
            //cout << firstNum << " + " << secNum << "=" << sum << endl;
            if(sum == 2020){
                cout << "Sum found!!" << endl;
                cout << "First Number: " << firstNum << endl;
                cout << "Second Number: " << secNum << endl;
                cout << "Product: " << firstNum*secNum << endl;
                sumfound = true;
            }
            if(sumfound){
            break;
        }


        }
        if(sumfound){
            break;
        }
    }
   
}

//Prompt:
// --- Day 1: Report Repair ---
// After saving Christmas five years in a row, you've decided to take a vacation at a nice resort on a tropical island. Surely, Christmas will go on without you.

// The tropical island has its own currency and is entirely cash-only. The gold coins used there have a little picture of a starfish; the locals just call them stars. None of the currency exchanges seem to have heard of them, but somehow, you'll need to find fifty of these coins by the time you arrive so you can pay the deposit on your room.

// To save your vacation, you need to get all fifty stars by December 25th.

// Collect stars by solving puzzles. Two puzzles will be made available on each day in the Advent calendar; the second puzzle is unlocked when you complete the first. Each puzzle grants one star. Good luck!

// Before you leave, the Elves in accounting just need you to fix your expense report (your puzzle input); apparently, something isn't quite adding up.

// Specifically, they need you to find the two entries that sum to 2020 and then multiply those two numbers together.

// For example, suppose your expense report contained the following:

// 1721
// 979
// 366
// 299
// 675
// 1456
// In this list, the two entries that sum to 2020 are 1721 and 299. Multiplying them together produces 1721 * 299 = 514579, so the correct answer is 514579.

// Of course, your expense report is much larger. Find the two entries that sum to 2020; what do you get if you multiply them together?

// To begin, get your puzzle input.

// Answer: 
 

// You can also [Share] this puzzle.