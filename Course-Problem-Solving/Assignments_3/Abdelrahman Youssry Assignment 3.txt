// Assignment 3


// Question 1
//
//#include <iostream>
//#include <string>
//
//using namespace std;
//// Take input from user which will be the height of triangle
//// Print each number till the height by there number in the loop'
//// print till the number limit itself in the inner loop
//int main()
//{
//    // Declare var
//    int height{};
//
//
//    // Take user input
//    cout << "Enter a number: ";
//    cin >> height;
//
//
//    for (int num=1; num<=height; num++){
//        for (int i=0; i<num; i++){
//            cout << num;
//
//        }
//        cout << endl;
//
//    }
//
//
//
//    return 0;
//}

/////////////////////////////////////////////////////

// Question 2

//#include <iostream>
//#include <string>
//
//using namespace std;
//// Take input from user which will be the height of triangle
//// Print each number till the height by there number in the loop'
//// print till the number limit itself in the inner loop
//int main()
//{
//    // Declare var
//    int height{};
//
//
//    // Take user input
//    cout << "Enter a number: ";
//    cin >> height;
//
//
//    for (int num=1; num<=height; num++){
//        for (int i=0; i<num; i++){
//
//                if (i==0 || i==num -1){
//                    cout << "*";
//                }
//                else{
//                    cout <<" ";
//                }
//
//        }
//
//
//        cout << endl;
//
//
//    }
//    for (int i=0; i<height; i++){
//
//            cout<< "*";
//
//    }
//
//    return 0;
//}


/////////////////////////////////////////////////////
// Question 3

//#include <iostream>
//#include <string>
//
//using namespace std;
//// Take input from user which will be the height of triangle
//// Print each number till the height by there number in the loop'
//// print till the number limit itself in the inner loop
//int main()
//{
//    // Declare var
//    int height{};
//
//
//    // Take user input
//    cout << "Enter a number: ";
//    cin >> height;
//
//
//    for (int num=height; num>=1; num--){
//        for (int i=0; i<num; i++){
//            cout << '*';
//
//        }
//        cout << endl;
//
//    }
//
//
//
//    return 0;
//}

/////////////////////////////////////////////////////

// Question 4

//#include <iostream>
//#include <string>
//
//using namespace std;
//// Take input from user
//// Use % to get possible divisor
//// Make a counter and if the counter is larger than 2 make non prime
//// Go till the half only
//
//int main()
//{
//    // Declare var
//    int number{};
//    int counter{};
//
//
//    // Take user input
//    cout << "Enter a number: ";
//    cin >> number;
//
//
//    for (int num=1; num<=number; num++){
//
//        for (int n=1; n<=num; n++){
//
//            if (num%n==0){
//                counter++;
//
//            }
//            if (counter>2){
//                cout << num<< " ";;
//                break;
//            }
//
//
//        }
//        counter=0;
//    }
//
//
//
//    return 0;
//}

/////////////////////////////////////////////////////

// Question 5
//
//#include <iostream>
//#include <string>
//
//using namespace std;
//// Take input from user
//// Make a string with all numbers as text
//// loop in it and use % to get the units
//// I will use string but I can use switch case too
//
//int main()
//{
//    // Declare var
//    int number{};
//    int number_copy{};
//    int onRight{};
//    int rev{};
//    string num_text[10]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
//
//
//    // Take user input
//    cout << "Enter a number: ";
//    cin >> number;
//    number_copy=number;
//
//    while (number_copy){
//
//        onRight=number_copy%10;
//        number_copy/=10;
//        rev=rev*10+onRight;
//
//    }
//
//
//    while(rev){
//
//        cout<< num_text[rev%10] <<" ";
//        rev/=10;
//
//    }
//
//
//
//    return 0;
//}


// 1D Array Tasks: Assume the size of array to be 10 or 5 or as you like:

