#include<iostream>
using namespace std;

class hotel{
	private:
	static int id;
	int hotel_id;
	string hotel_name;
	string hotel_type;
	string hotel_rating;
	static string hotel_loction;
    int hotel_establish_year;
	int hotel_staff_quantity;
	int hotel_room_quantity;
	
	public:
			void setdata(){
				hotel_id = ++id;
				cout << "hotel_name : ";
				cin >> hotel_name;
				
				cout << "hotel_type : ";
				cin >> hotel_type;
				
				cout << "hotel_rating : ";
				cin >> hotel_rating;
				
				cout << "hotel_establish_year : ";
				cin >> hotel_establish_year;
				
				cout << "hotel_staff_quantity : ";
				cin >> hotel_staff_quantity;
				
				cout << "hotel_room_quantity : ";
				cin >> hotel_room_quantity;
				
			}
		static void header(){
			cout << "id\tname\ttype\trating\tlocal\tyear\tstaff\troom" << endl;
			cout << "======= ======= ======= ======= ======= ======= ======= =======" ;
			}
			void table(){
				cout << hotel_id << "\t" << hotel_name << "\t" << hotel_type << "\t" << hotel_rating << "\t" << hotel_loction << "\t" << hotel_establish_year << "/t" << hotel_staff_quantity << "\t" <<  hotel_room_quantity << "\t" << endl;
			}	
};
int hotel::id=0;
string hotel::hotel_loction="surat";

int main()
{
	int n,i;
	cout << "enter number : ";
	cin >> n;
	hotel h[n];
	
	
	for(int i=0;i<n;i++) h[i].setdata();
	hotel::header();
	for(int i=0;i<n;i++) h[i].table();
}
