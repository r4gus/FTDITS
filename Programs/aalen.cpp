#include <iostream>
#include <string>
#include <unistd.h>

using namespace std;

string s1 = "      ___    ___";
string s2 = "     //\\\\   //\\\\";
string s3 = "    //  \\\\ //  \\\\";
string s4 = "   //    \\\\/    \\\\";
string s5 = "  //======\\\\=====\\\\";
string s6 = " //        \\\\     \\\\";
string s7 = "//          \\\\     \\\\";

void aalen(const string& src, string& dst)
{
    for (auto c : src)
    {
        if (c == '\n') break;

        dst += to_string( ((int) c) << 4);
        dst += " ";
    } 
}

int main(int argc, char** argv)
{
    /*
    if (argc < 2)
    {
        cout << "usage: " << argv[0] << " password" << endl;
        exit(1);
    }
    */

    cout << s1 << endl;
    sleep(1);
    cout << s2 << endl;
    sleep(1);
    cout << s3 << endl;
    sleep(1);
    cout << s4 << endl;
    sleep(1);
    cout << s5 << endl;
    sleep(1);
    cout << s6 << endl;
    sleep(1);
    cout << s7 << endl;
    sleep(1);

    string src;
    string dst;

    cout << "password: ";
    cin >> src;

    aalen(src, dst);

    
    if (dst == "1040 1040 1216 1104 1248 1968 1664 784 1072 1520 1824 1664 768 1088 768 848 1520 1664 784 1072 1520 848 832 1728 1856 832 2000 ")
    {
        cout << "BINGO!!!" << endl;
    } else {
        cout << "try again.." << endl;
    }
}

// AALEN{h1C_rh0D05_h1C_54lt4}
