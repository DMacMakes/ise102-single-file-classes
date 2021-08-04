/*******************************************************************
* ISE102 Assessment 2 Part B - Rooms 
********************************************************************
*
* A basic crawler
*
* Start in a hall, move into another room, answer a question, 
* enter another.
*
********************************************************************/

#include <iostream>
#include <string>
#include "include/ise102.h"
#include "Snake.h"
#include "MonsterCard.h"

using namespace std;

int main() {
  clearScreen();
  //print(titleStyle, "Hello world!\n");
  std::string name = "Mitcho";
  int age = 64;
  
  cout << format("My name is {0} and I am {1} years old.\n", name, age);
  
  Snake gary;
  cout << "Garys move interval: " << gary.moveInterval << endl;
  gary.card.hit_points = 33;
  print ("Gary has a card with {} hit points. Seen worse.\n", gary.card.hit_points);
  
  MonsterCard flargen;
  flargen.hit_points = 200;
  print("Flargen struck for {0} damage!\n", flargen.GetStrikeDamage());
   //flargen.strike();

  //auto error_style = makeStyle( color::beige,\
                                color::crimson,\
                                emphasis::bold);

  //delay(2000);
  //print(error_style, "\t\t\t_BLOWING UP NOW_\n");
  //print("\n");
}
