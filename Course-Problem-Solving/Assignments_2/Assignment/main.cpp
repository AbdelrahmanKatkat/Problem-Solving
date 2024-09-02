// Assignment 2

// Question 1
//#include <iostream>
//#include <string>
//using namespace std;
//
//// Define number of steps
//// Loop the number by decreasing step
//// print the number
//int main()
//{
//    // Declare variables
//    int number=10; // Define number of steps
//
//    for (int i=number; i>=1; i--){
//
//        cout << i << " ";
//    }
//    return 0;
//}


// Question 2
//#include <iostream>
//#include <string>
//using namespace std;
//
//// Take 10 numbers from user
//// sum number in sum variable
//// print average -> /float
//int main()
//{
//    // Declare Variables
//    int number{}; // number Storage
//    int sum{}; // sum
//
//    // User input
//    for (int i=0; i<10;i++){
//
//        cout << "Enter a number" << endl;
//        cin >> number;
//        sum+=number;
//    }
//
//    cout << "Average " << (sum/10.0) <<endl;
//
//
//    return 0;
//}

// Question 3
//#include <iostream>
//#include <string>
//using namespace std;
//
//// Ask user for limit of multiplication and number
//// Make a loop with limit
//int main()
//{
//    // Declare variables
//    int m_table{};
//    int number{};
//
//    // User input
//    cout << "Enter the size of multiplication table" <<endl;
//    cin >> m_table;
//    cout << "Enter the number in multiplication table" <<endl;
//    cin >> number;
//
//    for(int i=1; i<=m_table; i++){
//
//        cout << i <<"*"<<number<<" = "<< (i*number) <<endl;
//
//    }
//
//    return 0;
//}



// Question 4
//#include <iostream>
//#include <string>
//using namespace std;
//
//// Ask user for n & m
//// loop from n to m and sum numbers between them
//int main()
//{
//    // Declare var
//    int n_start{};
//    int m_end{};
//    int sum{};
//
//    // User input
//    cout << "Enter Starting number n "<< endl;
//    cin >>n_start;
//    cout << "Enter Ending number m "<< endl;
//    cin >>m_end;
//
//
//    for(int i=n_start; i<=m_end; i++){
//
//        sum+=i;
//    }
//
//    cout << "The sum = "<< sum;
//    return 0;
//}



// Question 5
//#include <iostream>
//#include <string>
//using namespace std;
//
//// Ask user for infinite number -> use long long to get big numbers
//// stop the loop only if negative insert ( While is easier )
//
//int main()
//{
//    // Declare var
//    long long int number{}; // user input
//    int sum{};    // Sum of integers
//
//    cout << "This software will sum integers numbers "<<endl;
//    // user input
//    while (number>=0){
//
//        cout << "Enter an integer number"<< endl;
//        cin >> number;
//        if (number>=0){
//            sum+=number;
//        }
//
//    }
//
//    cout << "The sum = "<< sum;
//
//    return 0;
//}



// Question 6
//#include <iostream>
//#include <string>
//using namespace std;
//
//// Ask user for infinite number
//// stop the loop only if negative insert ( While is easier )
//// Store max value in temp and compare every loop
//
//int main()
//{
//    // Declare var
//    int number{};   // user input
//    int max_temp=number; // Maximum value
//
//    cout << "This software will get max of integers numbers "<<endl;
//    // user input
//    while (number>=0){
//
//        cout << "Enter an integer number"<< endl;
//        cin >> number;
//        if (number >= max_temp){
//            max_temp=number;
//        }
//
//    }
//
//    cout << "Max Number = "<< max_temp;
//
//    return 0;
//}


// Question 7
//#include <iostream>
//#include <string>
//using namespace std;
//
//// Take a number from user
//// Make a counter for steps to reach 0 -> outside of for loop scope
//// Make 2 conditions odd & even
//int main()
//{
//    // Declare var
//    int number{};
//    int counter{};
//
//    // User input
//    cout << "This App will get number of steps for a number to reach 0" <<endl<<endl;
//    cout << "Enter a number" << endl;
//    cin >>number;
//
//
//    // Counter loop
//    for ( int i =1; number>0; i++){
//
//        if (number%2!=0){
//
//            number-=1;
//
//        }
//        else if (number%2==0){
//
//            number/=2;
//
//        }
//
//        counter=i; // Make a counter outside of for loop scope
//    }
//
//    cout << "Number of Steps = " << counter<< endl;
//    return 0;
//}




// Question 8
//#include <iostream>
//#include <string>
//using namespace std;
//
//// Take number and power from user
//// make a loop to multiply number by itself same number as power
//int main()
//{
//    // Declare var
//    int number{}; // The number
//    int power{}; // The power
//    int num_power{}; // The result of num^power
//
//
//    // User input
//    cout << "Enter a number" << endl;
//    cin >> number;
//    num_power=number;
//
//
//    cout << "Enter the power "<< endl;
//    cin >> power;
//
//    for (int i=power-1; i!=0; i--){
//
//        num_power*=number;
//
//    }
//    cout << "The result of power operation = " <<num_power<< endl;
//    return 0;
//}



