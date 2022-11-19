#include <iostream>
#include <vector>
#include <string>

// ���� ���� ���谡 �Ǵ� ���� ���� ������ �ʿ�������.
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

// Doctor�� ���� ����Ǿ����� ���� ����� �𸣱� ������ ���ǰ� ���� ���� ��Ȳ
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