// Assignment 4


// Question 1
//
//#include <iostream>
//#include <string>
//
//using namespace std;
//// Take input from user as 2D Array
//// Diagonal is the iterator i so combine based on outer cycle
//int main()
//{
//    // Define 2D Array in Heap;
//    int rows{}, columns{};
//    cout << "Enter the number of rows & columns: "<< endl;
//    cin>> rows>> columns;
//
//    int** matrix= new int*[rows];
//    for (int i=0; i<rows; i++){
//        matrix[i]=new int[columns];
//    }
//
//    // Sum calculation
//    int sum{};
//
//    // Populate the 2D array in Heap:
//    cout << "Enter the 2D Matrix"<< endl;
//    for (int i=0; i<rows; i++){
//
//        for (int j=0; j<columns; j++){
//            cin >>matrix[i][j];
//            if (i==j){
//                sum+=matrix[i][j];
//            }
//        }
//    }
//
//    cout << "Sum of main diagonal elements = "<< sum<< endl;
//
//    return 0;
//}

/////////////////////////////////////////////////////

// Question 2
//
//#include <iostream>
//#include <string>
//using namespace std;

//int** matrix_maker(int rows, int columns){
//
//    // Define the Matrix
//    int** matrix= new int*[rows];
//    for(int i=0; i<rows;i++){
//        matrix[i]=new int[columns];
//    }
//
//    // Populate the matrix
//    for(int i=0; i<rows; i++){
//        for(int j=0; j<columns; j++){
//            cin >> matrix[i][j];
//        }
//    }
//
//    return matrix;
//
//}
//
//
//int main(){
//
//    // Make the matrix
//    int rows1{}, columns1{},rows2{}, columns2{};
//    cout<< "Enter the rows & columns of first Matrix: "<< endl;
//    cin >> rows1 >> columns1;
//
//    cout<< "Enter the rows & columns of second Matrix: "<< endl;
//    cin >> rows2 >> columns2;
//
//    if (rows1!=rows2 ||columns1!=columns2){
//        cout<< "Not Same Dimension"<< endl;
//        return 0;
//    }
//
//    cout << "Enter The elements of the first matrix" << endl;
//    int** mat1=matrix_maker(rows1,columns1);
//
//    cout << "Enter The elements of the second matrix" << endl;
//    int** mat2=matrix_maker(rows2,columns2);
//
//    // Sum matrix
//    cout << "Sum of both matrix = " << endl;
//    for (int i=0; i<rows1; i++){
//        for ( int j=0; j<columns1; j++){
//            cout<< mat1[i][j]+mat2[i][j] << " ";
//        }
//        cout << endl;
//    }
//
//    for (int i=0;i < rows1; i++){
//        delete[] mat1[i];
//        delete[] mat1[i];
//    }
//
//    delete[] mat1;
//    delete[] mat2;
//
//    return 0;
//
//
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
//// Function logic:
//    // Take rows and column
//    // Ask user for input & return matrix
//
//int** matrix_maker(int rows, int columns){
//    // Define the matrix
//    int** matrix= new int*[rows];
//    for (int i=0; i<rows; i++){
//
//        matrix[i]=new int[columns];
//
//    }
//
//    // populate the matrix
//    cout << "Enter the matrix elements"<< endl;
//    for (int i=0; i<rows;i++){
//        for (int j=0;j<columns; j++){
//            cin >> matrix[i][j];
//        }
//    }
//
//    return matrix;
//}
//int main(){
//
//    // Take user input
//    int** matrix;
//    int sum{};
//    int rows, columns;
//    cout << "Enter the rows & columns" << endl;
//    cin>> rows>> columns;
//
//    matrix=matrix_maker(rows, columns);
//
//    for (int i=0; i<rows;i++){
//        for (int j=0;j<columns; j++){
//            sum+=matrix[i][j];
//        }
//        cout << "Sum of row "<< i+1 << "="<< sum<< endl;
//        sum=0;
//    }
//
//    // Free pointer to rows
//
//    for (int i=0; i<rows ; i++){
//        delete[]matrix[i];
//    }
//    // Free matrix
//    delete[] matrix;
//
//    return 0;
//}

/////////////////////////////////////////////////////

// Question 4

