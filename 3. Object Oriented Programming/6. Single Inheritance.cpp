// The capability of a class to derive properties and characteristics from another class is called Inheritance.
import <iostream>;

class Vehicle{
	private:
		int id{};
		std::string name{};
	public:
		void Get_v() {
			std::cout << "Enter id: " << std::endl;
			std::cin >> id;
			std::cout << "Enter vehicle company name: " << std::endl;
			std::cin >> name;
		}
		void Display_v() {
			std::cout << "Vehicle id is " << id << " of company " << name << std::endl;
		}
};
class Military : public Vehicle{
	private: 
		std::string contractor{};
	public:
		void Get_a() {
			Get_v();
			std::cout << "Enter contractor name: " << std::endl;
			std::cin >> contractor;
		}
		void Display_a() {
			Display_v();
			std::cout << "This vehicle is made by contractor: " << contractor << std::endl;
		}
};

int Inheritance(){
	Military m;
	m.Get_a();
	m.Display_a();

	return 0;
}

/*
	Modes of Inheritance: There are 3 modes of inheritance.

	1. Public Mode:    If we derive a subclass from a public base class. Then the public member of 
	                   the base class will become public in the derived class and protected members 
					   of the base class will become protected in the derived class.

	2. Protected Mode: If we derive a subclass from a Protected base class. Then both public 
					   members and protected members of the base class will become protected in the 
					   derived class.

	3. Private Mode:   If we derive a subclass from a Private base class. Then both public members and 
	                   protected members of the base class will become Private in the derived class.
*/