// Assignment 6


// Question 1
////
//#include <iostream>
//#include <string>
//using namespace std;
//const double PI = 3.14159265358979323846;
//
//// OOP Logic:
//    // Attribute: radius & color
//    // Function:
//        // Set and Get for both functions
//        // get Area
//
//class Circle{
//private:
//    string color; // To improve memory usage put string first
//    double radius;
//
//public:
//
//    // Default Constructor
//    Circle(): radius(1.0),color("red")
//    {
//
//    }
//    // Parameterized Constructor
//    Circle(double radius, string color): radius(radius), color(color)
//    {
//
//    }
//
//    // radius
//    double getRadius(){
//        return radius;
//    }
//    void setRadius(double r){ // To invoke member value by outside value
//        radius=r;
//    }
//
//
//    // Color
//    string getColor(){
//        return color;
//    }
//    void setColor(string c){
//        color=c;
//    }
//
//    // Area
//    double getArea(){
//        double area;
//        area=PI*radius*radius;
//        return area;
//    }
//
//
//};
//
//int main()
//{
//    // Instance creation
//    Circle cir;
//
//    // Take user input
//    string color;
//    cout <<"Enter the color of circle"<< endl;
//    getline(cin, color);
//
//    double radius{};
//    cout << "Enter the radius" << endl;
//    cin >> radius;
//
//
//    cir.setColor(color);
//    cir.setRadius(radius);
//
//
//    // Calculate area
//    double area{};
//    area=cir.getArea();
//    cout << "The area of the circle is: "<< area<< endl;
//
//
//    return 0;
//}

/////////////////////////////////////////////////////

// Question 2
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//class Employee{
//private:
//    string firstName, lastName;
//    int id, salary;
//public:
//    // Parameterized constructor
//    Employee(string firstName, string lastName, int salary): firstName(firstName), lastName(lastName),salary(salary)
//    {
//
//    }
//
//    // Id
//    int getID(){
//        return id;
//    }
//    // name methods
//    string getFirstName(){
//        return firstName;
//    }
//    string getLastName(){
//        return lastName;
//    }
//    string getName(){
//        return firstName +" "+ lastName;
//    }
//
//    //salary
//    int getSalary(){
//        return salary;
//    }
//    void setSalary(int s){
//        salary=s;
//    }
//    int getAnnualSalary(){
//        return salary*12;
//    }
//    int raiseSalary(float percent){
//        return salary*(percent/100+1);
//    }
//
//};
//
//int main()
//{
//    // Take user input
//    string firstName, lastName;
//    int id, salary;
//
//    cout << "Enter the first name of Employee"<< endl;
//    getline(cin, firstName);
//    cout << "Enter the last name of Employee"<< endl;
//    getline(cin, lastName);
//    cout << "Enter the salary of Employee"<< endl;
//    cin >> salary;
//
//    // Define employee x
//    Employee x(firstName,lastName, salary);
//
//
//    // return Annual and percent increase
//    cout << "The annual salary is: "<< x.getAnnualSalary()<< endl;
//    cout << "The new salary is: " << x.raiseSalary(12)<< endl;
//
//
//
//    return 0;
//}


/////////////////////////////////////////////////////
// Question 3
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//class Account{
//private:
//    string id, name;
//    int balance=0; // Instead of Default Constructor I will initialize here
//public:
//
//    // Parameterized constructor
//    Account(string id, string name): id(id), name(name)
//    {
//
//    }
//
//    Account(string id, string name, int balance): id(id), name(name), balance(balance)
//    {
//
//    }
//
//
//    // Id
//    string getID(){
//        return id;
//    }
//    // name
//    string getName(){
//        return name;
//    }
//
//    //balance
//    int getBalance(){
//        return balance;
//    }
//
//    // Other Methods
//    int credit(int amount){
//        balance+=amount;
//        return balance;
//    }
//
//    int debit(int amount){
//        if (amount <=balance){
//
//            balance-=amount;
//        }
//        else{
//            cout << "Amount exceeded balance" << endl;
//        }
//        return balance;
//
//    }
//    int transferTo(Account &y, int amount){ // In here to change account I needed to pass by reference
//        if (amount <=balance){
//            balance-=amount;
//            y.credit(amount);
//        }
//        else{
//            cout << "Amount exceeded balance" << endl;
//        }
//        return balance;
//    }
//
//    // Display info
//    void displayInfo(){
//        cout << "The ID is: "<< id<< endl;
//        cout << "The name is: "<< name<< endl;
//        cout << "The balance is: "<< balance<<endl;
//    }
//
//
//};
//
//int main()
//{
//    // Take user input
//    string id, name;
//    int balance;
//
//    cout << "Enter the account id "<< endl;
//    getline(cin, id);
//    cout << "Enter the account name"<< endl;
//    getline(cin, name);
//    cout << "Enter the account balance"<< endl;
//    cin >> balance;
//
//    // Define Account x
//    Account x(id, name, balance);
//    Account y("P11", "Mike", 100);
//
//    // Display Account info
//    cout << "Information Before Action:"<< endl<< endl;
//    x.displayInfo();
//
//
//    // Check on credit, debit, transfer methods
//    cout << "Information After Action:"<< endl<< endl;
//    //x.credit(100);
//    //x.displayInfo();
//
//    //x.debit(10000);
//    //x.displayInfo();
//
//    x.transferTo(y, 100);
//    x.displayInfo();
//    y.displayInfo();
//
//
//
//
//    return 0;
//}

/////////////////////////////////////////////////////

// Question 4
//

//#include <iostream>
//#include <string>
//using namespace std;
//
//
//// This code won't check on user input in object creation
//// In the question it said No input validation needed
//class Time{
//private:
//    int hour, minute, second;
//public:
//
//    // Parameterized constructor
//    Time(int hour, int minute, int second): hour(hour), minute(minute), second(second)
//    {
//
//    }
//
//    // Hour
//    int getHour(){
//        return hour;
//    }
//
//    void setHour(int hr){
//        if ((hr<=23)&&(hr>=0)){
//            hour=hr;
//        }
//        else{
//            cout <<"Enter a valid Hour "<< endl;
//        }
//
//    }
//
//    // Minute
//    int getMinute(){
//        return minute;
//    }
//
//    void setMinute(int m){
//        if ((m<=59)&&(m>=0)){
//            minute=m;
//        }
//        else{
//            cout <<"Enter a valid Minute "<< endl;
//        }
//    }
//
//    //Second
//    int getSecond(){
//        return second;
//    }
//
//    void setSecond(int s){
//        if ((s<=59)&&(s>=0)){
//            second=s;
//        }
//        else{
//            cout <<"Enter a valid second "<< endl;
//        }
//
//    }
//    // Time
//    void setTime(int hr, int m, int s){
//        setHour(hr);
//        setMinute(m);
//        setSecond(s);
//    }
//
//
//    // Display info
//    void displayInfo(){
//        cout << "The Time is: "<< hour<< ":" <<minute <<":"<<second<< endl;
//    }
//
//
//};
//
//int main()
//{
//    // Take user input
//    int hour, minute, second;
//
//    cout << "Enter the Hour "<< endl;
//    cin >> hour;
//    cout << "Enter the minute"<< endl;
//    cin >> minute;
//    cout << "Enter the second"<< endl;
//    cin >> second;
//
//    // Define Current Time
//    Time t(hour,minute,second);
//    t.displayInfo();
//
//
//    t.setTime(100,39,49); // It refused the hour input
//    t.displayInfo();
//
//    return 0;
//}

/////////////////////////////////////////////////////