// Question 9
//#include <iostream>
//#include <string>
//using namespace std;
//
//// Take 10 numbers from user by a loop
//// If odd add it to a counter otherwise continue
//int main()
//{
//    // Declare var
//    int number{};
//    int counter{};
//
//
//    // User input
//    for (int i=0; i<10; i++){
//
//        cout << "Enter a number" <<endl;
//        cin >> number;
//
//        if (number%2!=0){
//            counter++;
//        }
//    }
//
//    cout << "The count of odd numbers = " << counter;
//    return 0;
//}



// Question 10
//#include <iostream>
//#include <string>
//using namespace std;
//
//// Take 2 int from user
//// Try to divide both of them on same number from 1 to the min of both of them
//// Store the max in max_num and change with trials
//int main()
//{
//    // Declare var
//    int num_1{}, num_2{};
//    int max_num{};
//    int temp{};
//
//    // User input
//    cout << "Enter number 1 = ";
//    cin >> num_1;
//    cout << "Enter number 2 = ";
//    cin >> num_2;
//
//    // Get minimum number of num_1 & num_2
//    if (num_1 > num_2){
//        temp=num_1;
//    }
//    else{
//        temp=num_2;
//    }
//
//    for (int i=1; i<=temp; i++){
//
//        if (num_1%i==0 && num_2%i==0){
//            if (i>max_num){
//
//                max_num=i;
//            }
//        }
//    }
//
//    cout <<"Greatest Common Divisor of the two numbers = " << max_num << endl ;
//    return 0;
//}



// Question 11
//#include <iostream>
//#include <string>
//using namespace std;
//
//// Take 10 numbers from user as array
//// User bubble sort ( Make a temp, make 2 loops i,j )
//// Print the second
//int main()
//{
//    // Declare var
//    int numbers [10];
//    int temp{};
//
//
//    for (int x=0; x<10;x++){
//
//        cout << "Enter a Number " <<endl;
//        cin >> numbers[x];
//    }
//
//
//    for (int i=0; i<9; i++){
//
//        for (int j=0; j<9; j++){
//
//            if (numbers[j+1]>numbers[j]){
//
//                temp=numbers[j];
//                numbers[j]=numbers[j+1];
//                numbers[j+1]=temp;
//            }
//        }
//
//    }
//
//
//
//    cout << "The second max number= " << numbers[1]<<endl;
//
//    return 0;
//}




// Question 12
//#include <iostream>
//#include <string>
//using namespace std;
//
//
//// Take number from user
//// count steps from decimal to binary
//// Perform conversion by % then /
//// Store values in an array of int
//// print the array with no endl
//int main()
//{
//    // Declare var
//    int number{}; // Decimal number
//    int steps = 0; // step to convert decimal to binary
//
//    // User input
//    cout << "Enter a number " << endl;
//    cin >> number;
//
//    // Count Steps to turn decimal to binary
//    int temp = number;
//    while (temp != 0) {
//        steps++;
//        temp /= 2;
//    }
//
//    // Store Steps values
//    int binary[steps] = {};
//    for (int j = steps - 1; j >= 0; j--) {
//        binary[j] = number % 2;
//        number /= 2;
//    }
//
//
//    for (int x = 0; x < steps; x++) {
//        cout << binary[x];
//    }
//    cout << endl;
//
//    return 0;
//}




// Question 13
#include <iostream>
#include <string>
using namespace std;

// Get number by %
// Store in reverse loop
int main()
{
    // Declare vars
    return 0;
}



// Question 14
//#include <iostream>
//#include <vector>
//using namespace std;
//
//// Ask user for vector size
//// Store line as vector
//// count odd, even, pos, and neg
//int main()
//{
//    //User input
//    int n{};
//    cout << "Enter the N number: "<<endl;
//    cin >> n;
//
//    cout << "Enter the numbers line " << endl;
//    vector <int> numbers(n);
//    for(int i=0; i<n; i++){
//
//        cin >> numbers[i];
//    }
//
//
//    // Count cases
//    int even_count = 0, odd_count = 0, pos_count = 0, neg_count = 0;
//
//    for(int i=0; i<n; i++){
//
//        if (numbers[i]%2==0){
//
//            even_count++;
//        }
//        else if (numbers[i]%2!=0){
//
//            odd_count++;
//        }
//        if (numbers[i]>0){
//
//            pos_count++;
//        }
//        else if (numbers[i]<0){
//
//            neg_count++;
//        }
//
//    }
//
//
//    cout << "Even: " << even_count << endl;
//    cout << "Odd: " << odd_count << endl;
//    cout << "Positive: " << pos_count << endl;
//    cout << "Negative: " << neg_count << endl;
//
//    return 0;
//}
