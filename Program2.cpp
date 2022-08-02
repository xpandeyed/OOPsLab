#include <bits/stdc++.h>
using namespace std;

class Employee{
	int id;
	int sal;
	string name;
public:
	void setData(int id, int sal, string name){
		this->id = id;

		this->name = name;
		
		this->sal = sal;

	}
	void printData(){
		cout << this->id;
		int i;
		for(i=0;i<10-to_string(id).size();++i){
			cout << " " ;
		}
		cout << this->name;
		for(i=0;i<20-name.size(); ++i){
			cout << " ";
		}
		cout << this->sal << endl;
	}
	int getId(){
		return this->id;
	}
	string getName(){
		return this->name;
	}
};

int main(){
	int n;
	int currEmployees = 0;
	cout << "Menu:\n1 for adding an employee.\n2 for printing all employees.\n3 for searching and printing specific employee using id.\n4 for searching and printing specific employee using name.\n5 for sorting the employees by their id.\n6 for deleting an employee using id.\n";
	cout << "Enter number of employees (n>0): " ;
	cin >> n;

	Employee* *arr = new Employee*[n];

	while(true){
		int choice;
		cout << "Enter choice: ";
		cin >> choice;
		switch(choice){
			case 1:{
				if(currEmployees>=n){
					cout << "Max limit of employees reached. If you want to add more employees, consider deleting old employees.";
					break;
				}
				int id;
				string name;
				int sal;
				cout << "Enter name: ";
				cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				getline(cin, name);
				cout << "Enter id: " ;
				cin >> id;
				cout << "Enter sal: " ;
				cin >> sal;
				Employee *e = new Employee();
				e->setData(id, sal, name);
				arr[currEmployees] = e;
				currEmployees++;
				break;
			}
			case 2:{
				int i;
				cout << "Id";
				for(i=0;i<8;++i){
					cout << " ";
				}
				cout << "Name";
				for(i=0;i<16;++i){
					cout << " ";
				}
				cout << "Salary"<< endl;
				for(i=0;i<currEmployees;++i){
					arr[i]->printData();
				}

				break;
			}
			case 3:{
				int i=0, id, flag = false;
				cout << "Enter id you want to search: ";
				cin >> id ;
				for(i=0;i<currEmployees;++i){
					if(id == arr[i]->getId()){
						flag = true;
						arr[i]->printData();
					}
				}

				if(!flag){
					cout << "Entered id could not be found."<< endl;
				}

				break;
			}
			case 4:{
				int i=0, flag = false;
				string name;
				cout << "Enter name you want to search: ";
				cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				getline(cin, name);
				for(i=0;i<currEmployees;++i){
					if(name == arr[i]->getName()){
						flag = true;
						arr[i]->printData();
					}
				}

				if(!flag){
					cout << "Entered name could not be found."<< endl;
				}

				break;
			}
			case 5:{
				//Bubble sort
				int i, j;
				for(i=0;i<currEmployees;++i){
					for(j=0;j<currEmployees-i-1;++j){
						if(arr[j]->getId()>arr[j+1]->getId()){
							swap(arr[j], arr[j+1]);
						}
					}
				}
				for(i=0;i<currEmployees;++i){
					arr[i]->printData();
				}
				break;
			}
			case 6:{
				int i=0, id, flag = false;
				cout << "Enter id you want to search: ";
				cin >> id ;
				for(i=0;i<currEmployees;++i){
					if(id == arr[i]->getId()){
						flag = true;
						break;
					}
				}

				if(!flag){
					cout << "Entered id could not be found."<< endl;
				}else{
					int j;
					for(j=i;j<currEmployees-1;++j){
						arr[j]=arr[j+1];
					}
				}
				currEmployees--;
				break;
			}
			default:{
				return 0;
			}
		}
	}
	return 0;
}