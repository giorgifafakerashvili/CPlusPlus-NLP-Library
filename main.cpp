#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <list>
#include <queue>
#include <stack>
#include <algorithm>
#include <set>
#include <unordered_set>
#include <string>

#include "freqdist.h"
#include "freqdist.cpp"


std::vector<std::string> readFile(const std::string& fileName) {
  std::vector<std::string> vec;

  // Here must be implementation of reading words from file line by line 
  // There must be one word on each liine


  return vec;
}



std::vector<std::string> split(const std::string& text, char tokenizer = ' ') {
  std::vector<std::string> vec;


  std::string str = "";
  int i = 0;
  for(;i < text.size(); i++) {
    if(text[i] == tokenizer) {
      if(str != " " && str.size() > 0) 
        vec.push_back(str);
      str = "";
    } else {
      str+=text[i];
    }
  }

  if(str != " " && str.size() > 0)
    vec.push_back(str);

  return vec;
}
  

class Tokenize  {
private:
  std::vector<std::string> words;

public:
  Tokenize() {}
  ~Tokenize() {}

  std::vector<std::string> WordTokenize(const std::string& text) {
    return split(text, ' ');
  }

  std::vector<std::string> LineTokenize(const std::string& text) {
    return split(text, '\n');
  }

  std::vector<std::string> TabTokenize(const std::string& text) {
    return split(text, '\t');
  }

  std::vector<std::string> CharTokenize(const std::string& text, char delimiter = ' ') {
    return split(text, delimiter);
  }

};






int main() {

  Tokenize tokens;
  std::vector<std::string> words = tokens.CharTokenize("giorgi nini nini mari mari mari luka luka luka luka", ' ');

  
  FreqDist freq(words);

  std::vector<std::string> vec = freq.words();

  for(int i = 0; i < vec.size(); i++) {
    std::cout << vec[i] << " ";
  }

  std::cout << freq.count("giorgi") << std::endl;
  std::cout << freq.count("nini") << std::endl;
  std::cout << freq.count("mari") << std::endl;
  

  std::cout << std::endl << std::endl;

  std::cout << freq << std::endl;


  std::cout << std::endl << std::endl;

  std::cout << freq["giorgi"] << std::endl;
  std::cout << freq["luka"] << std::endl;

  std::cout << freq["nothing"] << std::endl;

  freq["giorgi"]++;

  std::cout << freq["giorgi"] << std::endl;

  freq["giorgi"] = 100;

  std::cout << freq["giorgi"] << std::endl;

  



  


  




    
    return 0;
}

