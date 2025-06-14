#include <iostream>
using namespace std;

class Room {
private:
    string RoomNumber;
    string RoomType;
    float PricePerNight;
    bool isAvailable;

public:
    Room() {
        RoomNumber = "";
        RoomType = "";
        PricePerNight = 0.0;
        isAvailable = true;
    }

    void SetRoom(string num, string type, float price) {
        RoomNumber = num;
        RoomType = type;
        PricePerNight = price;
        isAvailable = true;
    }

    void CheckAvailability() {
        if (isAvailable)
            cout << "Room " << RoomNumber << " is Available!" << endl;
    }

    void BookRoom() {
        if (isAvailable) {
            isAvailable = false;
            cout << "Room booked successfully!" << endl;
        } else {
            cout << "Room is already booked!" << endl;
        }
    }

    void FreeRoom() {
        isAvailable = true;
        cout << "Room is now available!" << endl;
    }

    bool getAvailability() {
        return isAvailable;
    }

    string getRoomNumber() {
        return RoomNumber;
    }

    float getPrice() {
        return PricePerNight;
    }
};

class Customer {
private:
    int CustomerID;
    string Name;
    string Phone;
    string Email;

public:
    void GetInfo() {
        cout << "\nEnter Customer Information" << endl;
        cout << "Customer ID: ";
        cin >> CustomerID;
        cin.ignore();
        cout << "Name: ";
        getline(cin, Name);
        cout << "Phone No: ";
        cin >> Phone;
        cout << "Email: ";
        cin >> Email;
    }

    void ViewInfo() {
        cout << "\nCustomer Information" << endl;
        cout << "Customer ID: " << CustomerID << endl;
        cout << "Name: " << Name << endl;
        cout << "Phone No: " << Phone << endl;
        cout << "Email: " << Email << endl;
    }
};

class Booking {
private:
    int BookingID;
    Customer customer;
    Room* room;
    string CheckInDate;
    string CheckOutDate;
    float TotalAmount;

public:
    void CreateBooking(int id, Customer c, Room* r, string checkin, string checkout) {
        BookingID = id;
        customer = c;
        room = r;
        CheckInDate = checkin;
        CheckOutDate = checkout;
        CalculateTotal();
        room->BookRoom();
        cout << "\nBooking ID " << BookingID << " confirmed." << endl;
    }

    void CalculateTotal() {
        TotalAmount = room->getPrice() * 1; // 1 night assumed
    }

    void DisplayBooking() {
        cout << "\n-----------------------------" << endl;
        cout << "Booking ID: " << BookingID << endl;
        customer.ViewInfo();
        cout << "Room Number: " << room->getRoomNumber() << endl;
        cout << "Check-in Date: " << CheckInDate << endl;
        cout << "Check-out Date: " << CheckOutDate << endl;
        cout << "Total Amount: Rs. " << TotalAmount << endl;
        cout << "-----------------------------" << endl;
    }
};

class Hotel {
private:
    Room rooms[10];
    Booking bookings[10];
    Customer customers[10];
    int roomCount = 0;
    int bookingCount = 0;
    int customerCount = 0;

public:
    void AddRoom(Room r, bool showMsg = true) {
        if (roomCount < 10) {
            rooms[roomCount++] = r;
            if (showMsg)
                cout << "Room added successfully!" << endl;
        } else {
            cout << "No space to add more rooms!" << endl;
        }
    }

    void RegisterCustomer(Customer c) {
        if (customerCount < 10) {
            customers[customerCount++] = c;
            cout << "Customer registered successfully!" << endl;
        }
    }

    void MakeBooking() {
        if (bookingCount >= 10) {
            cout << "No booking slots available!" << endl;
            return;
        }

        Customer c;
        c.GetInfo();
        RegisterCustomer(c);

        for (int i = 0; i < roomCount; i++) {
            if (rooms[i].getAvailability()) {
                string checkin, checkout;
                cout << "Enter Check-in Date: ";
                cin >> checkin;
                cout << "Enter Check-out Date: ";
                cin >> checkout;

                int bookingID = bookingCount + 1;
                bookings[bookingCount].CreateBooking(bookingID, c, &rooms[i], checkin, checkout);
                bookingCount++;
                return;
            }
        }
        cout << "No rooms available for booking!" << endl;
    }

    void SearchAvailableRoom() {
        cout << "\nAvailable Rooms: " << endl;
        bool found = false;
        for (int i = 0; i < roomCount; i++) {
            if (rooms[i].getAvailability()) {
                rooms[i].CheckAvailability();
                found = true;
            }
        }
        if (!found)
            cout << "No rooms are currently available." << endl;
    }

    void ListBooking() {
        if (bookingCount == 0) {
            cout << "\nNo bookings made yet." << endl;
            return;
        }
        for (int i = 0; i < bookingCount; i++) {
            bookings[i].DisplayBooking();
        }
    }

    void PreloadRooms() {
        Room r1, r2, r3;
        r1.SetRoom("101", "Deluxe", 2500);
        r2.SetRoom("102", "Standard", 1800);
        r3.SetRoom("103", "Suite", 4000);
        AddRoom(r1, false);
        AddRoom(r2, false);
        AddRoom(r3, false);
    }
};

void Menu() {
    cout << "\n===============================" << endl;
    cout << "         HOTEL MENU" << endl;
    cout << "===============================" << endl;
    cout << "1. Add Room" << endl;
    cout << "2. Register Customer" << endl;
    cout << "3. Make Booking" << endl;
    cout << "4. View Available Rooms" << endl;
    cout << "5. View All Bookings" << endl;
    cout << "6. Exit" << endl;
    cout << "Enter your choice: ";
}

int main() {
    Hotel hotel;
    hotel.PreloadRooms(); // Load rooms silently (no print)
    int choice;

    while (true) {
        Menu();
        cin >> choice;

        if (choice == 1) {
            string num, type;
            float price;
            cout << "Enter Room Number: ";
            cin >> num;
            cout << "Enter Room Type: ";
            cin >> type;
            cout << "Enter Price per Night: ";
            cin >> price;

            Room r;
            r.SetRoom(num, type, price);
            hotel.AddRoom(r); // default showMsg = true
        } else if (choice == 2) {
            Customer c;
            c.GetInfo();
            hotel.RegisterCustomer(c);
        } else if (choice == 3) {
            hotel.MakeBooking();
        } else if (choice == 4) {
            hotel.SearchAvailableRoom();
        } else if (choice == 5) {
            hotel.ListBooking();
        } else if (choice == 6) {
            cout << "Exiting... Thank you for using the system!" << endl;
            break;
        } else {
            cout << "Invalid choice. Try again." << endl;
        }
    }

    return 0;
}
