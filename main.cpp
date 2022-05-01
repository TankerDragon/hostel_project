#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Room {
public:
 int room_number, available_beds, total_beds;
 double price;


};

class Log {
public:
 string first_name, last_name, phone_number, date;
 int booked_room, price;
 bool is_active;
};



int main()
{

 Room room, temp_room;
 Log log;

 ifstream infile;
 ofstream outfile;


 int age, n, a = 1, i, m, dates, price;
 bool is_succsess = 0, is_exists = 0, already_deactivated = 0;
 string b, customer_name;
 string today = "4/29/2022";

while(a != 0) {
 cout << "Enter the command: " << endl;
 cout << "1. Book" << endl;
 cout << "2. All Records" << endl;
 cout << "3. All Rooms" << endl;
 cout << "4. Add new room" << endl;
 cout << "5. Payment" << endl;
 cout << "0. Exit" << endl;


 cin >> a;
 cout << endl;
 switch (a) {


 case 1: {
     cout << endl;
    cout << "<<<<<<- Booking ->>>>>>" << endl;
    cout << "All available rooms: " << endl;
    infile.open("rooms.dat", ios::binary);
    infile.seekg(0, ios::beg);
    i = 0;
    while (infile.read((char*)&room, sizeof(room)))
    {
        i++;
        if (room.available_beds == 0) {
            cout << i << ". Room number (" << room.room_number << ") has no available beds. Price of the room: " << room.price << "$ per bed."<< endl;
        }
        else {
            cout << i << ". Room number (" << room.room_number << ") has " << room.available_beds << " available beds with price: " << room.price << "$ per bed."<< endl;
        }

    }
    infile.close();
    cout << endl;
    cout << "Enter the room number (Enter 0 to back main menu): "; cin >> a;

    if (a != 0) {
        // decrement available rooms property of the room by 1
        infile.open("rooms.dat", ios::binary);
        outfile.open("temp_rooms.dat", ios::binary | ios::app);

        infile.seekg(0, ios::beg);
        while (infile.read((char*)&room, sizeof(room)))
        {
            if (room.room_number == a) {
                if (room.available_beds == 0) {
                    cout << "There is no available beds in this room!!!" << endl;
                } else {
                    room.available_beds = room.available_beds -1;
                    is_succsess = 1;
                    price = room.price;

                }
            }

            outfile.write((char*)&room, sizeof(room));
        }
        outfile.close();
        infile.close();
        remove("rooms.dat");
        rename("temp_rooms.dat", "rooms.dat");
    } else {a = 1;} //just to keep infinite cycle

    if (is_succsess) {
        is_succsess = 0;

        cout << endl;
        cout << "Enter First name: "; cin >> log.first_name;
        cout << "Enter Last name: "; cin >> log.last_name;
        cout << "Enter Phone number: "; cin >> log.phone_number;
        log.date = today;
        log.booked_room = a;
        log.is_active = 1;
        log.price = price;

        outfile.open("logs.dat", ios::binary | ios::app);
        outfile.write((char*)&log, sizeof(log));
        outfile.close();

        cout << "Successfully registered!" << endl;
    }
    break;
 }

 case 2: {
    cout << endl;
    cout << "<<<<<<- All Records ->>>>>>" << endl;
    cout << endl;
    infile.open("logs.dat", ios::binary);
    infile.seekg(0, ios::beg);
    while (infile.read((char*)&log, sizeof(log)))
    {
        cout << "Customer " << log.first_name << " "  << log.last_name << " registered a bed in room number: " << log.booked_room << ". Phone number: " << log.phone_number << " ";
        if (log.is_active) {
            cout << "(Active)" << endl;
        } else {
            cout << "(Completed)" << endl;
        }
    }
  infile.close();
  break;
 }

 case 3: {
    infile.open("rooms.dat", ios::binary);
    infile.seekg(0, ios::beg);
    i = 0;
    while (infile.read((char*)&room, sizeof(room)))
    {
        i++;
        if (room.available_beds == 0) {
            cout << i << ". Room number (" << room.room_number << ") has no available beds. Price of the room: " << room.price << "$ per bed."<< endl;
        }
        else {
            cout << i << ". Room number (" << room.room_number << ") has " << room.available_beds << " available beds with price: " << room.price << "$ per bed."<< endl;
        }

    }
    infile.close();
    break;
 }

 case 4: {
  cout << endl;
  cout << "<<<<<<- Add a new Room ->>>>>>" << endl;
  cout << endl;
  target:
  cout << "Enter room number: "; cin >> room.room_number;
  // check if the room number already exists      >>>>>>>>
  infile.open("rooms.dat", ios::binary);
  infile.seekg(0, ios::beg);
  while (infile.read((char*)&temp_room, sizeof(temp_room)))
  {
        if (temp_room.room_number == room.room_number) {
                is_exists = 1;
        }

  }
  infile.close();
  if (is_exists) {
    is_exists = 0;
    cout << "Room with this number already exists!!!" << endl;
    goto target;
  }

  // <<<<<<<<<<<<<<

  cout << "Enter number of beds: "; cin >> room.total_beds;
  room.available_beds = room.total_beds;
  cout << "Enter price per bed: "; cin >> room.price;


  outfile.open("rooms.dat", ios::binary | ios::app);
  outfile.write((char*)&room, sizeof(room));
  outfile.close();
  cout << "Successfully Added!!" << endl;

  break;
 }
 case 5: {
     is_succsess = 0;
    cout << endl;
    cout << "<<<<<<- Payment ->>>>>>" << endl;
    cout << "Enter Customer's name: "; cin >> customer_name;

    infile.open("logs.dat", ios::binary);
    infile.seekg(0, ios::beg);
        while (infile.read((char*)&log, sizeof(log)))
        {
            //cout << "Customer " << log.first_name << " "  << log.last_name << " registered a bed in room number: " << log.booked_room << ". Phone number: " << log.phone_number << " ";
            if (log.first_name == customer_name) {
                    if (log.is_active == 0) {
                        cout << "This record is already Deactivated!!!" << endl;
                        already_deactivated = 1;
                    } else {
                        price = log.price;
                        is_succsess =1;
                    }

            }
        }
    infile.close();

    if (is_succsess) {
        is_succsess = 0;

        // deactivating recor (but not deleting)
        infile.open("logs.dat", ios::binary);
        outfile.open("temp_logs.dat", ios::binary | ios::app);

        infile.seekg(0, ios::beg);
        while (infile.read((char*)&log, sizeof(log)))
        {
            if (log.first_name == customer_name) {
                    log.is_active = 0;
            }

            outfile.write((char*)&log, sizeof(log));
        }
        outfile.close();
        infile.close();
        remove("logs.dat");
        rename("temp_logs.dat", "logs.dat");

        cout << "Enter days of service: "; cin >> dates;
        cout << "Total Payment: " << dates*price << "$" << endl;
        cout << endl;
        cout << "Successfully Deactivated." << endl;
        cout << "Thanks for using our service!" << endl;
        // <<<<<<<<<<<<<<<<
    }else {
        if(!already_deactivated) {
            cout << "Customer not found!!!" << endl;
        } else {
            already_deactivated = 0;
        }

    }



    break;
 }
 case 0: {cout << "Bye!" << endl; break;}
 default: {
    cout << "wrong input" << endl;
 }
 }
 cout << endl;
 system("pause");
 }

 return 0;
}
