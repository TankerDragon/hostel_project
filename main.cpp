#include <iostream>
#include <fstream>

using namespace std;

class Room {
public:
 int room_number, available_beds, total_beds;
 double price;
 string type; // Standard, Lux, VIP


};

class Log {
public:
 string first_name, last_name, phone_number, date;
 int booked_room;
 bool is_active;
};



int main()
{

 Room room, temp_room;
 Log log;

 ifstream infile;
 ofstream outfile;


 int age, n, a = 1, i, m;

 cout << "Enter the command: " << endl;
 cout << "1. Show all available rooms" << endl;
 cout << "2. Book a bed" << endl;
 cout << "3. Price" << endl;
 cout << "4. See the records" << endl;
 cout << "5. Delete a record" << endl;
 cout << "6. Register" << endl;
 cout << "7. rooms" << endl;
 cout << "8. add room" << endl;
 cout << "0. Exit" << endl;

 while(a != 0) {
 cin >> a;

 if (a == 1) {

 }
 else if (a == 2) {}
 else if (a == 3) {}
 else if (a == 4) {
  infile.open("logs.dat", ios::binary);
  infile.seekg(0, ios::beg);
  while (infile.read((char*)&log, sizeof(log)))
  {
   cout << log.first_name << endl;
   cout << log.last_name << endl;
   cout << log.phone_number << endl;
   cout << log.booked_room << endl;
   cout << log.is_active << endl;
  }
  infile.close();
 }
 else if (a == 5) {}
 else if (a == 6) {
  cout << "first name: "; cin >> log.first_name;
  cout << "last name: "; cin >> log.last_name;
  cout << "phone number: "; cin >> log.phone_number;
  cout << "booked room: "; cin >> log.booked_room;
  log.is_active = 1;


  outfile.open("logs.dat", ios::binary | ios::app);
  outfile.write((char*)&log, sizeof(log));
  outfile.close();
 }
 else if (a == 7) {
  infile.open("rooms.dat", ios::binary);
  infile.seekg(0, ios::beg);
  while (infile.read((char*)&room, sizeof(room)))
  {
   cout << room.room_number << endl;
   cout << room.available_beds << endl;
   cout << room.total_beds << endl;
   cout << room.price << endl;
   cout << room.type << endl;
  }
  infile.close();
 }
 else if (a == 8) {
  cout << "room_number: "; cin >> room.room_number;
  cout << "available_beds: "; cin >> room.available_beds;
  cout << "total_beds: "; cin >> room.total_beds;
  cout << "type: "; cin >> room.type;
  cout << "price: "; cin >> room.price;

  outfile.open("rooms.dat", ios::binary | ios::app);
  outfile.write((char*)&room, sizeof(room));
  outfile.close();
 }
 else if (a == 0) {}
 else {
  cout << "wrong input" << endl;
 }
 }
 system("pause");

 return 0;
}
