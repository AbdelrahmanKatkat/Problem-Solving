// Assignment 5


// Question 1
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//// input function logic
//    // no returns -> void function
//    // Print only -> Transverse on elements
//// Code logic
//    // function
//    // Take user input in heap
//
//void print_arr(int arr[],int _size){
//
//    cout << "Array Elements: " ;
//    for (int i=0;i<_size;i++){
//        cout << arr[i] <<" ";
//    }
//}
//int main()
//{
//    // Take user input
//    int size{};
//    cout << "Enter the size of arr" << endl;
//    cin >> size;
//
//    int* arr= new int[size];
//    cout << "Enter the array elements" << endl;
//    for (int i=0;i<size;i++){
//        cin>> arr[i];
//    }
//
//    print_arr(arr, size);
//
//    return 0;
//}

/////////////////////////////////////////////////////

// Question 2
////
//#include <iostream>
//#include <string>
//using namespace std;
//
//// input function logic
//    //  returns sum -> int function
//    // Print only -> Transverse on elements and sum them in sum
//// Code logic
//    // function
//    // Take user input in heap
//
//int sum_arr(int arr[],int _size){
//    int sum{};
//
//    for (int i=0;i<_size;i++){
//        sum=sum+arr[i];
//    }
//    return sum;
//}
//int main()
//{
//    // Take user input
//    int size{};
//    cout << "Enter the size of arr" << endl;
//    cin >> size;
//
//    int* arr= new int[size];
//    cout << "Enter the array elements" << endl;
//    for (int i=0;i<size;i++){
//        cin>> arr[i];
//    }
//
//    cout << "The sum is:" << sum_arr(arr, size);
//
//    return 0;
//}


/////////////////////////////////////////////////////
// Question 3

//#include <iostream>
//#include <string>
//
//using namespace std;
//// Code logic:
//    // Define matrix in heap ( Pointer of pointers )
//    //
//// class logic:
//    // public Take rows and column
//    // Generate matrix
//    // Ask user for input & return matrix
//    // Free matrix
//
//class Matrix_maker {
//
//public:
//    // Attributes
//    int rows;
//    int columns;
//
//
//    // Gen Matrix Method
//    int** matrix_gen(){
//
//        // Define the matrix
//        int** matrix= new int*[rows];
//        for (int i=0; i<rows; i++){
//            matrix[i] =new int[columns];
//        }
//
//        return matrix;
//    }
//
//
//
//    // Populate Matrix
//    int** matrix_populate(int** matrix){
//
//        cout << "Enter the matrix Elements: " << endl;
//        for (int i=0;i<rows; i++){
//            for (int j=0; j<columns; j++){
//                cin >> matrix[i][j];
//            }
//        }
//        return matrix;
//    }
//
//    // Free Matrix
//    void matrix_free(int** matrix){
//        for (int i=0; i<rows; i++){
//            delete [] matrix[i];
//        }
//        delete [] matrix;
//    }
//};
//
//
//int main(){
//
//    // Take user input
//    int** matrix;
//    int sum{};
//
//    Matrix_maker mat;
//    cout << "Enter the rows & columns" << endl;
//    cin>> mat.rows>> mat.columns;
//
//    matrix=mat.matrix_gen();
//    mat.matrix_populate(matrix);
//
//    for (int i=0; i<mat.rows;i++){
//        for (int j=0;j<mat.columns; j++){
//            if (j==i){
//                sum+=matrix[i][j];
//            }
//
//        }
//
//    }
//
//    cout << "Sum of Diagonal = "<< sum<< endl;
//
//    // Free pointer to rows
//    mat.matrix_free(matrix);
//
//    return 0;
//}

/////////////////////////////////////////////////////

// Question 4
//
//#include <iostream>
//#include <string>
//
//using namespace std;
//// Code logic:
//    // count repeat take element and word
//    // Check if checked by stopping at current index in the word
//
//
//// Freq counter
//int freq_count( char current_element, string word){
//    int counter;
//    for (int i=0;i<word.size();i++){
//        if (current_element==word[i]){
//            counter++;
//        }
//    }
//
//    return counter;
//
//}
//
//// Check if checked
//bool checked_char( string word, int current_index){
//
//    for (int i=0; i< current_index; i++){
//        if (word[current_index]==word[i]){
//            return 1;
//        }
//    }
//    return 0;
//
//}
//
//int main(){
//
//
//    int max_freq=0;
//    char max_repeat;
//
//    // Take user input
//    string word;
//    cout << "Enter a string" << endl;
//    getline(cin, word);
//
//    for( int i=0; i<word.size(); i++){
//        if (!(checked_char(word,i))){
//            if (freq_count(word[i], word)>max_freq){
//                max_repeat=word[i];
//                max_freq=freq_count(word[i], word);
//            }
//        }
//    }
//    cout << "The maximum repeated Chart is:" <<max_repeat << endl;
//
//    return 0;
//}

