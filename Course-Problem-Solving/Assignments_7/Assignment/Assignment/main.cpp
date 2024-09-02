// Assignment 7


// Question 1
//
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
//protected:
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
//    Circle(double radius): radius(radius)
//    {
//
//    }
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
//    // Display info
//    void display_info(){
//        cout << "The radius is: "<< radius;
//        cout << " The color is: " << color;
//
//    }
//
//};
//
//class Cylinder: public Circle{
//private:
//    double height;
//
//
//public:
//    // Default Constructor
//    Cylinder(): height(1.0)
//    {
//
//    }
//    // Parameterized Constructor
//    Cylinder(double radius): Circle(radius) // We need to set radius to make sure parent class has the correct values, other wise the cylinder will take default values in the parent
//    {
//
//    }
//    Cylinder(double radius, double height):Circle(radius), height(height)
//    {
//
//    }
//    Cylinder(double radius, string color, double height):Circle(radius,color),height(height)
//    {
//
//    }
//
//    // Height
//    double getHeight(){
//        return height;
//    }
//    void setHeight(double h){
//        height=h;
//    }
//
//    // Volume
//    double getVolume(){
//        double volume;
//        volume=getArea()*height;
//        return volume;
//    }
//
//
//};
//
//int main()
//{
//    // Instance creation
//    Circle cir;
//    Cylinder cy;
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
//    double height{};
//    cout << "Enter the height" << endl;
//    cin >> height;
//
//    cir.setColor(color);
//    cir.setRadius(radius);
//    cy.setRadius(radius);
//    cy.setHeight(height);
//
//
//    // Calculate area
//    double area{};
//    area=cir.getArea();
//    cout << "The area of the circle is: "<< area<< endl;
//
//
//    // Calculate volume
//    double volume{};
//    volume=cy.getVolume();
//    cout << "The volume of the cylinder is: "<< volume<< endl;
//
//    return 0;
//}

/////////////////////////////////////////////////////

// Question 2

//#include <iostream>
//#include <string>
//using namespace std;
//
//
//class Customer{
//private:
//    // Attributes
//    string name;
//    int id, discount;
//
//public:
//    //parameterized constructor
//    Customer(int id, int discount, string name): id(id), discount(discount),name(name)
//    {
//
//    }
//
//    // ID
//    int getId(){
//        return id;
//    }
//    // name
//    string getName(){
//        return name;
//    }
//    // discount
//    int getDiscount(){
//        return discount;
//    }
//    void setDiscount(int d){
//        discount=d;
//    }
//
//    // info
//    void displayInfo(){
//        cout << " The customer name is: "<< name<< endl;
//        cout << " The customer id is: "<< id<< endl;
//        cout << " The customer discount is: "<< discount<< endl;
//    }
//
//};
//
//class Invoice{
//private:
//    Customer& customer; // Used a reference to make sure that any update in customer class happens in here too.
//    double amount;
//    int id;
//public:
//    // Parameterized constructor
//    Invoice(int id, double amount, Customer& customer): id(id), amount(amount), customer(customer) // customer should be entered as customer
//    {
//
//    }
//
//    // Id
//    int getId(){
//        return id;
//    }
//
//    // customer
//    Customer getCustomer(){
//        return customer;
//    }
//    void setCustomer(int _id, int _discount, string _name){
//        Customer customer(_id, _discount, _name); // Set new customer
//    }
//
//    int getCustomerId(){
//
//        return customer.getId();
//    }
//    string getCustomerName(){
//        return customer.getName();
//    }
//    int getCustomerDiscount(){
//        return customer.getDiscount();
//    }
//
//    //Amount
//    double getAmount(){
//        return amount;
//    }
//    void setAmount(double a){
//        amount=a;
//    }
//
//    double getAmountAfterDiscount() {
//        return amount - (amount * (customer.getDiscount() / 100.0));
//    }
//
//    // info
//    void displayInfo(){
//        customer.displayInfo();
//        cout << "The invoice id is: " << id<< endl;
//        cout << "The amount of Invoice is: "<< amount<< endl;
//
//
//    }
//
//
//};
//
//int main()
//{
//    //Create instance
//    Customer customer(5, 10, "Ali Mohamed");
//    Invoice inv(5, 1000, customer);
//
//    // Customer Check
//    customer.setDiscount(100);
//    cout << "The customer: "<< customer.getName() <<" new discount is: "<< customer.getDiscount()<< endl;
//
//    // Invoice Check
//    cout << " The invoice Amount is: "<< inv.getAmount()<< endl;
//    cout<< "The amount after discount "<<inv.getAmountAfterDiscount()<< endl;
//    cout << " The customer discount is: "<< inv.getCustomerDiscount()<< endl;
//
//    inv.displayInfo();
//
//
//    return 0;
//}


