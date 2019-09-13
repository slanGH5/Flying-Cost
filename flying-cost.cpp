#include <iostream>
using namespace std;

int main()
{   
    string name;
    cout << "What is the traveler's name?" << endl;
    getline (cin, name); //getline needed instead of cin in order to return empty string instead of eating it
   
    int miles;
    cout << "How many miles are being flown?" << endl;
    cin >> miles; //ignores leading white space
    cin.ignore(10000, '\n'); //cin.ignore needed to consume all characters up to the next newline or 10000 characters so that Class of Service line won't skip
   
    string service;
    cout << "Class of service?" << endl;
    getline (cin, service);
    
    string saver;
    cout << "Saver Award?" << endl;
    getline (cin, saver);
   
    
    int price1;
    int price2 = 0; //price2 (the final # of required frequent flyer miles) initialized first to prevent warning on compiler, will be given an actual value later through the if-statements below
    
    //Calculations for the number of frequent flyer miles required
        
    if ((miles < 1000) && (service == "Economy Class")) {
        price1 = 20000;
        if (saver == "No"){
            price2 = price1 + 2500;}
        if (saver == "Yes"){
            price2 = price1;}}
    
    else if ((miles < 5000) && (service == "Economy Class")) {
        price1 = 35000;
        if (saver == "No"){
            price2 = price1 + 5000;}
        if (saver == "Yes"){
            price2 = price1;}}
            
    else if ((miles >= 5000) && (service == "Economy Class")) {
        price1 = 50000;
        if (saver == "No"){
            price2 = price1 + 10000;}
        if (saver == "Yes"){
            price2 = price1;}}
            
    else if ((miles < 1000) && (service == "First Class")) {
        price1 = 40000;
        if (saver == "No"){
            price2 = price1 + 2500;}
        if (saver == "Yes"){
            price2 = price1;}}
    
    else if ((miles < 5000) && (service == "First Class")) {
        price1 = 70000;
        if (saver == "No"){
            price2 = price1 + 5000;}
        if (saver == "Yes"){
            price2 = price1;}}
    
    else if ((miles >= 5000) && (service == "First Class")) {
        price1 = 100000;
        if (saver == "No"){
            price2 = price1 + 10000;}
        if (saver == "Yes"){
            price2 = price1;}}
    
    if (name == ""){
        cout << "The traveler's name must not be empty." << endl;}
    
    else if (miles <= 0){
        cout << "The distance traveled must be positive." << endl;}
    
    
    else if ((service != "First Class") && (service != "Economy Class")){
        cout << "The class of service must be either First Class or Economy Class." << endl;}
    //&& and not || is not used in this and the below case because if it were ||, entering "First Class" would mean the service is not "Economy Class", the else if-statement would hold true, and the error would be outputted even though the input was valid. Both "First Class" AND "Economy Class" need to be accounted for.
    
    else if ((saver != "Yes") && (saver != "No")){
        cout << "The saver award must either be Yes or No." << endl;}
    
    else {
        cout << name << ", your free ticket will require " << price2 << " frequent flyer miles.  Enjoy your trip!" << endl;}
    
return (0);
}
