#include <iostream>
#include <string>
using namespace std;
 
 
int main()
{
    std::cout << "Please enter a martian number, or to stop, enter 'STOP'" << endl;
    std::string martianNumberInput;
    std::cin >> martianNumberInput;
    std::string str1 = ("@@@@@");
    std::string str2 = ("ZZ");
    std::string str3 = ("EEEEE");
    std::string str4 = ("&&");
    std::string str5 = ("BBBBB");
    std::string str6 = ("WW");
    std::string str7 = ("SSSSS");
    while (martianNumberInput != "STOP")
    {
        bool exists1 = martianNumberInput.find(str1);
        bool exists2 = martianNumberInput.find(str2);
        bool exists3 = martianNumberInput.find(str3);
        bool exists4 = martianNumberInput.find(str4);
        bool exists5 = martianNumberInput.find(str5);
        bool exists6 = martianNumberInput.find(str6);
        bool exists7 = martianNumberInput.find(str7);
        if ((exists1 == true) || (exists2 == true) || (exists3 == true) || (exists4 == true) || (exists5 == true) || (exists6 == true) || (exists7 == true))
            {
            std::cout << "This is an invalid number try again" << endl;
            std::cout << "Please enter a martian number, or to stop, enter 'STOP'" << endl;
            std::string martianNumberInput;
            std::cin >> martianNumberInput;
            if (martianNumberInput == "STOP")
            {
                break;
            }
        }
         
        else
        {
            int lengthOfMartian = martianNumberInput.length();
            cout << martianNumberInput;
             
        }
    }
     
    return 0;
}