/////////////////////////////////////////////////////

// Question 5

//#include <iostream>
//#include <string>
//
//using namespace std;
//// code logic:
//    // Take string
//    // Function to lower string
//// Lower logic:
//    // Take a char
//    // Check if char in what range
//    // subtract 32 if upper
//
//void lower_maker(char& current_element){
//
//    if (current_element>='A'&& current_element<='Z'){
//        current_element+=32;
//    }
//
//}
//int main(){
//
//
//    // Take user input
//    string word;
//    cout << "Enter a string: "<< endl;
//    getline(cin, word);
//
//    for (int i=0;i <word.size(); i++){
//        lower_maker(word[i]);
//    }
//
//
//    cout << "The new word: "<< word << endl;
//
//
//
//
//
//    return 0;
//}


// Question 6

//#include <iostream>
//using namespace std;
//#include <string>
//
//// Code logic
//    // Function to check a digit or not
//    // Loop through elements and change flag
//
//
//bool isDigit(char current_element){
//    int arr[10]{0,1,2,3,4,5,6,7,8,9};
//    bool flag=false;
//    int size=sizeof(arr)/sizeof(arr[0]);
//
//    for (int i=0; i<size; i++){
//        if ((int(current_element)-48)==arr[i]){
//
//            flag=true;
//            return flag;
//        }
//    }
//    return flag;
//
//}
//int main(){
//
//    bool flag=true;
//    // Take user input
//    string word;
//    cout << "Enter a string: "<< endl;
//    getline(cin, word);
//
//    for (int i=0;i <word.size(); i++){
//        if (!isDigit(word[i])){
//            flag=false;
//            cout << "False" << endl;
//            break;
//        }
//    }
//    if (flag){
//        cout << "True"<< endl;
//    }
//
//
//
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
//
//int reverse_fun(int number, int rev_num){
//
//    if (number==0){
//        return rev_num;
//    }
//
//    return reverse_fun((number/10),rev_num*10+number%10);
//
//}
//int main()
//{
//    // Take user input
//    int number{};
//    cout << "Enter a number "<< endl;
//    cin >> number;
//
//    cout << "The reversed number is: "<< reverse_fun(number,0)<< endl;
//
//    return 0;
//}

/////////////////////////////////////////////////////

// Question 8

//#include <iostream>
//#include <string>
//
//using namespace std;
//// Function num_arr:
//    // Take a number as string
//    // Store the values of number in an array
//// Function max_num
//    // Take an array and get the max in it
//int size_arr(int number){
//
//    // Calculate size of number
//    int temp=number;
//    int size_num;
//    while (temp){
//        size_num++;
//        temp/=10;
//    }
//
//    return size_num;
//}
//
//int* num_arr(int number, int size_num){
//
//    // Generate the array
//    int temp=number;
//    int* arr= new int[size_num];
//    for( int i=0; i<size_num;i++){
//        arr[i]=temp%10;
//        temp/=10;
//    }
//    return arr;
//
//}
//
//int max_arr( int arr[], int size_num){
//
//    int max_num=arr[0];
//    for (int i=0; i<size_num; i++){
//        if(arr[i]>max_num){
//            max_num=arr[i];
//        }
//    }
//    return max_num;
//}
//
//
//int main(){
//
//    // Take user input
//    int number;
//    cout << "Enter a number:"<< endl;
//    cin >> number;
//
//    // Get max Digit
//    int size_num=size_arr(number);
//    int* arr=num_arr(number,size_num);
//    int max_num=max_arr(arr, size_num);
//    cout<< "The max digit in the number is: "<< max_num<< endl;
//
//    return 0;
//}


/////////////////////////////////////////////////////

// Question 9

//#include <iostream>
//#include <string>
//
//using namespace std;
//// Function num_arr:
//    // Take a number as string
//    // Store the values of number in an array
//// Function max_num
//    // Take an array and get the max in it
//string reverse_word(string word){
//
//    // Calculate size of number
//    string word_rev;
//    for(int i=word.size(); i>=0;i--){
//        word_rev+=word[i];
//    }
//
//    return word_rev;
//}
//
//
//
//int main(){
//
//    // Take user input
//    string word;
//    string word_rev;
//    cout << "Enter a word:"<< endl;
//    getline(cin, word);
//
//    // Reverse the word
//    word_rev=reverse_word(word);
//    cout<< "The reversed word is: "<< word_rev<< endl;
//
//    return 0;
//}



/////////////////////////////////////////////////////

// Question 10

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//
//int main(){
//
//    // Take user input
//    string word;
//    int counter=1;
//    cout << "Enter a word:"<< endl;
//    getline(cin, word);
//
//
//    for (int i=0; i<word.size(); i++){
//        if (word[i]==' '){
//            counter++;
//        }
//    }
//
//    //counter=word.find()
//    cout<< "The number of words is : "<< counter<< endl;
//
//    return 0;
//}


