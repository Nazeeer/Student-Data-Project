#include<iostream>
#include<string>
using namespace std;
int main(){
	bool exists = 0;
	string check;
	int count;
	cout << "Enter The Number Of Students : ";
	cin >> count;
	string names[count];
	string subjects[5] = {"Math","Descret","Physics","Programming","Introduction"};
	int degrees[count][5];
	
	for(int i = 0 ; i < count ; i++){
		if(i==0){
	cout << "Enter Full Name : ";		
	}else{
	cout<<"enter the other name  : ";}
	cin.ignore();
	getline(cin,names[i]);
	int x = 0;
		while(x < 5){
		cout << subjects[x] << " : ";
		cin >> 	degrees[i][x];
			x++;
		}	
	}	
	// Menu
	Menu:
	int menuCode;
	system("cls");
	string menu[3] = {"Print Data","Edit Data","Delete"};
	for(int c = 0 ; c < 3 ; c++){
		cout << "[" << c+1 << "]" << " " << menu[c] << endl;
	}
	
	cout << endl << "Enter Service Number : ";
	cin >> menuCode;
	
		
	string name ; // Global Variable for Name
	if(menuCode == 1){
	exists = 0;
	cout << "Enter The Name : ";
	cin.ignore();
	getline(cin,name);
//	cin >> name;
	
	for(int j = 0 ; j < count ; j++){
		if(names[j] == name){
			int x = 0;
			system("cls"); // Clear The Command Line
			cout << "The Name : "<<  name << endl;
			while(x < 5){
			cout << subjects[x] << " : "<< degrees[j][x] << endl ;
				x++;
			}
		exists = 1;
		}
	}
		if(exists == 0){
			cout << "This Person doesn't exists \n ";
			
		}
		cout << "Do you want to back menu? [yes/no] : ";
		cin >> check;
		if(check == "yes"){
			goto Menu;
		}
		
	}else if(menuCode == 2){
		system("cls");
		cout << "Enter The Name : ";
		cin.ignore();
		getline(cin,name);
				
		for(int j = 0 ; j < count ; j++){
			if(names[j] == name){
				system("cls");
				int submenu;
				string newMenu[6] = {"Student Name","Math","Arabic","Physics","Programming","Introduction"};
				for(int x = 0 ; x < 5 ; x++){
					cout << "[" << x+1 << "]" << " " << newMenu[x] << endl;
				}
			cout << "What do you need to edit ? : " ;
			cin >> submenu;
			system("cls");
			switch(submenu){
				case 1:
					// Edit Student Name
					cout << "Enter New Name : ";
					cin.ignore();
					getline(cin,names[j]);
				break;
				case 2:
					// Edit Math grade
					cout << "Math : ";
					cin >> degrees[j][0];
				break;
				case 3:
					// Edit Arabic grade
					cout << "Arabic : ";
					cin >> degrees[j][1];
				break;
				case 4:
					// Edit Py grade
					cout << "Physics : ";
					cin >> degrees[j][2];
				break;
				case 5:
					// Edit Programming Grade
					cout << "Programming : ";
					cin >> degrees[j][3];
				break;
				case 6:
					// Edit Intro Grade
					cout << "Introduction : ";
					cin >> degrees[j][4];
				break;
					
			}
			// Check Back 
			cout << "Do you want to back menu? [yes/no] : ";
			cin >> check;
			if(check == "yes"){
				goto Menu;
			}	
			// End Check Back
			
			}
		}
	}else if(menuCode == 3){
		cout << "Enter name : "; 
		cin.ignore();
		getline(cin,name);
		for(int j = 0 ; j < count ; j++){
			if(names[j] == name){
				names[j] = "\0";
				exists = 1;
			}
		}
		if(exists == 0){
			cout << "This Person doesn't exists ";
			
		}
				// Check Back 
			cout << "Do you want to back menu? [yes/no] : ";
			cin >> check;
			if(check == "yes"){
				goto Menu;
			}	
			// End Check Back
	}
	
}