// Question 6

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main() {
//    // Declare variables
//    int even_count = 0;
//    int odd_count = 0;
//    int number[10];
//
//    // Take user input
//    for (int i = 0; i < 9; i++) {
//        cout << "Enter array element number " << i+1 << ": ";
//        cin >> number[i];
//    }
//
//    for (int i = 0; i < 9; i++) {
//        if (number[i] % 2 == 0) {
//            even_count++;
//        } else {
//            odd_count++;
//        }
//    }
//
//    cout << "Total even elements: " << even_count << endl;
//    cout << "Total odd elements: " << odd_count << endl;
//
//    return 0;
//}



/////////////////////////////////////////////////////

// Question 7
//
//#include <iostream>
//#include <string>
//
//using namespace std;
//// Define array & Traget
//int main() {
//    // Declare variables
//    int number[10];
//    int target;
//    int index{};
//
//    cout << "What is the element you are searching for?"<< endl;
//    cin >> target;
//
//    // Take user input
//    for (int i = 0; i <=9; i++) {
//        cout << "Enter array element number " << i+1 << ": ";
//        cin >> number[i];
//        if (number[i]==target){
//            index=i;
//        }
//    }
//
//    cout << "Element found at index: " << index << endl;
//
//    return 0;
//}

/////////////////////////////////////////////////////

// Question 8

//
//#include <iostream>
//#include <string>
//
//using namespace std;
//// Define array & Traget
//int main() {
//    // Declare variables
//    int number[10];
//    int target;
//    int counter{};
//
//    cout << "What is the element you are searching for?"<< endl;
//    cin >> target;
//
//    // Take user input
//    for (int i = 0; i <8; i++) {
//        cout << "Enter array element number " << i+1 << ": ";
//        cin >> number[i];
//        if (number[i]==target){
//            counter++;
//        }
//    }
//
//    cout << "Number of occurrences of "<<target<<":" << counter <<endl;
//
//    return 0;
//}

/////////////////////////////////////////////////////

// Question 9

//#include <iostream>
//#include <string>
//
//using namespace std;
//// Define array 1 & array 2
//// Copy elements by indexing
//int main() {
//    // Declare variables
//    int arr_2[10];
//    int arr_1[10];
//
//
//    // Take user input
//    for (int i = 0; i <=9; i++) {
//        cout << "Enter array element number " << i+1 << ": ";
//        cin >> arr_1[i];
//    }
//
//    for (int i = 0; i <=9; i++) {
//        arr_2[i]=arr_1[i];
//    }
//
//    cout << endl;
//    cout << "Array1:";
//    for (int i = 0; i <=9; i++) {
//        cout<< arr_1[i]<< " ";
//    }
//
//    cout << endl<< endl;
//    cout << "Array2:";
//    for (int i = 0; i <=9; i++) {
//        cout<<arr_2[i]<<" ";;
//    }
//
//    return 0;
//}


/////////////////////////////////////////////////////

// Question 10

//#include <iostream>
//#include <string>
//
//using namespace std;
//// Define array 1 & array 2
//// array 1 input user & array 2 frequency
//// print out based on frequency
//int main() {
//
//    // Declare variables
//    int arr[10]{};
//    int arr_freq[10]{};
//
//
//    // Take user input
//    for (int i = 0; i <=9; i++) {
//        cout << "Enter array element number " << i+1 << ": ";
//        cin >> arr[i];
//    }
//
//    for (int i = 0; i <=9; i++) {
//        for (int n=0; n<=9; n++){
//            if(arr[i]==arr[n]){
//                arr_freq[i]++;
//            }
//        }
//
//    }
//
//
//    cout <<"All unique elements in the array are: ";
//    for (int i = 0; i <=9; i++) {
//        if (arr_freq[i]==1 ){
//            cout<< arr[i]<<",";
//        }
//
//
//    }
//
//
//    return 0;
//}


/////////////////////////////////////////////////////

// Question 11

//#include <iostream>
//#include <string>
//
//using namespace std;
//// Define number arrays
//// Make nested loops to sum element with all other elements with each loop shift starting point
//int main() {
//
//    // Declare variables
//    int numbers[10]{};
//
//
//    // Take user input
//    for (int i = 0; i <=7; i++) {
//        cout << "Enter array element number " << i+1 << ": ";
//        cin >> numbers[i];
//    }
//
//    cout << endl;
//
//    // Check on sum
//    for (int i = 0; i <=7; i++) {
//        for (int n=i; n<=7; n++){  // Start from i to avoid repeated values
//            if(numbers[i]+numbers[n]==numbers[7] && i!=n){
//                cout << numbers[i]<< "," <<numbers[n]<< endl;;
//            }
//        }
//
//
//    }
//    return 0;
//}
/////////////////////////////////////////////////////

// Question 12

//#include <iostream>
//#include <string>
//#include<vector>
//using namespace std;
//// Take array input
//// sum elements
//// use % to check on odd or even
//int main(){
//
//    // Declare variables
//    int number{};
//    int sum{};
//    vector <int> arr_user;
//
//    int flag=1;
//    char input='y';
//
//    string result;
//
//
//    // Ask user for elements
//    while (flag){
//
//        cout << "Enter Array Element" << endl;
//        cin >> number;
//        arr_user.push_back(number);
//
//        cout << "Continue (y/n) "<< endl;
//        cin >> input;
//        switch (towlower(input)){
//            case 'y':
//                flag=1;
//                break;
//            case 'n':
//                flag=0;
//                break;
//        }
//    }
//    for (int i=0; i<=arr_user.size();i++){
//
//        sum+=arr_user[i];
//
//    }
//    result =(sum % 2 == 0) ? "even" : "odd";
//    cout << result;
//    return 0;
//}
/////////////////////////////////////////////////////

// Question 13

//#include <iostream>
//#include <string>
//#include<vector>
//using namespace std;
//// Take array input
//// Copy Elements but as negative
//int main(){
//
//    // Declare variables
//    int element{};
//    vector <int> arr_user;
//    vector <int> arr_add_inv;
//
//    int flag=1;
//    char input='y';
//
//    // Ask user for elements
//    while (flag){
//
//        cout << "Enter Array Element" << endl;
//        cin >> element;
//        arr_user.push_back(element);
//
//        cout << "Continue (y/n) "<< endl;
//        cin >> input;
//        switch (towlower(input)){
//            case 'y':
//                flag=1;
//                break;
//            case 'n':
//                flag=0;
//                break;
//        }
//    }
//    cout << "Additive Inverse Array : ";
//    for (int i=0; i<arr_user.size();i++){
//
//        arr_add_inv.push_back(-1*arr_user[i]);
//        if (i!=(arr_user.size()-1)){
//            cout << arr_add_inv[i]<< ",";
//        }
//        else{
//            cout << arr_add_inv[i];
//        }
//
//
//    }
//
//    return 0;
//}

/////////////////////////////////////////////////////

// Question 14
//
//#include <iostream>
//#include <string>
//#include<vector>
//using namespace std;
//// Take array input
//// Copy Elements but as double
//int main(){
//
//    // Declare variables
//    int element{};
//    vector <int> arr_user;
//    vector <int> arr_double;
//
//    int flag=1;
//    char input='y';
//
//    // Ask user for elements
//    while (flag){
//
//        cout << "Enter Array Element" << endl;
//        cin >> element;
//        arr_user.push_back(element);
//
//        cout << "Continue (y/n) "<< endl;
//        cin >> input;
//        switch (towlower(input)){
//            case 'y':
//                flag=1;
//                break;
//            case 'n':
//                flag=0;
//                break;
//        }
//    }
//    cout << "Doubled Array : ";
//    for (int i=0; i<arr_user.size();i++){
//
//        arr_double.push_back(2*arr_user[i]);
//        if (i!=(arr_user.size()-1)){
//            cout << arr_double[i]<< ",";
//        }
//        else{
//            cout << arr_double[i];
//        }
//
//
//    }
//
//    return 0;
//}

/////////////////////////////////////////////////////

// Question 15

//#include <iostream>
//#include <string>
//#include<vector>
//using namespace std;
//// Take array input
//// Make another array of flag
//// if 0 then not unique, if 2 then repeated, if 1 then it does not have a negative value with it in array
//int main() {
//    // Declare variables
//    int element{};
//    vector<int> arr_user;
//
//    bool flag = 1;
//    char input = 'y';
//
//    // Ask user for elements
//    while (flag) {
//        cout << "Enter Array Element" << endl;
//        cin >> element;
//        arr_user.push_back(element);
//
//        cout << "Continue (y/n)" << endl;
//        cin >> input;
//        switch (tolower(input)) {
//            case 'y':
//                flag = 1;
//                break;
//            case 'n':
//                flag = 0;
//                break;
//        }
//    }
//    cout << "The size of arr is:" << arr_user.size() << endl;
//
//    vector<int> arr_uniq(arr_user.size(), 1);  // Initial value - Assume all target
//
//    for (int i = 0; i < arr_user.size(); i++) {
//        for (int n = i + 1; n < arr_user.size(); n++) {
//            if (arr_user[i] == -1 * arr_user[n]) {
//                arr_uniq[i] = 0;
//                arr_uniq[n] = 0;
//            }
//            if (arr_user[i] ==  arr_user[n]){
//                arr_uniq[i]=2;
//                arr_uniq[n]=2;
//            }
//        }
//    }
//
//    for (int i = 0; i < arr_user.size(); i++) {
//        if (arr_uniq[i] == 1) {
//            cout << arr_user[i] << " Has no matching positive appearance" << endl;
//        }
//        if (arr_uniq[i]==2){
//            cout << arr_user[i] << " Has no matching positive appearance & is repeated" << endl;
//            break;
//        }
//    }
//
//    return 0;
//}
/////////////////////////////////////////////////////

// Question 16

//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//
//// Take  an array of fixed size
//// To assign it in place iterate from the front starting from index and shift
////
//int main(){
//
//    // Declare var
//    int arr[5]{};
//    int index{};
//
//
//
//    // Take user input
//    cout << "Enter Array Elements: "<< endl;
//    for (int i=0; i<5;i++){
//
//        cin>> arr[i];
//    }
//    cout << "Enter location of element to be removed: "<< endl;
//    cin>> index;
//
//    for (int i=index-1; i<5; i++){
//
//        arr[i]=arr[i+1];
//        //cout << arr[i]<<endl;
//    }
//
//    // New Array Code
//    int size = (sizeof(arr) / sizeof(arr[0]))-1;
//    int arr_new[size];
//
//    cout << "Output: Array elements: " ;
//    for (int i=0; i<size; i++){
//        arr_new[i]=arr[i];
//        cout<<arr_new[i]<< " ";
//    }
//    return 0;
//
//}

/////////////////////////////////////////////////////

// Bonus

// Question 1
//#include <iostream>
//#include <vector>
//#include <string>
//#include <cmath>
//using namespace std;
//
//// Take number of rows from user
//// Get the center num which is middle of * count 2(n-1)+1
//// loop and with each loop add * * outside the center
//int main(){
//
//    // Declare variables
//    int num_rows{};
//
//    // Ask user input
//    cout << "Enter number of rows: " << endl;
//    cin >> num_rows;
//
//    int star_count=(2*(num_rows-1)+1);
//    int middle_num=ceil(star_count/2.0)-1;
//
//
//
//    for (int i=0; i<num_rows; i++){
//        for (int j=0; j<star_count; j++){
//
//            if (j == middle_num || (middle_num - i <= j && j <=middle_num + i)){
//
//                cout << "*";
//
//            }
//            else{
//                cout << " ";
//            }
//        }
//        cout << endl;
//
//    }
//
//
//
//    return 0;
//
//}







// Question 2

//#include <iostream>
//#include <vector>
//#include <string>
//#include <cmath>
//using namespace std;
//
//// Take number of rows from user
//// Start from the end to the start in the outer loop
//// print " " or "*" and add one space with each loop -> The condition is the hard part ( Trial & Error )
//int main(){
//
//    // Declare variables
//    int num_rows{};
//
//    // Ask user input
//    cout << "Enter number of rows: " << endl;
//    cin >> num_rows;
//
//
//
//    for (int i=num_rows-1; i>=0; i--){
//        for (int j=0; j<(2*num_rows-1); j++){
//
//            if (j<i || j>(num_rows+i-1)){
//
//                cout << " ";
//
//            }
//            else{
//                cout << "*";
//            }
//        }
//        cout << endl;
//
//    }
//
//
//
//    return 0;
//
//}





// Question 3


//#include <iostream>
//#include <vector>
//#include <string>
//#include <cmath>
//using namespace std;
//
//// Take number of rows from user
//// Get the middle number which is the rows count
//// loop and with each loop add * * outside the center
//int main(){
//
//    // Declare variables
//    int num_rows{};
//
//    // Ask user input
//    cout << "Enter number of rows: " << endl;
//    cin >> num_rows;
//
//    int star_count=(2*(num_rows));
//    int middle_num=num_rows;
//
//
//
//    for (int i=0; i<num_rows; i++){
//        for (int j=0; j<star_count; j++){
//
//            if (j == middle_num || (middle_num - i <= j && j <=middle_num + i)){
//
//                cout << "*";
//
//            }
//            else{
//                cout << " ";
//            }
//        }
//        cout << endl;
//
//    }
//
//    for (int i=num_rows-1; i>=0; i--){
//        for (int j=0; j<star_count; j++){
//
//            if (j == middle_num || (middle_num - i <= j && j <=middle_num + i)){
//
//                cout << "*";
//
//            }
//            else{
//                cout << " ";
//            }
//        }
//        cout << endl;
//
//    }
//
//
//    return 0;
//
//}


// Question 4

//
//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//// Take 3 numbers in array
//// loop from 1 till N=arr[0] and nested loop is while(number)
//// add condition in nested loop to get digits % & / also sum them
//int main(){
//
//    // Declare var
//    int user_in[3]{};
//    int n_num{};  //
//    int sum_digits{};
//    int result{};
//
//    // Take user input
//    cout << "Enter N, A, B separated by space: "<< endl;
//
//    for (int i=0; i<3; i++){
//        cin >> user_in[i];
//    }
//
//    for(int i=1; i<=user_in[0]; i++){
//        // Get temp holder for i
//        n_num=i;
//
//        // Get Digits of i
//        while(n_num){
//            sum_digits+=n_num%10;
//            n_num/=10;
//        }
//
//        // Check if sum digit in range
//        //cout << sum_digits << endl;
//        if (sum_digits>= user_in[1] && sum_digits<=user_in[2]){
//                result+=i;
//                //cout << result << endl;
//            }
//        // reset sum_digits
//        sum_digits=0;
//    }
//    cout << result << endl;
//
//
//
//    return 0;
//
//}