/////////////////////////////////////////////////////
// Question 3
////
//#include <iostream>
//#include <string>
//using namespace std;
//
//
//class Person{
//protected:
//    string firstName, lastName;
//public:
//
//    // Parameterized Constructor
//    Person(string firstName, string lastName): firstName(firstName), lastName(lastName)
//    {
//
//    }
//    // Display info
//    void displayInfo(){
//        cout << " The first Name is: "<< firstName<< endl;
//        cout << " The last Name is: "<< lastName<< endl;
//    }
//
//    // name
//    string getFirstName(){
//        return firstName;
//    }
//    string getLastName(){
//        return lastName;
//    }
//
//    void setName(string f_n, string l_n){
//        firstName=f_n;
//        lastName=l_n;
//    }
//
//};
//
//class Doctor: public Person{
//private:
//    string speciality;
//public:
//    // Parameterized Intialization
//    Doctor(string speciality, string firstName, string lastName):speciality(speciality), Person(firstName, lastName)
//    {
//
//    }
//    //Speciality
//    void setSpeciality( string s){
//        speciality=s;
//    }
//
//    string getSpeciality(){
//        return speciality;
//    }
//};
//
//class Date{
//private:
//    int dMonth, dday, dYear;
//public:
//
//    // Parameterized constructor
//    Date(int dMonth, int dday, int dYear): dMonth(dMonth), dday(dday), dYear(dYear)
//    {
//
//    }
//
//    // Day
//    int getDay(){
//        return dday;
//    }
//
//    // Month
//    int getMonth(){
//        return dMonth;
//    }
//
//    //year
//    int getYear(){
//        return dYear;
//    }
//
//    // Time
//    void setDate(int m, int d, int y){
//        dMonth=m;
//        dYear=y;
//        dday=d;
//    }
//
//    // to string
//    string toString() {
//        return to_string(dday) + "/" + to_string(dMonth) + "/" + to_string(dYear);
//    }
//
//
//    // Display info
//    void displayInfo(){
//        cout << "The Date is: "<< dday<< ":" <<dMonth <<":"<<dYear<< endl;
//    }
//
//
//};
//
//
//class Patient{
//private:
//    Date dob, admitDate, dischargeDate;
//    Doctor& physician; // Any change in the doctor address will be shown in here
//    int age, patientId;
//
//public:
//    // Parameterized Constructor
//    Patient(int age, int patientId, Doctor& physician, Date dob, Date admitDate, Date dischargeDate): age(age), patientId(patientId), admitDate(admitDate),dischargeDate(dischargeDate), dob(dob), physician(physician)
//    {
//
//    }
//
//    // Date
//    Date getAdmitDate(){
//        return admitDate;
//    }
//    Date getDischargeDate(){
//        return dischargeDate;
//    }
//    void setDischargeDate( Date dis_date){
//        dischargeDate=dis_date;
//    }
//
//    // Doctor
//    void setPhysician(Doctor& doc){
//        physician=doc;
//    }
//
//    Doctor getPhysician(){
//        return physician;
//    }
//
//};
//
//
//int main() {
//
//    // Set instance
//    Date dob(1, 1, 1990);
//    Date admitDate(1, 1, 2023);
//    Date dischargeDate(1, 2, 2023);
//    Doctor doctor("Cardiology", "Ali", "U3");
//    Patient patient(30, 1, doctor, dob, admitDate, dischargeDate);
//
//    // Displaying information
//    patient.getPhysician().displayInfo();
//    doctor.setName("Ali", "Mohamed");
//
//    patient.getPhysician().displayInfo();
//    dob.displayInfo();
//    admitDate.displayInfo();
//    dischargeDate.displayInfo();
//
//    return 0;
//}

/////////////////////////////////////////////////////

// Question 4
//

//What’s the difference between composition and inheritance? With example

// Composition: The main idea is the creation of multiple classes that talk to each other but does not have a relation between each other or inherit from each other. This causes the code to be more simple and reusable. The relation between classes in here is reversible.The relationships within composition can be thought of as "has-a" relationships.
// Inheritance: The idea of inheritance creating a new class (Child) based on an existing class (Parent), which allows the Child class to inherit properties and behaviors (methods) from the Parent. The relation between parent and child is not reversible and the relation can be categorized into "is-a".

//Note: illustrate your example as class name and class members only, don’t implement it

// Composition example:
    // class Car -> has-a -> class Engine, class Battery
// inheritance example
    // class dog (child) -> is-a -> class Animal
/////////////////////////////////////////////////////
