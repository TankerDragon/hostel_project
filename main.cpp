#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
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

void design() {
    cout << endl;
    cout << "                                                                    ||========================||" << endl;
    cout << "                                                                    ||                        ||" << endl;
    cout << "                                                                    ||                        ||" << endl;
    cout << "                                                            ||-------                          -------||" << endl;
    cout << "                                                            ||                                        ||" << endl;
    cout << "                                                            ||                                        ||" << endl;
    cout << "                                                    ||-------                                          -------||" << endl;
    cout << "                                                    ||                                                        ||" << endl;
    cout << "                                                    ||                                                        ||" << endl;
    cout << "                                            ||-------             asfdavkalx9q0jrt4mf,mqk.z--q-kgm             -------||" << endl;
    cout << "                                            ||                   qwer021,-z.-g,9ri9t83810cmdk,z.ggl                   ||" << endl;
    cout << "                                            ||                  sjimcao,-fkqj8t821-0,zfjrv..[q.=vkwe                  ||" << endl;
    cout << "                                            ||                 kqwc0er109248998576.zs[a][,dvsafkrjv29                 ||" << endl;
    cout << "                                            ||                agiwqp9ertcq0d,kzqwe9tjr8762-x[pda{g]faz                ||" << endl;
    cout << "                                            ||                 240392u53298cmas,z.-w0-q21=4032968jvt5                 ||" << endl;
    cout << "                                            ||                  zwqntru242390az.s-a-q0.-4t2834thewqt                  ||" << endl;
    cout << "                                            ||                   te91w520894h328x,x9fa-sdfkdsja0q=q                   ||" << endl;
    cout << "                                            ||                    xfimowneroxfm,q0mfwngtqi=z,qw=wh                    ||" << endl;
    cout << "                                            ||-------              gok-erwkmi,c.-wkq09trgwerk-==q              -------||" << endl;
    cout << "                                                    ||                                                        ||" << endl;
    cout << "                                                    ||                                                        ||" << endl;
    cout << "                                                    ||-------                                          -------||" << endl;
    cout << "                                                            ||                                        ||" << endl;
    cout << "                                                            ||                                        ||" << endl;
    cout << "                                                            ||-------                          -------||" << endl;
    cout << "                                                                    ||                        ||" << endl;
    cout << "                                                                    ||                        ||" << endl;
    cout << "                                                                    ||========================||" << endl;
    Sleep(500);
    system("CLS");

    cout << endl;
    cout << "                                                                    ||========================||" << endl;
    cout << "                                                                    ||                        ||" << endl;
    cout << "                                                                    ||                        ||" << endl;
    cout << "                                                            ||-------                          -------||" << endl;
    cout << "                                                            ||                                        ||" << endl;
    cout << "                                                            ||                                        ||" << endl;
    cout << "                                                    ||-------                                          -------||" << endl;
    cout << "                                                    ||                                                        ||" << endl;
    cout << "                                                    ||                                                        ||" << endl;
    cout << "                                            ||-------               jcunqwe9rnuwneurfxjqiwtj82145j             -------||" << endl;
    cout << "                                            ||                   329104iz,kkcadsnfklmfpewqcnm093210                   ||" << endl;
    cout << "                                            ||                  -21z.,sacn sa[djasceiqj320981jiair[r                  ||" << endl;
    cout << "                                            ||                 jkncasdjr019ujlrp32]i-1=zalf[as]fweropq                ||" << endl;
    cout << "                                            ||                nwlj2[43901kz]qqkwexqwneqrw[ewqkzneq-1834               ||" << endl;
    cout << "                                            ||                 klmncfjl0c2349kizapos.pcds[apr[21439diu                ||" << endl;
    cout << "                                            ||                  zmsodjochnuwiqer[igjfnbu954jfksdkoewq                 ||" << endl;
    cout << "                                            ||                   cmkfdsalijfxo8u48x9sdjafnpqw;'z,co                   ||" << endl;
    cout << "                                            ||                    askdfkasij423u89hf981-9ahdfa1s3                     ||" << endl;
    cout << "                                            ||-------              ap[dsa[pcf,odsnahfuyadsweh342               -------||" << endl;
    cout << "                                                    ||                                                        ||" << endl;
    cout << "                                                    ||                                                        ||" << endl;
    cout << "                                                    ||-------                                          -------||" << endl;
    cout << "                                                            ||                                        ||" << endl;
    cout << "                                                            ||                                        ||" << endl;
    cout << "                                                            ||-------                          -------||" << endl;
    cout << "                                                                    ||                        ||" << endl;
    cout << "                                                                    ||                        ||" << endl;
    cout << "                                                                    ||========================||" << endl;
    Sleep(500);
    system("CLS");


    cout << endl;
    cout << "                                                                    ||========================||" << endl;
    cout << "                                                                    ||                        ||" << endl;
    cout << "                                                                    ||                        ||" << endl;
    cout << "                                                            ||-------                          -------||" << endl;
    cout << "                                                            ||                                        ||" << endl;
    cout << "                                                            ||                                        ||" << endl;
    cout << "                                                    ||-------                                          -------||" << endl;
    cout << "                                                    ||                                                        ||" << endl;
    cout << "                                                    ||                                                        ||" << endl;
    cout << "                                            ||-------               fdavk   9q0  t4mf  qk.z--q  gm             -------||" << endl;
    cout << "                                            ||                   q    21,-z.-g,9ri   381  mdk,   gl                   ||" << endl;
    cout << "                                            ||                  sjimca  -fkqj  821-0,  jrv..[q.   we                  ||" << endl;
    cout << "                                            ||                 kqw  er10   89  576.zs   [vsafk  rj  9                 ||" << endl;
    cout << "                                            ||                agiw   ert  0d,   w  tjr8762-x  da{g]faz                ||" << endl;
    cout << "                                            ||                 240  2u53298  as,z.-w   21=4032  8jvt5                 ||" << endl;
    cout << "                                            ||                  zw   ru24  90az.s-a-q0.-4t283  hewqt                  ||" << endl;
    cout << "                                            ||                   t  1w5   94h3  x,x9fa-sdfk  ja0q=q                   ||" << endl;
    cout << "                                            ||                    xfimown  oxfm,   fw  tqi=z  w=wh                    ||" << endl;
    cout << "                                            ||-------              gok-e  k  ,c.-wkq0   gwe  -==q              -------||" << endl;
    cout << "                                                    ||                                                        ||" << endl;
    cout << "                                                    ||                                                        ||" << endl;
    cout << "                                                    ||-------                                          -------||" << endl;
    cout << "                                                            ||                                        ||" << endl;
    cout << "                                                            ||                                        ||" << endl;
    cout << "                                                            ||-------                          -------||" << endl;
    cout << "                                                                    ||                        ||" << endl;
    cout << "                                                                    ||                        ||" << endl;
    cout << "                                                                    ||========================||" << endl;

    Sleep(500);
    system("CLS");
    cout << endl;
    cout << "                                                                    ||========================||" << endl;
    cout << "                                                                    ||                        ||" << endl;
    cout << "                                                                    ||                        ||" << endl;
    cout << "                                                            ||-------                          -------||" << endl;
    cout << "                                                            ||                                        ||" << endl;
    cout << "                                                            ||                                        ||" << endl;
    cout << "                                                    ||-------                                          -------||" << endl;
    cout << "                                                    ||                                                        ||" << endl;
    cout << "                                                    ||                                                        ||" << endl;
    cout << "                                            ||-------               fk   9 0   f  q   f d     -q               -------||" << endl;
    cout << "                                            ||                   q    a  21,-   g     i   38k,   gl                   ||" << endl;
    cout << "                                            ||                  s i  H 8        ,  s   .t.    l                       ||" << endl;
    cout << "                                            ||                 k w  e 10     89  6. z  s     k  rj  9                 ||" << endl;
    cout << "                                            ||                aw   ert  0  ,    tjr  -   { ]f z                       ||" << endl;
    cout << "                                            ||                  40m  2 a  n  ,a.  g  e =m  e n t                      ||" << endl;
    cout << "                                            ||                  zw   r 24  z.a   q .-4   t   3  h  t                  ||" << endl;
    cout << "                                            ||                   t  1   9  x,x  a   sd   j  q  f  q                   ||" << endl;
    cout << "                                            ||                    n  fm,     w  =z  w=   h    j                       ||" << endl;
    cout << "                                            ||-------              go -e    k  ,c   0   gwe  -==q              -------||" << endl;
    cout << "                                                    ||                                                        ||" << endl;
    cout << "                                                    ||                                                        ||" << endl;
    cout << "                                                    ||-------                                          -------||" << endl;
    cout << "                                                            ||                                        ||" << endl;
    cout << "                                                            ||                                        ||" << endl;
    cout << "                                                            ||-------                          -------||" << endl;
    cout << "                                                                    ||                        ||" << endl;
    cout << "                                                                    ||                        ||" << endl;
    cout << "                                                                    ||========================||" << endl;

    Sleep(500);
    system("CLS");
    cout << endl;
    cout << "                                                                    ||========================||" << endl;
    cout << "                                                                    ||                        ||" << endl;
    cout << "                                                                    ||                        ||" << endl;
    cout << "                                                            ||-------                          -------||" << endl;
    cout << "                                                            ||                                        ||" << endl;
    cout << "                                                            ||                                        ||" << endl;
    cout << "                                                    ||-------                                          -------||" << endl;
    cout << "                                                    ||                                                        ||" << endl;
    cout << "                                                    ||                                                        ||" << endl;
    cout << "                                            ||-------                                                          -------||" << endl;
    cout << "                                            ||                                                                        ||" << endl;
    cout << "                                            ||                               H O S T E L                              ||" << endl;
    cout << "                                            ||                                                                        ||" << endl;
    cout << "                                            ||                                                                        ||" << endl;
    cout << "                                            ||                           M A N A G E M E N T                          ||" << endl;
    cout << "                                            ||                                                                        ||" << endl;
    cout << "                                            ||                                                                        ||" << endl;
    cout << "                                            ||                                                                        ||" << endl;
    cout << "                                            ||-------                                                          -------||" << endl;
    cout << "                                                    ||                                                        ||" << endl;
    cout << "                                                    ||                                                        ||" << endl;
    cout << "                                                    ||-------                                          -------||" << endl;
    cout << "                                                            ||                                        ||" << endl;
    cout << "                                                            ||                                        ||" << endl;
    cout << "                                                            ||-------                          -------||" << endl;
    cout << "                                                                    ||                        ||" << endl;
    cout << "                                                                    ||                        ||" << endl;
    cout << "                                                                    ||========================||" << endl;

    Sleep(500);
    cout << "Welcome to Hostel Management system of group project" << endl;
}

