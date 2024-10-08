#include <iostream>
#include <fstream>
using namespace std;

class info{
	public:
		string a;
		int b;
		void putinfo();
		void getinfo();
};
void info::getinfo(){
	cout<<"Enter the name of student : ";
	cin>>a;
	cout<<"Enter registration number: ";
	cin>>b;
}
void info::putinfo(){
	cout<<"\nStudent Info : "<<endl;
	cout<<"Name of Student: "<<a<<endl;
	cout<<"Registration number : "<<b<<endl<<endl<<endl;
}
int main(){
	int num;
	cout<<"Enter number of students: ";
	cin>>num;
	info s1[num],s2[num];
	fstream fo;
	fo.open("info.txt",ios::out|ios::binary);
	for(int i = 0;i<num;i++){
	    s1[i].getinfo();
	    fo.write((char *) &s1[i],sizeof(s1[i]));
	}
	fo.close();
	
	fo.open("info.txt",ios::in|ios::binary);
	for(int i = 0;i<num;i++){
	    fo.read((char *) &s2[i],sizeof(s2[i]));
	    s2[i].putinfo();
    }
    fo.close();
    
    int n;
    
	return 0;
}


