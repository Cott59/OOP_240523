#include<iostream>
#include<vector>
#include<iterator>
#include<string>

class Person
{
public:
	Person(std::string name, int age){
		_name = name;
		_age = age;
	}
	std::string GetName() {
		return _name;
	}
	int GetAge() {
		return _age;
	}

private:
	std::string _name;
	int _age;
};


class Pupil {
private:
	std::string _name;
	int _age;
	std::vector <int>_marks;

	public:
		void SetName(std::string name) {
			_name = name;
		}
		void SetAge(int age) {
			_age = age;
		}
		void marks(std::vector <int>&mark) {
			//_marks.push_back(mark);
		}

		std::string GetName() {
			return _name;
		}
		int GetAge() {
			return _age;
		}


};

class Client {
	private:
		std::string _name;
		int _age;
		double _bill;

	public:
		Client(std::string name, int age, double bill) {
			_name = name;
			_age = age;
			_bill = bill;
		}
		void ShowData() {
			std::cout << " Client's name: " << _name << '\n';
			std::cout << " Client's age: " << _age << '\n';
			std::cout << " Client's bill: " << _bill << '\n';
		}
};

class Bank {
	private:
		std::vector<Client*>_clients;
	public:
		void AddClient(Client* client) {
			_clients.push_back(client);
		}

		void ShowClient() {
			for (const auto& it : _clients) // auto - автоматическое определение типа. 
				it->ShowData();
		}
		void ShowClient(int index) {
			if (index > _clients.size())
				return;
			_clients.at(index-1)->ShowData();
		}

};





int main() {

	//Person Oleg("Oleg", 23);
	//Person p23 ("Vava", 34);
	//std::cout << Oleg.GetName() << std::endl;
	//std::cout << Oleg.GetAge() << std::endl;
	//std::cout << p23.GetAge() << std::endl;

	/*Pupil Serg();
	std::cin>>*/

	Bank* bank = new Bank();
	Client* client1 = new Client("Bob", 20, 23432542);
	Client* client2 = new Client("Alex", 25, 23252);
	Client* client3 = new Client("Monica", 40, 23456542);
	Client* client4 = new Client("Jocob", 70, 32542);
	Client* client5 = new Client("Alisa", 18, 2343233342);


	bank->AddClient(client1);
	bank->AddClient(client2);
	bank->AddClient(client3);
	bank->AddClient(client4);
	bank->AddClient(client5);
	bank->ShowClient();
	std::cout << "\n";
	bank->ShowClient(2);

	return 0;
}