int main()
{
    ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);
    design();

    Room room, temp_room;
    Log log;

    ifstream infile;
    ofstream outfile;

    int age, n, a = 1, i, m, dates, price, r;
    bool is_succsess = 0, is_exists = 0, already_deactivated = 0;
    string b, customer_name;
    string today = "4/29/2022";


    while (a != 0) {
        Sleep(1000);
        system("CLS");
        cout << "\t\tEnter the command: " << endl;
        cout << "\t\t1. Book" << endl;
        cout << "\t\t2. All Records" << endl;
        cout << "\t\t3. All Rooms" << endl;
        cout << "\t\t4. Add new room" << endl;
        cout << "\t\t5. Payment" << endl;
        cout << "\t\t0. Exit" << endl;


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
                    cout << i << ". Room number (" << room.room_number << ") has no available beds. Price of the room: " << room.price << "$ per bed." << endl;
                }
                else {
                    cout << i << ". Room number (" << room.room_number << ") has " << room.available_beds << " available beds with price: " << room.price << "$ per bed." << endl;
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
                        }
                        else {
                            room.available_beds = room.available_beds - 1;
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
            }
            else { a = 1; } //just to keep infinite cycle

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
                /////////////////////
                cout << endl;
                cout << "Press any number to go back: "; cin >> a;
                if (a == 0) { a = 1; }
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
                cout << "Customer " << log.first_name << " " << log.last_name << " registered a bed in room number: " << log.booked_room << ". Phone number: " << log.phone_number << " ";
                if (log.is_active) {
                    cout << "(Active)" << endl;
                }
                else {
                    cout << "(Completed)" << endl;
                }
            }
            infile.close();
            cout << endl;
            cout << "Press any number to go back: "; cin >> a;
            if (a == 0) { a = 1; }

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
                    cout << i << ". Room number (" << room.room_number << ") has no available beds. Price of the room: " << room.price << "$ per bed." << endl;
                }
                else {
                    cout << i << ". Room number (" << room.room_number << ") has " << room.available_beds << " available beds with price: " << room.price << "$ per bed." << endl;
                }

            }
            infile.close();
            cout << endl;
            cout << "Press any number to go back: "; cin >> a;
            if (a == 0) { a = 1; }

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
            cout << endl;
            cout << "Press any number to go back: "; cin >> a;
            if (a == 0) { a = 1; }

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
                    }
                    else {
                        price = log.price;
                        is_succsess = 1;
                    }

                }
            }
            infile.close();

            if (is_succsess) {
                is_succsess = 0;

                // deactivating record (but not deleting)
                infile.open("logs.dat", ios::binary);
                outfile.open("temp_logs.dat", ios::binary | ios::app);

                infile.seekg(0, ios::beg);
                while (infile.read((char*)&log, sizeof(log)))
                {
                    if (log.first_name == customer_name) {
                        log.is_active = 0;
                        r = log.booked_room;
                    }

                    outfile.write((char*)&log, sizeof(log));
                }
                outfile.close();
                infile.close();
                remove("logs.dat");
                rename("temp_logs.dat", "logs.dat");

                cout << "Enter days of service: "; cin >> dates;
                cout << "Total Payment: " << dates * price << "$" << endl;
                cout << endl;
                cout << "Successfully Deactivated." << endl;
                cout << "Thanks for using our service!" << endl;
                // <<<<<<<<<<<<<<<<
                // add 1 available bed to Class Room
                infile.open("rooms.dat", ios::binary);
                outfile.open("temp_rooms.dat", ios::binary | ios::app);

                infile.seekg(0, ios::beg);
                while (infile.read((char*)&room, sizeof(room)))
                {
                    if (room.room_number == r) {
                            room.available_beds += 1;
                    }

                    outfile.write((char*)&room, sizeof(room));
                }
                outfile.close();
                infile.close();
                remove("rooms.dat");
                rename("temp_rooms.dat", "rooms.dat");
                // <<<<<<<<<<<<<<<<<<<<<<

            }
            else {
                if (!already_deactivated) {
                    cout << "Customer not found!!!" << endl;
                }
                else {
                    already_deactivated = 0;
                }

            }

            cout << endl;
            cout << "Press any number to go back: "; cin >> a;
            if (a == 0) { a = 1; }

            break;
        }
        case 0: {
            cout << "Bye!" << endl;

            break; }
        default: {
            cout << "wrong input" << endl;
        }
        }
        cout << endl;

    }
    system("pause");
    return 0;
}
