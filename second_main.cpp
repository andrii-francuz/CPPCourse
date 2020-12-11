#include <iostream>

using namespace std;

int main()
{
    /***********************
     *  Character type
     ***********************/
    char middle_initial{"J"};
    cout << "J is " << middle_initial << endl;
    /***********************
     *  Integer type
     ***********************/
    unsigned short int exam_score{55};
    cout << "Your score is " << exam_score << endl;
    
    int countries_represented{65};
    cout << "There were " << countries_represented << " countries represented in my meeting" << endl;
    
    long people_in_Florida{20610000};
    cout << "There are about "<< people_in_Florida << " people in Florida" << endl;
    
    long people_on_earth{7'600'000'000};
    cout << "There are about " << people_on_earth << "people on earth" << endl;
    
    long distance_to_alpha_centauri{9'461'000'000'000};
    cout << "There distance to alpha centauri is " << distance_to_alpha_centauri << " kilometers" << endl;
    
    /***********************
     *  Floating point type
     ***********************/
    float car_paymenu{401.23};
    cout << "My car payment is " << car_payment << endl;
    
    double pi{3.14159};
    cout << "Pi is" << pi << endl;
    
    long double large_amount{2.7e120};
    cout << large_amount << " is a very big number" << endl;
    
    /***********************
     *  Boolean type
     ***********************/
    bool gameOver{false};
    cout << "The value of gameOver is " << gameOver << endl;
    
    /***********************
     *  Overflow type
     ***********************/
     short value1{30000}
     short value2{1000}
     short sum{value1*value2};
     
     cout << "The sum of " << value1 << " and" << value2 << " is" << sum << endl;
    
    return 0;
}