//#include <iostream>
//#include <string>
//
//using namespace std;
//// Code logic:
//    // Define matrix in heap ( Pointer of pointers )
//    // Define fun to transpose by transverse and write in new
//// Function logic:
//    // Take rows and column
//    // Ask user for input & return matrix
//
//int** matrix_maker(int rows, int columns){
//    // Define the matrix
//    int** matrix= new int*[rows];
//    for (int i=0; i<rows; i++){
//
//        matrix[i]=new int[columns];
//
//    }
//
//    // populate the matrix
//    cout << "Enter the matrix elements"<< endl;
//    for (int i=0; i<rows;i++){
//        for (int j=0;j<columns; j++){
//            cin >> matrix[i][j];
//        }
//    }
//
//    return matrix;
//}
//
//
//int** mat_transposed(int** matrix, int rows, int columns) {
//
//    // Trans matrix in heap
//    int** matrix_trans = new int*[columns];
//    for (int i = 0; i < columns; i++) {
//        matrix_trans[i] = new int[rows];
//    }
//
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < columns; j++) {
//            matrix_trans[j][i] = matrix[i][j];
//        }
//    }
//
//    return matrix_trans;
//}
//int main(){
//
//    // Take user input
//    int** matrix;
//    int** matrix_trans;
//    bool flag=true;
//    int rows, columns;
//    cout << "Enter the rows & columns" << endl;
//    cin>> rows>> columns;
//
//    // Make a matrix
//    matrix=matrix_maker(rows, columns);
//
//    // Check if rows != columns
//    if (rows!=columns){
//        cout << "The matrix is not a Symmetric Matrix? "<< endl;
//        return 0;
//    }
//
//
//    // Transpose the matrix
//    matrix_trans=mat_transposed(matrix,rows, columns);
//
//
//    for (int i=0;i<rows;i++){
//        for (int j=0; j<columns;j++){
//
//            if (matrix_trans[i][j]!=matrix[i][j]){
//
//                cout << "The matrix is not a Symmetric Matrix "<< endl;
//                flag=false;
//                break;
//
//            }
//        }
//        if (flag==false){
//            break;
//        }
//    }
//    if (flag==true){
//        cout << "The matrix is a Symmetric Matrix "<< endl;
//    }
//
//    // Free  memory for t matrix
//    for (int i = 0; i < rows; i++) {
//        delete[] matrix[i];
//    }
//    delete[] matrix;
//
//    // Free memory for t transposed matrix
//    for (int i = 0; i < columns; i++) {
//        delete[] matrix_trans[i];
//    }
//    delete[] matrix_trans;
//
//    return 0;
//}

/////////////////////////////////////////////////////

// Question 5

//#include <iostream>
//#include <string>
//
//using namespace std;
//// Function:
//    // Take integer
//    // Print int
//
//void print_fn(int number){
//
//    cout << "The number is: "<< number<< endl;
//
//}
//int main(){
//    // Take user number
//    int user_num{};
//    cout << "Please Enter a number: "<< endl;
//    cin >> user_num;
//
//    // print user number
//    print_fn(user_num);
//
//
//    return 0;
//}


// Question 6

//#include <iostream>
//#include <string>
//using namespace std;
//// Function:
//    // Take 3 integer
//    // average them in a float
//// Code logic:
//    // Call averageofthree
//float averageOfthree(int num1, int num2, int num3){
//    float average{};
//    int sum{};
//
//    sum=num1+num2+num3;
//    average=sum/3.0;
//
//    return average;
//}
//
//int main(){
//
//    // Take user input
//    int num1, num2,num3;
//    float average{};
//    cout << "Enter num1, num2, num3: "<< endl;
//    cin >> num1>>num2>>num3;
//
//    // Print the average
//    average=averageOfthree(num1,num2,num3);
//    cout << "The Average is :"<< average<< endl;
//
//
//    return 0;
//}


/////////////////////////////////////////////////////

// Question 7

//#include <iostream>
//#include <string>
//
//using namespace std;
//// function logic:
//    // Take a number
//    // count possible divisor
//    // check if prime
//// Code logic:
//    // Take user number
//    // call IsPrime(number)
//
//bool IsPrime(int number){
//    int counter{};
//    if (number==1){
//        return 0;
//    }
//    for(int i=2;i<=number/2;i++){
//
//        if( number%i==0){
//            counter++;
//        }
//        if (counter>0){
//            break;
//        }
//    }
//    return counter==0? true:false;
//
//}
//int main()
//{
//    // Take user input
//    int number{};
//    cout << "Enter a number to be checked: "<< endl;
//    cin >> number;
//
//    cout << boolalpha<<IsPrime(number)<< endl;
//
//    return 0;
//}

/////////////////////////////////////////////////////

// Question 8

//#include <iostream>
//#include <string>
//
//using namespace std;
//// Function Logic
//    // Take int number
//    // Check on divisor
//    // return true or false
//// Function 2 logic:
//    // Turn the true or false to Even or Odd
//    // Takes true or false
//// Function 3: <----- Not added yet
//    // Take user number
//    // Check if a valid number
//// Code Logic:
//    // Take user input
//    // Check num%2==0? 1:0;
//bool even_check(int number){
//
//    return number%2==0?true:false;
//}
//string string_check(bool number){
//
//    switch(number){
//
//    case false:
//        return "Odd";
//    case true:
//        return "Even";
//    default:
//        return "Not a valid number";
//    }
//
//}
//
//int main(){
//
//    // Take user input
//    int number {};
//
//    cout << "Enter a number:"<< endl;
//    cin >> number;
//    cout<< "The number you gave is: "<< string_check(even_check(number))<< endl;
//
//    return 0;
//}


/////////////////////////////////////////////////////

// Question 9

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//// Function min_fn
//// Function max_fn:
//// Code Logic:
//    // Take array from user and store it in heap
//    // Intiallize min & max from array
//    // loop through array and change
//    // Pass by reference
//int min_fn(int* arr, int size){
//
//    int min_num;
//    for (int i=0; i<size; i++){
//        if (i==0){
//            min_num=arr[0];
//        }
//        if (arr[i]< min_num){
//            min_num=arr[i];
//        }
//    }
//
//    return min_num;
//
//}
//
//int max_fn(int* arr, int size){
//
//    int max_num;
//    for (int i=0; i<size; i++){
//        if (i==0){
//            max_num=arr[0];
//        }
//        if (arr[i]> max_num){
//            max_num=arr[i];
//        }
//    }
//
//    return max_num;
//
//}
//int main(){
//
//    // Take array from user
//    int size;
//    cout << "Enter the size of the array" << endl;
//    cin >> size;
//    int* arr= new int[size];
//
//    cout << "Enter the Array Elements:"<< endl;
//    for (int i=0;i <size;i++){
//        cin>> arr[i];
//    }
//
//    cout << "The minimum number is: "<< min_fn(arr,size)<< endl;
//    cout << "The maximum number is: "<< max_fn(arr,size)<< endl;
//
//    delete[] arr;
//    return 0;
//}



/////////////////////////////////////////////////////

// Question 10

//#include <iostream>
//#include <string>
//
//using namespace std;
//// Code logic:
//    // Take user input
//    // multiply the user input by itself (repeat as power)
//// Function logic:
//    // Take power and number
//    // Make a loop then return the number powered
//int power_num(int num, int power){
//    int num_power=1;
//    for(int i=0; i<power; i++){
//
//        num_power*=num;
//
//    }
//
//    return num_power;
//
//}
//int main(){
//    // Take number from user
//    int number, power;
//    cout << "Enter a number and the power:" <<endl;
//    cin >> number>> power;
//
//    cout << "The power of the number " << number << " is: " << power_num(number,power)<< endl;
//
//
//    return 0;
//}


/////////////////////////////////////////////////////

// Question 11

//#include <iostream>
//#include <string>
//#include <iomanip>
//using namespace std;
//const float pi= 3.14159265358979323846;
//
//// Code logic:
//    // Take user input
//    // make function for each calc
//// Function logic:
//    // Take power and number
//    // Make a loop then return the number powered
//
//float powerOf2(float num){
//    float num_power=1;
//    for(int i=0; i<2; i++){
//
//        num_power*=num;
//    }
//
//    return num_power;
//
//}
//
//float d_calc(float radius){
//    float diameter= 2*radius;
//    return diameter;
//}
//
//double circum_calc(float radius){
//    double circumference= 2*pi*radius;
//    return circumference;
//}
//
//double area_calc(int radius){
//    double area= pi*powerOf2(radius);
//    return area;
//}
//
//int main(){
//    // Take number from user
//    float radius;
//    cout << "Enter the radius" <<endl;
//    cin >> radius;
//
//    cout << fixed<< setprecision(2);
//    cout << "Diameter = " <<d_calc(radius)<<" Units" <<endl;
//    cout << "Circumference = " <<circum_calc(radius)<<" Units" << endl;
//    cout << "Area =" <<area_calc(radius)<<" sq. units" << endl;
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
//// function logic:
//    // Take a number
//    // print
//void all_div(int number){
//
//    for(int i=1;i<=number;i++){
//
//        if( number%i==0){
//            cout <<"The number : "<< i <<" is a possible divisor." << endl;
//        }
//    }
//}
//
//int main()
//{
//    // Take user input
//    int number{};
//    cout << "Enter a number: "<< endl;
//    cin >> number;
//
//    all_div(number);
//
//    return 0;
//}

/////////////////////////////////////////////////////

// Question 13
//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//bool div_check(int number){
//
//    return number%12==0?true:false;
//}
//
//int main(){
//
//    // Take user input
//    int number {};
//
//    cout << "Enter a number:"<< endl;
//    cin >> number;
//    cout<< "The result of number division on 3 and 4 is:  "<<boolalpha<< div_check(number)<< endl;
//
//    return 0;
//}

