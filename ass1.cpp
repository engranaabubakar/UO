#include <iostream>
#include <string>
using namespace std;

 

struct StudentProfile{
string userid;
string userName; 
string subject; 
string degreeName; 
string uniName; 
};

 

class ArrayList{
private: 
StudentProfile * arr; 
int current; 
int listSize; 
public: 
ArrayList(); 
void add(StudentProfile student); 
StudentProfile find(int x); 
void update(int postition, StudentProfile student);
void remove(int x); 
int listLenght(); 
void showList();
void cmpStdRec(StudentProfile x, StudentProfile y);
~ArrayList(); 
};
ArrayList::ArrayList(){
arr = new StudentProfile [10]; 
listSize = 0 ; 
current = 0; 
}
void ArrayList::add(StudentProfile x){
arr[listSize] = x ; 
listSize++; 
current = listSize; 
}
StudentProfile ArrayList::find(int x){
return arr[x];
}
void ArrayList::update(int position, StudentProfile student){
arr[position] = student;
}
void ArrayList::remove(int x){
arr[x].userid = ""; 
arr[x].userName=""; 
arr[x].subject=""; 
arr[x].degreeName=""; 
arr[x].uniName="";
listSize--;   
//listSize = listSize - 1; 
}
int ArrayList::listLenght(){
return listSize;
}
void ArrayList::showList()

{
cout<<"Sr ID Name Subject Deg Uni";

int SrNo = 1 ; 
for(int i = 0 ; i <= listSize; i++){
if(arr[i].userid != "")

{
	
cout<<SrNo, arr[i].userid;" "+ arr[i].userName;" "+arr[i].subject;" "+arr[i].degreeName;" "+arr[i].uniName;

SrNo++; 
}
}
}
ArrayList::~ArrayList(){
delete []arr; 
}
int main(){
ArrayList StudentArray; 
StudentProfile std1, std2 , std3, std4, std5 ; 

// Student 1 
std1.userid = "MC180400224" ;
std1.userName = "Ali" ; 
std1.subject = "CS301" ; 
std1.degreeName = "MCS"; 
std1.uniName = "VU";
// Student 2
std2.userid = "MC1807678890" ;
std2.userName = "Naeem" ; 
std2.subject = "CS301" ; 
std2.degreeName = "MCS"; 
std2.uniName = "VU";
// Student 3 
std3.userid = "MC180401444" ;
std3.userName = "khuram" ; 
std3.subject = "CS301" ; 
std3.degreeName = "MCS"; 
std3.uniName = "VU";
// Student 4
std4.userid = "MC180607997" ;
std4.userName = "haris" ; 
std4.subject = "CS301" ; 
std4.degreeName= "MCS"; 
std4.uniName = "VU";
// Student 5
std5.userid = "MC180477788" ;
std5.userName = "awais" ; 
std5.subject = "CS301" ; 
std5.degreeName= "MCS"; 
std5.uniName = "VU";

 

StudentArray.add(std1);
StudentArray.add(std2);
StudentArray.add(std3);
StudentArray.add(std4);
StudentArray.add(std5);
StudentArray.showList();

 

// Finding the Record

 

cout <<"\nFinding the record at position 4";
 
StudentProfile found = StudentArray.find(3);
 
cout <<"Student Found At position 4 is having the ID: " +found.userid ; 

//update the record

 

cout<<"\n update the record at position 4";

std4.userid = " MC180607997"; 
std4.userName = "haris" ; 
std4.subject = "CS301" ; 
std4.degreeName = "MCS"; 
std4.uniName = "VU";
StudentArray.update(3, std4); 
StudentArray.showList();

 

// removing the record

 

StudentArray.remove(3);

cout<<"\nRemove the 4th Student Record " ;

 

StudentArray.showList();

 

cout<<"\nlenght of the Array List: "+StudentArray.listLenght() ;

 

}
