#include <iostream>
#include <cmath>
int main(int argc, char* argv[]){

                long dec = 0;
                int count = 0;
        if (argc > 1){
                char *number = argv[1];
                int index = 0;
                char ch;
                while ((ch = number[index]) != '\0'){
                        if (ch >= '0' && ch <= '1' && index <= 64){
                                ++index;
                                ++count;
                        }
                        else if (index >= 64){
                                std::cout << "exceeded input limit" << std::endl;
                                return 1;
                        }
                        else {
                                std::cout << "unknown symbols" << std::endl;
                                return 1;
                        }
                }
        if (argc > 1){
                char *number = argv[1];
                int index = 0;
                char ch;
                while ((ch = number[index]) != '\0'){
                        if (ch >= '0' && ch <= '1' && index <= 64){
                                dec += (ch - '0') * pow(2, count - 1);
                                --count;
                                ++index;
                        }
                }
        }

        std::cout << dec << std::endl;
        }
        else{
                std::cout << "use: bin2dek binary_number" << std::endl;
                return 1;
        }
}
