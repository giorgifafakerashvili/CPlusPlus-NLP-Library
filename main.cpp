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
#include <cassert>

std::ostream& operator<<(std::ostream& out, const std::vector<std::string>& words) {
  out << "[";

  for(int i = 0; i < words.size(); i++) {
    out << words[i];

    if(i != words.size()-1)  {
      out << ", ";
    }
  }

  out << "]";
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


#include "freqdist.h"
#include "freqdist.cpp"

#include "text.h"
#include "text.cpp"

#include "utils.cpp"






int main() {

  Text a("1 2 giorg 3 nin"), b("3 giorgi nin 4 5");

  auto vec = a.Union(b);

  for(auto& i : vec) {
    std::cout << i << std::endl;
  }

  std::cout << std::endl << std::endl;

  for(auto& i : a.Intersection(b)) {
    std::cout << i << std::endl;
  }

  


  




    
    return 0;
}

