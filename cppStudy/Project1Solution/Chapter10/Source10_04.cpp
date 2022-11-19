#include <iostream>
#include <vector>
#include <string>

// 서로 제휴 관계가 되다 보니 전방 선언이 필요해진다.
class Doctor; // forward declaration

class Patient
{
private:
	std::string m_name;
	std::vector<Doctor*> m_doctors;

public:
	Patient(std::string name_in)
		: m_name(name_in)
	{}

	void addDoctor(Doctor* new_doctor)
	{
		m_doctors.push_back(new_doctor);
	}

	void meetDoctors();

	friend class Doctor;
};

class Doctor
{
private:
	std::string m_name;
	std::vector<Patient*> m_patients;

public:
	Doctor(std::string name_in)
		: m_name(name_in)
	{}

	void addPatient(Patient* new_patient)
	{
		m_patients.push_back(new_patient);
	}

	void meetPatientrs()
	{
		for (const auto& patient : m_patients)
		{
			std::cout << "Meet patient : " << patient->m_name << std::endl;
		}
	}

	friend class Patient;
};

// Doctor가 전방 선언되었지만 내부 멤버는 모르기 때문에 정의가 빠져 나온 상황
void Patient::meetDoctors()
{
	for (const auto& doctor : m_doctors)
	{
		std::cout << "Meet doctor : " << doctor->m_name << std::endl;
	}
}

int main()
{
	Patient* p1 = new Patient("Jack Jack");
	Patient* p2 = new Patient("Dash");
	Patient* p3 = new Patient("");

	Doctor* d1 = new Doctor("Doctor K");
	Doctor* d2 = new Doctor("Doctor L");

	p1->addDoctor(d1);
	d1->addPatient(p1);

	p2->addDoctor(d2);
	d2->addPatient(p2);

	p2->addDoctor(d1);
	d1->addPatient(p2);

	// patients meet doctors
	p1->meetDoctors();

	// doctors meet patients
	d1->meetPatientrs();

	// deletes
	delete p1;
	delete p2;
	delete p3;

	delete d1;
	delete d2;

	return 0;
}