///////////////////// Pointers /////////////////////

/////////////////////////////////////////////////////

// Question 11
//
//#include <iostream>
//#include <string>
//#include <iomanip>
//using namespace std;
//
//bool even_checker(int number){
//    return (number%2==0)? 1:0;
//}
//
//int even_counter(int arr[], int size_arr){
//
//    int counter=0;
//    for (int i=0; i<size_arr; i++){
//        if (even_checker(arr[i])){
//            counter++;
//        }
//    }
//    return counter;
//}
//
//int* even_arr(int arr[], int size_arr, int new_size){
//    int* arr_new= new int[new_size];
//
//    for(int i=0,j=0; i<size_arr; i++){
//        if(even_checker(arr[i])){
//            arr_new[j]=arr[i];
//            j++;
//        }
//    }
//
//    return arr_new;
//
//}
//
//
//int main(){
//    // Take number from user
//    int arr[]{ 4,7,3,9,2,13,6,7,8,11};
//    int size_arr=sizeof(arr)/sizeof(arr[0]);
//    int even_count=even_counter(arr, size_arr);
//    int* arr_new=even_arr(arr, size_arr, even_count);
//
//
//    for (int i=0; i<even_count; i++){
//        cout << arr_new[i]<< " ";
//    }
//
//    delete[] arr_new;
//
//
//    return 0;
//}

/////////////////////////////////////////////////////

// Question 12

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//void swap_num( int &num1, int &num2){
//    int temp;
//
//    temp=num1;
//    num1=num2;
//    num2=temp;
//}
//
//int main(){
//
//    // Take user input
//    int num1, num2;
//    cout << "Enter two numbers: "<< endl;
//    cin >> num1 >> num2;
//
//    swap_num(num1, num2);
//    cout << "num1 is now: "<< num1<< endl;
//    cout << "num2 is now: "<< num2<< endl;
//
//
//    return 0;
//}

/////////////////////////////////////////////////////

// Question 13

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Arr_maker{
//public:
//    // Attributes
//    int size_arr{};
//
//
//    // arr_gen
//    int* arr_gen(){
//
//        int* arr= new int[size_arr];
//        for (int i=0; i<size_arr; i++){
//            cin >> arr[i];
//        }
//        return arr;
//    }
//
//
//    // arr_free
//    void arr_free(int arr[]){
//        delete[] arr;
//    }
//
//};
//
//
//int main(){
//
//    Arr_maker arr;
//    // Take user input
//    cout << "Enter size of array:"<< endl;
//    cin >> arr.size_arr;
//
//
//    // Generate Arr
//    cout << "Enter the elemnts of the array: "<< endl;
//    int* arr_user=arr.arr_gen();
//    for (int i=0; i<arr.size_arr;i++){
//        cout << arr_user[i]<<" ";
//    }
//    arr.arr_free(arr_user);
//
//    return 0;
//}

/////////////////////////////////////////////////////

// Question 14

// The answer is 13 -> *arr is the first element which is 4 and you add 9 so 13

/////////////////////////////////////////////////////

// Question 15

// The answer is b -> You declared two pointers p and q both reference to a and b address. So, when you put the address of b in p p will point to b.




///////////////////// Bonus: /////////////////////

/////////////////////////////////////////////////////

// Question 1

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//
//int main(){
//
//    // Take user input
//    string word;
//    cout << "Enter a word:"<< endl;
//    getline(cin, word);
//
//
//    for (int i=0; i<word.size(); i++){
//        if (word[i]=='a'){
//            word[i]='z';
//        }
//        else if (word[i]>='0' && word[i]<='9'){
//            word[i]=word[i];
//        }
//        else{
//            word[i]=word[i]+1;
//        }
//    }
//
//
//    cout<< "The new word is "<< word<<endl;
//
//    return 0;
//}





/////////////////////////////////////////////////////

// Question 2

//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//
//int main(){
//
//    // Take user input
//    string word;
//    cout << "Enter a word:"<< endl;
//    getline(cin, word);
//
//
//    for (int i=0; i<word.size(); i++){
//        if (i==0){
//            word[i]=word[i]-32;
//        }
//        if (word[i]==' '){
//            word[i+1]=word[i+1]-32;
//        }
//    }
//
//
//    cout<< "The number of words is : "<< word<< endl;
//
//    return 0;
//}


/////////////////////////////////////////////////////

// Question 3
//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//
//int main(){
//
//    // Take user input
//    string word;
//    cout << "Enter a url:"<< endl;
//    getline(cin, word, '#');
//
//
//    cout<< "The new word is : "<< word<< endl;
//
//    return 0;
//}
