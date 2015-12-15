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

  
  


  




    
    return 0;
}

