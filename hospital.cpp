 #include<iostream>
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<conio.h>
#include<time.h>
#include<iomanip>
#include<stdlib.h>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y)
{	COORD c;
	c.X=x;
	c.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
int main()
{
	int opt,opt1,opt2,opt3,opt4=1;
	char fname[20];
	time_t rawtime;
	struct tm * timeinfo;
	time ( &rawtime );
	timeinfo = localtime ( &rawtime );
	gotoxy(60,7);
	cout<<"WELCOME TO"<<endl;
	gotoxy(53,8);
	cout<<" HOSPITAL MANAGEMENT SYSTEM"<<endl;
	c:
	gotoxy(46,9);
	cout<<"1 User"<<endl;
	gotoxy(46,10);
	cout<<"2 Staff"<<endl;
	gotoxy(46,11);
	cin>>opt;
	system("pause");
	system("cls");
	if(opt==1)
{
while(opt4!=0)
{   system("color 60");
	gotoxy(46,7);
	cout<<"1 Details Of Doctors"<<endl;
	gotoxy(46,8);
	cout<<"2 Hospital Charges"<<endl;
	gotoxy(46,9);
	cout<<"3 Blood Donation"<<endl;
	gotoxy(46,10);
	cout<<"4 History Of Hospital"<<endl;
	gotoxy(46,11);
	cout<<"5 Facilities In Hospital"<<endl;
	gotoxy(46,12);
	cout<<"6 List Of Staff"<<endl;
	gotoxy(46,13);
	cout<<"Enter option for the following details"<<endl;
	gotoxy(46,14);
	cin>>opt1;
	system("CLS");
if(opt1==1)
{	system("color 60");
	gotoxy(46,7);
	cout<<"1 Dr.Salman"<<" "<<"Specialist in Brain"<<endl;
	gotoxy(46,8);
	cout<<"2 Dr.Sharuk"<<" "<<"Specialist in Eyes"<<endl;
	gotoxy(46,9);
	cout<<"3 Dr.Amir Khan"<<" "<<"Specialist in Nervous"<<endl;
	gotoxy(46,10);
	cout<<"4 Dr.Aiswarya Rai"<<" "<<"Specialist in Diabetes"<<endl;
	gotoxy(46,11);
	cout<<"5 Dr.Manik"<<" "<<"Specialist in Heart"<<endl;
	gotoxy(46,12);
	cout<<"Enter option for the full details of Doctors"<<endl;
	gotoxy(46,13);
	cin>>opt2;
	system("CLS");
	if(opt2==1)
{
	system("color 60");
	gotoxy(46,7);
	cout<<"Dr.Salman"<<" "<<"Phd from Newyork";
	gotoxy(46,8);
	cout<<"Specilist in Brain Surgeon"<<endl;
	gotoxy(46,9);
	cout<<"Dr ID=201810571"<<endl;
	gotoxy(46,10);
	cout<<"Gender = Male"<<endl;
	gotoxy(46,11);
	cout<<"Date of Joinging : 15-7-1986"<<endl;
	gotoxy(46,12);
	cout<<"He is Specialist in the feild since 10years"<<endl;
	gotoxy(46,13);
	cout<<"Avaliable in month 5 times"<<endl;
	gotoxy(46,14);
	cout<<"dates 4,8,15,20,25 in every month"<<endl;
	gotoxy(46,15);
	cout<<"timings from 10am-1pm"<<"and"<<" 2pm-4pm"<<endl;
	gotoxy(46,16);
	cout<<"Contact Number - 123456"<<endl;
	gotoxy(46,17);
	cout<<"E-mail ID - salman@gmail.com"<<endl;
	}
else if(opt2==2)
{	system("color 60");
	gotoxy(46,8);
	cout<<"Dr.Sharuk     Phd from China";
	gotoxy(46,9);
	cout<<"Specilist in Ophthalmologist"<<endl;
	gotoxy(46,10);
	cout<<"Dr ID=201810578"<<endl;
	gotoxy(46,11);
	cout<<"Gender = Male"<<endl;
	gotoxy(46,12);
	cout<<"Date of joinging 15-7-1990"<<endl;
	gotoxy(46,13);
	cout<<"He is Specialist in the feild since 10years"<<endl;
	gotoxy(46,14);
	cout<<"Avaliable in month 5 times"<<endl;
	gotoxy(46,15);
	cout<<"dates 2,8,12,20,27 in every month"<<endl;
	gotoxy(46,16);
	cout<<"timings 10am-1pm"<<"and"<<" 2pm-4pm"<<endl;
	gotoxy(46,17);
	cout<<"Contact Number - 87543"<<endl;
	gotoxy(46,18);
	cout<<"E-mail ID - sharuk@gmail.com"<<endl;
}
else if(opt2==3)
{	system("color 60");
	gotoxy(46,7);
	cout<<"Dr.Amir Khan"<<" "<<"Phd from America";
	gotoxy(46,8);
	cout<<"Specilist in Neurologist"<<endl;
	gotoxy(46,9);
	cout<<"Dr ID=201810580"<<endl;
	gotoxy(46,10);
	cout<<"Gender = Male"<<endl;
	gotoxy(46,11);
	cout<<"Date of joinging 15-7-1986"<<endl;
	gotoxy(46,12);
	cout<<"He is Specialist in the feild since 10years"<<endl;
	gotoxy(46,13);
	cout<<"Avaliable in month 5 times"<<endl;
	gotoxy(46,14);
	cout<<"Dates 4,8,15,20,25 in every month"<<endl;
	gotoxy(46,15);
	cout<<"timings 10am-1pm"<<"and"<<" 2pm-4pm"<<endl;
	gotoxy(46,16);
	cout<<"Contact Number - 3656546"<<endl;
	gotoxy(46,17);
	cout<<"E-mail ID - amir_khan@gmail.com"<<endl;
}
else if(opt2==4)
	{
	system("color 60");
	gotoxy(46,7);
	cout<<"Dr.Aishwarya Rai"<<" "<<"Phd from Chicago";
	gotoxy(46,8);
	cout<<"Specilist in Diabetes"<<endl;
	gotoxy(46,9);
	cout<<"Dr ID=201810585"<<endl;
	gotoxy(46,10);
	cout<<"Gender = Female"<<endl;
	gotoxy(46,11);
	cout<<"Date of joinging 15-7-1986"<<endl;
	gotoxy(46,12);
	cout<<"He is Specialist in the feild since 10years"<<endl;
	gotoxy(46,13);
	cout<<"Avaliable in month 5 times"<<endl;
	gotoxy(46,14);
	cout<<"dates 4,8,15,20,25 in every month"<<endl;
	gotoxy(46,15);
	cout<<"timings 10am-1pm"<<"and"<<" 2pm-4pm"<<endl;
	gotoxy(46,16);
	cout<<"Contact Number - 356788"<<endl;
	gotoxy(46,17);
	cout<<"E-mail ID - Aiswarya_rai@gmail.com"<<endl;
	}
else if(opt2==5)
{
	system("color 60");
	gotoxy(46,7);
	cout<<"Dr.Manik"<<" "<<"Phd from Australia";
	gotoxy(46,8);
	cout<<"Specilist in Cardiologist"<<endl;
	gotoxy(46,9);
	cout<<"Dr ID=201810590"<<endl;
	gotoxy(46,10);
	cout<<"Gender = Male"<<endl;
	gotoxy(46,11);
	cout<<"Date of joinging 15-7-1986"<<endl;
	gotoxy(46,12);
	cout<<"He is specialist in the feild since 10years"<<endl;
	gotoxy(46,13);
	cout<<"Avaliable in month 5 times"<<endl;
	gotoxy(46,14);
	cout<<"Dates 4,8,15,20,25 in every month"<<endl;
	gotoxy(46,15);
	cout<<"Timings 10am-1pm"<<"and"<<" 2pm-4pm"<<endl;
	gotoxy(46,16);
	cout<<"Contact Number - 657684"<<endl;
	gotoxy(46,17);
	cout<<"E-mail ID - manik@gmail.com"<<endl;
}
else
	cout<<"Enter Valid Option"<<endl;
}
else if(opt1==2)
{	system("color 60");
	gotoxy(46,7);
	cout<<"1 Ac rooms"<<endl;
	gotoxy(46,8);
	cout<<"2 Non-Ac rooms"<<endl;
	gotoxy(46,9);
	cout<<"3 Medical Charge"<<endl;
	gotoxy(46,10);
	cout<<"4 Full-Body Checkup Charge"<<endl;
	gotoxy(46,11);
	cout<<"Enter option for following charges"<<endl;
	gotoxy(46,12);
	cin>>opt3;
	system("CLS");
if(opt3==1)
{	system("color 60");
	gotoxy(46,7);
	cout<<"Ac room charge"<<endl;
	gotoxy(46,8);
	cout<<"room charge = 500/-perday"<<endl;

}
else if(opt3==2)
{   system("color 60");
	gotoxy(46,7);
	cout<<"Non-Ac room charge"<<endl;
	gotoxy(46,8);
	cout<<"room charge = 200/-perday"<<endl;
}
else if(opt3==3)
	{
		system("color 60");
	gotoxy(46,7);
	cout<<"Medical Charge"<<endl;
	gotoxy(46,8);
	cout<<"normal medical charge = 200"<<endl;
	}
else if(opt3==4)
	{
	system("color 60");
	gotoxy(46,7);
	cout<<"Full Body Checkup Charge"<<endl;
	gotoxy(46,8);
	cout<<"full body medical charge = 1000"<<endl;
	}
else
	cout<<"Enter valid option"<<endl;
	}
else if(opt1==3)
	{
		system("color 60");
	gotoxy(46,7);
	cout<<"Blood donation"<<endl;
	gotoxy(46,8);
	cout<<"Blood donation held 4 times a month on every thursday"<<endl;
	gotoxy(46,9);
	cout<<"from 10am - 3pm"<<endl;
	gotoxy(46,10);
	cout<<"A Bottle of Blood saved my Life, Is it Your's"<<endl;
	}
else if(opt1==4)
	{
		system("color 60");
	gotoxy(46,7);
	cout<<"APOLLO HOSPITAL"<<endl;
	gotoxy(46,8);
	cout<<"Constructed in 1950"<<endl;
	gotoxy(46,9);
	cout<<"Director - K.Anil Reddy"<<endl;
	gotoxy(46,10);
	cout<<"It has 50 branches all over India"<<endl;
	gotoxy(46,11);
	cout<<"In Delhi,Hydrabad,Bhubaneswar,etc"<<endl;
	}
else if(opt1==5)
	{
	system("color 60");
	gotoxy(46,7);
	cout<<"Facilites in our Hospital"<<endl;
	gotoxy(46,8);
	cout<<"1 Pharmacy"<<endl;
	gotoxy(46,9);
	cout<<"2 Ambulance Service"<<endl;
	gotoxy(46,10);
	cout<<"3 Special Equipments from America"<<endl;
	gotoxy(46,11);
	cout<<"4 Miscellenous"<<endl;
	}
else if(opt1==6)
	{
	system("color 60");
	gotoxy(46,7);
	cout<<"Nurses =  20"<<endl;
	gotoxy(46,8);
	cout<<"Ward Boys = 10"<<endl;
	gotoxy(46,9);
	cout<<"Doctors = 15"<<endl;
	}
else
{
	system("color 60");
	gotoxy(46,7);
	cout<<"Enter valid option"<<endl;

}
	gotoxy(46,21);
	cout<<"1 Check again"<<endl;
	gotoxy(46,22);
	cout<<"0 To Exit"<<endl;
	gotoxy(46,23);
	cin>>opt4;
	system("CLS");
}
}
else if(opt==2)
{
	char fname[20];
	time_t rawtime;
	struct tm * timeinfo;
	time ( &rawtime );
	timeinfo = localtime ( &rawtime );
	int i;
	int login();
	login();
	b:
	gotoxy(46,7);
	cout<<" HOSPITAL MANAGEMENT SYSTEM "<<endl;
	gotoxy(46,8);
	cout<<"Please,  Choose from the following Options: "<<endl;
	gotoxy(46,9);
	cout<<"1 Add New Patient Record"<<endl;
	gotoxy(46,10);
	cout<<"2 Add Diagnosis Information"<<endl;
	gotoxy(46,11);
	cout<<"3 Full History of the Patient"<<endl;
	gotoxy(46,12);
	cout<<"4 Exit the Program "<<endl;
	a:
	gotoxy(46,13);
	cout<<"Enter your choice: "<<endl;
	gotoxy(46,14);
	cin>>i;
	gotoxy(46,15);
	if(i>4||i<1){cout<<"Invalid Choice";cout<<"Try again...........";goto a;}
	system("cls");
if(i==1)
{
  time_t rawtime;
  struct tm * timeinfo;

  time ( &rawtime );
  timeinfo = localtime ( &rawtime );
  cout<< asctime (timeinfo);
  ofstream pat_file;
  char fname[20];
  gotoxy(46,4);
  cout<<"Enter the patient's file name : "<<endl;
  gotoxy(46,5);
  cin.ignore();
  gets(fname);
  pat_file.open(fname);
  	if(!fname)
	{gotoxy(46,15);
	cout<<"Error while opening the file"<<endl;goto b;
	}
else
		{
       struct patient_info
          {
       char name[20];
       char address[100];
       char contact[10];
       char age[5];
       char gender[8];
       char blood_gp[5];
       char disease_past[50];
       char id[15];
             };
    patient_info ak;
    gotoxy(46,7);
	cout<<"Name : ";pat_file<<"Name : ";gets(ak.name);pat_file<<ak.name<<endl;
    gotoxy(46,8);
	cout<<"Address : ";pat_file<<"Address : ";gets(ak.address);pat_file<<ak.address<<endl;
    gotoxy(46,9);
	cout<<"Contact Number : ";pat_file<<"Contact Number : ";gets(ak.contact);pat_file<<ak.contact<<endl;
    gotoxy(46,10);
	cout<<"Age : ";pat_file<<"Age : ";gets(ak.age);pat_file<<ak.age<<endl;
    gotoxy(46,11);
	cout<<"Gender : ";pat_file<<"Gender : ";gets(ak.gender);pat_file<<ak.gender<<endl;
    gotoxy(46,12);
	cout<<"Blood Group : ";pat_file<<"Blood Group : ";gets(ak.blood_gp);pat_file<<ak.blood_gp<<endl;
    gotoxy(46,13);
	cout<<"Any Major disease suffered earlier : ";pat_file<<"Any Major disease suffered earlier : ";gets(ak.disease_past);pat_file<<ak.disease_past<<endl;
    gotoxy(46,14);
	cout<<"Patient ID : ";pat_file<<"Patient ID : ";gets(ak.id);pat_file<<ak.id<<endl;
    gotoxy(46,15);
	cout<<"Information Saved Successfully"<<endl;
    }
  system("pause");
  system("cls");
  goto b;

}

else if(i==2)
{
    fstream pat_file;
    gotoxy(46,7);
    cout<<"Enter the patient's file name to be opened : "<<endl;
    cin.ignore();
    gets(fname);
    system("cls");
	pat_file.open(fname, ios::in);
	if(!pat_file)
	{
	gotoxy(46,15);
	cout<<"Error while opening the file"<<endl;goto b;
	}
	else
	{
  	gotoxy(46,9);
	cout<<"Information about "<<fname<<endl;
	string info;
	while(pat_file.good())
	{
	getline(pat_file,info);
	cout<<info<<endl;
	}
	cout<<endl;
	pat_file.close();
	pat_file.open(fname, ios::out | ios::app);
    cout<<endl;
	cout<<"Adding more information in patient's file................on : "<<asctime (timeinfo);pat_file<<"Description of "<<asctime (timeinfo)<<endl;
                struct app
                {
               char symptom[500];
               char diagnosis[500];
			   char medicine[500];
               char addmission[30];
               char ward[15];
                  };
    app add;
    cout<<"Symptoms : "; pat_file<<"Symptoms : ";gets(add.symptom); pat_file<<add.symptom<<endl;
    //gotoxy(46,11);
	cout<<"Diagnosis : "; pat_file<<"Diagnosis : ";gets(add.diagnosis); pat_file<<add.diagnosis<<endl;
    //gotoxy(46,12);
	cout<<"Medicines : "; pat_file<<"Medicines : ";gets(add.medicine); pat_file<<add.medicine<<endl;
    //gotoxy(46,13);
	cout<<"Addmission Required? : "; pat_file<<"Addmission Required? : ";gets(add.addmission); pat_file<<add.addmission<<endl;
    //gotoxy(46,14);
	cout<<"Type of ward : "; pat_file<<"Type of ward : ";gets(add.ward); pat_file<<add.ward<<endl;pat_file<<endl;
    //gotoxy(46,15);
	cout<<add.ward<<" Ward is alloted Successfully"<<endl;
	//gotoxy(46,16);
	pat_file.close();
	cout<<endl;
	system("pause");
    system("cls");
	goto b;
	}
}

else if(i==3)
{
    fstream pat_file;
    gotoxy(46,7);
    cout<<"Enter the patient's file name to be opened : "<<endl;
    gotoxy(46,8);
	cin.ignore();
    gets(fname);
    system("cls");
	pat_file.open(fname, ios::in);
if(!pat_file)
	{
	gotoxy(46,15);
	cout<<"No file created"<<endl;goto b;
		}
else
	{
	gotoxy(46,9);
	cout<<" Full Medical History of "<<fname<<endl;
	string info;
	while(pat_file.good())
	{
	getline(pat_file,info);
	cout<<info<<endl;
	}
	cout<<endl;
   }
   system("pause");
   system("cls");
   goto b;
}

else if(i==4)
{
   system("cls");
   gotoxy(46,10);
   cout<<"THANK YOU FOR USING"<<endl;
   gotoxy(46,13);
   cout<<"HOSPITAL MANAGEMENT SYSTEM"<<endl;
}
else
{
   gotoxy(46,15);
   cout<<"Enter valid option"<<endl;
}

}
else
{
   gotoxy(46,15);
   cout<<"Enter valid option"<<endl;goto c;
}
}
int login()
{
   string pass ="",user;
   char ch;
   gotoxy(46,7);
   cout<<" HOSPITAL MANAGEMENT SYSTEM "<<endl;
   gotoxy(46,10);
   cout<<" LOGIN "<<endl;
   gotoxy(46,12);
   cout<<"Enter Username"<<endl;
   gotoxy(46,13);
   /*cin>>user;*/
   gotoxy(46,14);
   cout << "Enter Password: "<<endl;
   gotoxy(46,15);
   ch = _getch();
   while(ch != 13){
   pass.push_back(ch);
   cout << '*';
   ch = _getch();
   }
   if(user=="anil"&&pass == "pass"){
   gotoxy(46,17);
   cout << "Access Granted! "<<endl;
   system("PAUSE");
   system ("CLS");
   }else{
   gotoxy(46,17);
   cout << "Access Aborted...Please Try Again"<<endl;
   system("PAUSE");
   system("CLS");
   login();
   }
}
