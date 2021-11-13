#include <iostream>
#include <array>
#include <algorithm>
int main() {
  const size_t Array__size = (5);
  const size_t Array__size__2 = (5);
  std::array<int,Array__size>Angka__asset;
  Angka__asset[0] = (0);
  Angka__asset[1] = (4);
  Angka__asset[2] = (2);
  Angka__asset[3] = (3);
  Angka__asset[4] = (1);
  std::cout << "[0] : " << Angka__asset[0] << std::endl;
  std::cout << "[1] : " << Angka__asset[1] << std::endl;
  std::cout << "[2] : " << Angka__asset[2] << std::endl;
  std::cout << "[3] : " << Angka__asset[3] << std::endl;
  std::cout << "[4] : " << Angka__asset[4] << std::endl;
    std::array<char,Array__size__2>Alphabet_Asset;
  Alphabet_Asset[0] = ('c');
  Alphabet_Asset[1] = ('b');
  Alphabet_Asset[2] = ('e');
  Alphabet_Asset[3] = ('a');
  Alphabet_Asset[4] = ('d');
  std::cout << std::endl;
  std::cout << "[0] : " << Alphabet_Asset[0] << std::endl;
  std::cout << "[1] : " << Alphabet_Asset[1] << std::endl;
  std::cout << "[2] : " << Alphabet_Asset[2] << std::endl;
  std::cout << "[3] : " << Alphabet_Asset[3] << std::endl;
  std::cout << "[4] : " << Alphabet_Asset[4] << std::endl;
  
  std::cout << std::endl;
  
  /*Here goes the algorithm*/
  std::sort(Angka__asset.begin(),Angka__asset.end());
   std::cout << "[0] : " << Angka__asset[0] << std::endl;
  std::cout << "[1] : " << Angka__asset[1] << std::endl;
  std::cout << "[2] : " << Angka__asset[2] << std::endl;
  std::cout << "[3] : " << Angka__asset[3] << std::endl;
  std::cout << "[4] : " << Angka__asset[4] << std::endl;
  
  std::cout << std::endl;
  
  std::sort(Alphabet_Asset.begin(),Alphabet_Asset.end());
  std::cout << "[0] : " << Alphabet_Asset[0] << std::endl;
  std::cout << "[1] : " << Alphabet_Asset[1] << std::endl;
  std::cout << "[2] : " << Alphabet_Asset[2] << std::endl;
  std::cout << "[3] : " << Alphabet_Asset[3] << std::endl;
  std::cout << "[4] : " << Alphabet_Asset[4] << std::endl;
  std::cin.get();
  return 0;
}