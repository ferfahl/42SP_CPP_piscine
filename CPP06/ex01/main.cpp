
#include "serialization.hpp"

uintptr_t serialize(Data* ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data*>(raw));
}

static void	printData(Data *data){
	std::cout << "Name: " << data->name << std::endl;
	std::cout << "Sigla: " << data->sigla << std::endl;
	std::cout << "Idade: " << data->idade << std::endl;
	std::cout << "Pi (float): " << data->pif << "f" << std::endl;
	std::cout << "Pi (double): " << data->pid << std::endl;
	std::cout << "True (1) or False (0): " << data->yn << std::endl;
}

int main(void) {
	uintptr_t infoSerial = 0;
	Data* dataDeserialize = NULL;
	Data info = {"Alexei", 'A', 41, 3.14, 3.14, 1};

	std::cout << "\nOriginal info:" << std::endl;
	printData(&info);
	
	std::cout << "\nInfo serialization:" << std::endl;
	infoSerial = serialize(&info);
	std::cout << infoSerial << std::endl;
	
	std::cout << "\nInfo deserialization:" << std::endl;
	dataDeserialize = deserialize(infoSerial);
	printData(dataDeserialize);
	
	return 0;
}
