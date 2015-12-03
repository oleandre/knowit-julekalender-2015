#include <iostream>
#include <fstream>
#include <vector>

float getPrice(ifstream &in) {
  float price; in >> price;
  
  return price;
}

int main () {
  vector<float> Prices;
  float profit = 0.0;
  
  //add content to Prices vector
  ifstream list("list.txt");
  while (!list.oef()) Prices.push_back(getPrice(list));

  //get highest profit by subtracting highest and smallest price, in order
  int len = Prices.size();
  for (int i = 0; i < len; i++) {
    float current = Prices[i] + profit;
    for (int y = i; y < len; y++) if (current < Prices[y]) profit = Prices[i] - Prices[y];
  }
  
  //display answer and "pause" the console window
  std::cout << "Answer: " << profit;
  std::cin.get();
  
  return EXIT_SUCCESS;
}
