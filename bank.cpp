# Sololearn

#include <iostream>
#include <stdio.h>
#include <locale.h>
using namespace std;

int main() {

    setlocale(LC_ALL, "TURKİSH");

    // user information =  root78   pass = 9x8u2aesx 
    // cash = Turkish money
    int tercıh;
    double cash = 5000, convert;
    string  userinformation, password;

    cout << "...........................................:\n" << endl;
    cout << ".                                          .:\n" << endl;
    cout <<                                                   ".                                          .:\n" << endl;
    cout << "........................................... :\n" << endl;
    cout << "input a user information" << endl;
    cin >> userinformation;
    cout << "input a user  password:" << endl;
    cin >> password;

    if (userinformation == "root78" && password == "9x8u2aesx")
    {
        cout << "dollar=1,Euro=2,england pound=3, Qatar riyal=4" << endl;

            while (tercih < 1 || tercih > 4)
                {
                    cout << "please enter a selection" << endl;
                    cin >> tercih;
                }

        if (tercih == 1)

        {
            convert = cash / 6, 06;
            cout << "The transaction is completed and your money is translated." << convert << "dollar" << endl;
        }


        else if (tercih == 2)
        {
            convert = cash / 6, 56;
            cout << "The transaction is completed and your money is translated." << convert << endl;
        }

        else if (tercih == 3)
        {
            convert = cash / 7, 90;
            cout << "The transaction is completed and your money is translated." << convert << endl;
        }

        else if (tercih == 4)
        {
            convert = cash / 1, 66;
            cout << "The transaction is completed and your money is translated." << convert << endl;
        }


        else
        {
            cout << "wrong choice" << endl;
        }



    }
    else
    {

        cout << "user information is not correct" << endl;

    }


}
        //Sololearn'den kod paylaşımı p.tesi cuma günleri
  
  
  
  
  
  
