#include <iostream>
using namespace std;
int main()
{
    int eng,urdu,math,comp,isl;
    float obtainedMarks, marksPerc;
    int totalMarks = 500;
English:
    cout << "Enter marks for English" << endl;
    cin >> eng;
    if (eng>100){
        cout<<"enter marks below 100"<<endl;
        goto English;
    }
 Urdu:  
    cout << "Enter marks for Urdu" << endl;
    cin >> urdu;
      if (urdu>100){
        cout<<"enter marks below 100"<<endl;
        goto Urdu;
    }
Math:
    cout << "Enter marks for Maths" << endl;
    cin >> math;
      if (math>100){
        cout<<"enter marks below 100"<<endl;
        goto Math;
    }
Computer: 
    cout << "Enter marks for Computer" << endl;
    cin >> comp;
      if (comp>100){
        cout<<"enter marks below 100"<<endl;
        goto Computer;
    }
Islamiat:
    cout << "Enter marks for Islamiat" << endl;
    cin >> isl;
      if (isl>100){
        cout<<"enter marks below 100"<<endl;
        goto Islamiat;
    }


    obtainedMarks = eng + urdu + comp + math + isl;
    marksPerc = (obtainedMarks / totalMarks) * 100;
    cout << "Percentage is = " << marksPerc << "%" << endl;
  

    if (marksPerc >= 50) {
        cout << "Congratulations you are Passed" << endl;
    }
    else {
        cout << "You are fail" << endl;
    }

    return 0;
}
