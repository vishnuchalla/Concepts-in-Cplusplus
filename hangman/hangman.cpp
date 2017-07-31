#ifndef _COLORS_
#define _COLORS_
#define RST  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"
#define FRED(x) KRED x RST
#define FGRN(x) KGRN x RST
#define FYEL(x) KYEL x RST
#define FBLU(x) KBLU x RST
#define FMAG(x) KMAG x RST
#define FCYN(x) KCYN x RST
#define FWHT(x) KWHT x RST
#define BOLD(x) "\x1B[1m" x RST
#define UNDL(x) "\x1B[4m" x RST
#endif
#define ter "sudo apt-get install wmctrl"
#define full "wmctrl -r :ACTIVE: -b add,fullscreen"
#define ef "wmctrl -r :ACTIVE: -b remove,fullscreen"
#define cls "clear"
#include <iostream>
#include <fstream>
#include <string>
#include <locale>
#include <vector>
#include <ctime>
#include <algorithm>
#include <sstream>
using namespace std;
bool run;
int countLines(vector<string>words) 
{
 return words.size();
}
 string getWord() 
 {
 ifstream wordsfile;
 try 
 {
  wordsfile.open("words.txt");
 }
 catch (...) 
 {
  cout<<"Error"<< endl;
  run=false;
 }
 string line;
 vector<string>words;
 while (getline(wordsfile,line)) 
 {
 words.push_back(line);
 }
 srand(time(NULL));
 int number_of_words=countLines(words);
 string word=words.at(rand()%number_of_words);
 return word;
 }
 string runAI() 
{
 return (getWord());
}
 void endGame(){
 cout <<"Thank you for playing. Goodbye!"<<endl;
 run = false;
}
 string updateWord(string word,vector<int>characterLocations,char to_update) {
 char dummy;
 vector<char> word_vec (word.length(),dummy);
 for (int i=0;i<word.length();i++) 
 {
  vector<int>::iterator found=find(characterLocations.begin(),characterLocations.end(),i);
  if(found!=characterLocations.end()) 
  { 
   word_vec[i]=to_update;
   characterLocations.erase(found);
  }
  else 
 {
  word_vec[i]=word[i];
 }
}
 string result(word_vec.begin(),word_vec.end());
 return result;
}
bool alpha(string word) 
{
 char c;
 for (int i=0;i<word.length();i++) 
 {
 c=word.at(i);
 if (!((c>='a'&&c<='z')||(c>='A'&&c<='Z')))
 {
 return false;
 }
}
return true;
}
vector<int>findLocation(string sample,char findIt)
{
 vector<int> characterLocations;
 for(int i=0;i<sample.size();i++)
 if(sample[i]==findIt)
 characterLocations.push_back(i);
 return characterLocations;
}
void toLower(string& word) 
{
 transform(word.begin(),word.end(),word.begin(),::tolower);
}
main() 
 {
   cout<<"Welcome to Hangman!"<<endl;
   run=true;
   while (run) 
  {
   string gameMode;
   cout<<"Would you like to play against:\n 1) A friend\n 2) The computer?" << endl;
   cout<<"Type 'quit' to end the game." << endl;
   cin>>gameMode;
   system(cls);
   string hiddenword="";
   string input;
   if(gameMode=="1") 
  {
   bool isValidWord=false;
   cout<<"=========PLAYER 1'S TURN========="<<endl;
   while(isValidWord==false) 
  {
   cout<<"Give me a word: ";
   cin>>input;
   isValidWord=alpha(input);
   if(isValidWord) 
   system(cls);
   cout<<"Only letters are allowed in words."<<endl;
  }
  for(int j=0;j<input.length();j++) 
 {
  hiddenword+="_";
 }
 toLower(input);
 cout<<"=========PLAYER 2'S TURN========="<<endl;
 bool gameover=false;
 int numtries=input.length()+1;
 cout<<"The word that your friend gave was "<<input.length()<<" letters long."<<endl;
 cout<<"Updated Word: "<<hiddenword<<endl;
 while ((numtries>0)&&(gameover==false)) 
 {
  char letter;
  cout<<"Number of tries left: "<<numtries<<endl;
  cout<<"Give me a letter you think is in the word: ";
  cin>>letter;
  stringstream stream;
  string str;
  stream<<letter;
  stream>>str;
  toLower(str);
  size_t found=input.find(letter);
  if (found!=string::npos) 
 {
  cout << "That letter is in the word!" << endl;
  vector<int>characterLocations=findLocation(input,letter);
  hiddenword=updateWord(hiddenword, characterLocations, letter);
  if(hiddenword==input) 
 {
  gameover=true;
  break;
 }
  cout<<"Updated Word: "<<hiddenword<<endl;
 }
  else 
 {
  cout<<"That letter is not in the word."<<endl;
 }
 switch(numtries)
  {
		case 9: cout <<FRED("_________")<<endl
					 <<FRED(" |     | ")<<endl
					 <<FBLU(" | ")<<endl
					 <<FBLU(" | ")<<endl
					 <<FGRN(" | ")<<endl
					 <<FGRN(" | ")<<endl
					 <<FYEL("``````````")<<endl;
			break;
		case 8: cout <<FRED("_________")<<endl
					 <<FRED(" |     | ")<<endl
					 <<FBLU(" |   (   )")<<endl
					 <<FBLU(" | ")<<endl
					 <<FGRN(" | ")<<endl
					 <<FGRN(" | ")<<endl
					 <<FYEL("``````````")<<endl;
			break;
		case 7: cout <<FRED("_________")<<endl
					 <<FRED(" |     | ")<<endl
					 <<FBLU(" |   (o_o)")<<endl
					 <<FBLU(" |     ")<<endl
					 <<FGRN(" |     ")<<endl
					 <<FGRN(" | ")<<endl
					 <<FYEL("``````````")<<endl;
			break;
		case 6: cout <<FRED("_________")<<endl
					 <<FRED(" |     | ")<<endl
					 <<FBLU(" |   (o_o)")<<endl
					 <<FBLU(" |     | ")<<endl
					 <<FGRN(" |     |")<<endl
					 <<FGRN(" | ")<<endl
					 <<FYEL("``````````")<< endl;
			break;
		case 5: cout <<FRED("_________")<<endl
					 <<FRED(" |     | ")<<endl
					 <<FBLU(" |   (o_o)")<<endl
					 <<FBLU(" |    _| ")<<endl
					 <<FGRN(" |     |")<<endl
					 <<FGRN(" | ")<<endl
					 <<FYEL("``````````")<< endl;
			break;
		case 4: cout <<FRED("_________")<<endl
					 <<FRED(" |     | ")<<endl
					 <<FBLU(" |   (o_o)")<<endl
					 <<FBLU(" |    _|_ ")<<endl
					 <<FGRN(" |     |")<<endl
					 <<FGRN(" |     ")<<endl
					 <<FYEL("``````````")<<endl;
			break;
		case 3: cout <<FRED("_________")<<endl
					 <<FRED(" |     | ")<<endl
					 <<FBLU(" |   (o_o)")<<endl
					 <<FBLU(" |    _|_ ")<<endl
					 <<FGRN(" |     |")<<endl
					 <<FGRN(" |    / ")<<endl
					 <<FYEL("``````````")<<endl;
			break;
		case 2: cout <<FRED("_________")<<endl
					 <<FRED(" |     | ")<<endl
					 <<FBLU(" |   (O_O)")<<endl
					 <<FBLU(" |    \\|/ ")<<endl
					 <<FGRN(" |     |")<<endl
					 <<FYEL(" |    / \\")<<endl
					 <<FYEL("``````````")<<endl;
			break;
		case 1: cout <<FRED("_________")<<endl
					 <<FRED(" |     | ")<<endl
					 <<FBLU(" |   (x_x)")<<endl
					 <<FBLU(" |     | ")<<endl
					 <<FGRN(" |    /|\\")<<endl
					 <<FGRN(" |    / \\")<<endl
					 <<FYEL(" ````\\")<<endl
					 <<FYEL("      \\")<<endl;
			break;}
 numtries--;
 }
 if (numtries!=0) 
 {
  cout<<"Player 2 wins!"<<endl;
  cout << endl
  <<FRED("    (^_^)")<<endl
  <<FBLU("     \\|/ ")<<endl
  <<FGRN("      |")<<endl
  <<FYEL("     / \\")<<endl;
 }
 else 
 {
  cout <<"Player 1 wins!"<<endl;
 }
 cout<<"The word you gave me was: "<<input<<endl;
 run=false;
 }
 else if (gameMode=="2") 
 {
  input=runAI();
  for(int j=0;j<input.length();j++) 
 {
  hiddenword += "_";
 }
 cout<<"=========PLAYER 2'S TURN========="<<endl;
 bool gameover=false;
 int numtries=input.length()+1;
 while ((numtries>0)&&(gameover==false)) 
{
 char letter;
 cout<<"If you would like to guess the word, press 1."<<endl;
 cout<<"Number of tries left: "<<numtries<<endl;
 cout<<"Give me a letter you think is in the word: ";
 cin>>letter;
 if(letter=='1')
 {
  string guess;
  cout<<"What is your guess?" << endl;
  cin>>guess;
  if(input==guess) 
 {
  cout<<"You guessed the word right!"<<endl;
  numtries=-1;
 }
 }
 else 
 {
  size_t found=input.find(letter);
  if (found!=string::npos) 
 {
  cout<<"That letter is in the word!"<<endl;
  vector<int>characterLocations=findLocation(input,letter);
  for(int i=0;i<characterLocations.size();i++) {
  cout<<characterLocations[i]<<endl;;
 }
 hiddenword=updateWord(hiddenword,characterLocations,letter);
 if(hiddenword==input) 
 {
  gameover=true;
  break;
 }
 cout<<"Updated Word: "<<hiddenword<<endl;
 }
 else 
 {
  cout<<"That letter is not in the word."<<endl;
 }
 switch(numtries)
  {
		case 9: cout <<FRED("_________")<<endl
					 <<FRED(" |     | ")<<endl
					 <<FBLU(" | ")<<endl
					 <<FBLU(" | ")<<endl
					 <<FGRN(" | ")<<endl
					 <<FGRN(" | ")<<endl
					 <<FYEL("``````````")<<endl;
			break;
		case 8: cout <<FRED("_________")<<endl
					 <<FRED(" |     | ")<<endl
					 <<FBLU(" |   (   )")<<endl
					 <<FBLU(" | ")<<endl
					 <<FGRN(" | ")<<endl
					 <<FGRN(" | ")<<endl
					 <<FYEL("``````````")<<endl;
			break;
		case 7: cout <<FRED("_________")<<endl
					 <<FRED(" |     | ")<<endl
					 <<FBLU(" |   (o_o)")<<endl
					 <<FBLU(" |     ")<<endl
					 <<FGRN(" |     ")<<endl
					 <<FGRN(" | ")<<endl
					 <<FYEL("``````````")<<endl;
			break;
		case 6: cout <<FRED("_________")<<endl
					 <<FRED(" |     | ")<<endl
					 <<FBLU(" |   (o_o)")<<endl
					 <<FBLU(" |     | ")<<endl
					 <<FGRN(" |     |")<<endl
					 <<FGRN(" | ")<<endl
					 <<FYEL("``````````")<< endl;
			break;
		case 5: cout <<FRED("_________")<<endl
					 <<FRED(" |     | ")<<endl
					 <<FBLU(" |   (o_o)")<<endl
					 <<FBLU(" |    _| ")<<endl
					 <<FGRN(" |     |")<<endl
					 <<FGRN(" | ")<<endl
					 <<FYEL("``````````")<< endl;
			break;
		case 4: cout <<FRED("_________")<<endl
					 <<FRED(" |     | ")<<endl
					 <<FBLU(" |   (o_o)")<<endl
					 <<FBLU(" |    _|_ ")<<endl
					 <<FGRN(" |     |")<<endl
					 <<FGRN(" |     ")<<endl
					 <<FYEL("``````````")<<endl;
			break;
		case 3: cout <<FRED("_________")<<endl
					 <<FRED(" |     | ")<<endl
					 <<FBLU(" |   (o_o)")<<endl
					 <<FBLU(" |    _|_ ")<<endl
					 <<FGRN(" |     |")<<endl
					 <<FGRN(" |    / ")<<endl
					 <<FYEL("``````````")<<endl;
			break;
		case 2: cout <<FRED("_________")<<endl
					 <<FRED(" |     | ")<<endl
					 <<FBLU(" |   (O_O)")<<endl
					 <<FBLU(" |    \\|/ ")<<endl
					 <<FGRN(" |     |")<<endl
					 <<FYEL(" |    / \\")<<endl
					 <<FYEL("``````````")<<endl;
			break;
		case 1: cout <<FRED("_________")<<endl
					 <<FRED(" |     | ")<<endl
					 <<FBLU(" |   (x_x)")<<endl
					 <<FBLU(" |     | ")<<endl
					 <<FGRN(" |    /|\\")<<endl
					 <<FGRN(" |    / \\")<<endl
					 <<FYEL(" ````\\")<<endl
					 <<FYEL("      \\")<<endl;
			break;}
 numtries--;
 }
 }
if (numtries!=0) 
 {
  cout<<"Player 2 wins!"<<endl;
  cout << endl
  <<FRED("    (^_^)")<<endl
  <<FBLU("     \\|/ ")<<endl
  <<FGRN("      |")<<endl
  <<FYEL("     / \\")<<endl;
 }
 else 
 {
  cout<<"The computer wins!"<<endl;
 }
 cout<<"The word the computer gave was: "<<input<<endl;
 run=false;
 }
 else if(gameMode=="quit") 
 {
 run=false;
 }
 else 
 {
  cout<<"Please input only 1 or 2 or 'quit'."<<endl;
 }
}
endGame();
return 0;
}


