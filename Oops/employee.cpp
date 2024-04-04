/*Oops problem 1 
Write a program to manage organisation, employee data  like name, employee id, age, position. I should be able to credit salary to any employee and should able to see total salary given to an employee.
 Organisation will have an account with fixed amount, employee salary should be debited from that organisation account. Throw error if insufficient amount
 Should be able to get organisation’s balance amount and total amount spend for employee salaries*/


#include <iostream>
#include <vector>
#include <stdexcept>

// Employee class
class Employee {
private:
    std::string name;
    int employeeId;
    int age;
    std::string position;
    double salary;

public:
    Employee(const std::string& name, int employeeId, int age, const std::string& position)
        : name(name), employeeId(employeeId), age(age), position(position), salary(0) {}

    const std::string& getName() const {
        return name;
    }

    int getEmployeeId() const {
        return employeeId;
    }

    int getAge() const {
        return age;
    }

    const std::string& getPosition() const {
        return position;
    }

    double getSalary() const {
        return salary;
    }

    void creditSalary(double amount) {
        salary += amount;
    }

    void debitSalary(double amount) {
        if (amount > salary) {
            throw std::runtime_error("Insufficient salary balance");
        }
        salary -= amount;
    }
};

// Organization class
class Organization {
private:
    std::vector<Employee> employees;
    double accountBalance;

public:
    Organization(double initialBalance) : accountBalance(initialBalance) {}

    void addEmployee(const Employee& employee) {
        employees.push_back(employee);
    }

    double getOrganizationBalance() const {
        return accountBalance;
    }

    double getTotalSalary() const {
        double totalSalary = 0;
        for (const auto& employee : employees) {
            totalSalary += employee.getSalary();
        }
        return totalSalary;
    }

    void creditToEmployeeSalary(int employeeId, double amount) {
        for (auto& employee : employees) {
            if (employee.getEmployeeId() == employeeId) {
                employee.creditSalary(amount);
                accountBalance -= amount;
                return;
            }
        }
        throw std::runtime_error("Employee not found");
    }

    void printEmployeeDetails() const {
        for (const auto& employee : employees) {
            std::cout << "Name: " << employee.getName() << ", Employee ID: " << employee.getEmployeeId()
                      << ", Age: " << employee.getAge() << ", Position: " << employee.getPosition()
                      << ", Salary: " << employee.getSalary() << std::endl;
        }
    }
};

int main() {
    Organization organization(100000); // Starting balance for the organization

    // Adding employees
    organization.addEmployee(Employee("John Doe", 1001, 30, "Manager"));
    organization.addEmployee(Employee("Jane Smith", 1002, 25, "Developer"));

    // Crediting salary to employees
    organization.creditToEmployeeSalary(1001, 5000);
    organization.creditToEmployeeSalary(1002, 4000);

    // Trying to credit more than organization balance
    try {
        organization.creditToEmployeeSalary(1002, 200000);
    } catch (const std::runtime_error& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    // Printing organization balance and total salary spent
    std::cout << "Organization Balance: " << organization.getOrganizationBalance() << std::endl;
    std::cout << "Total Salary Spent: " << organization.getTotalSalary() << std::endl;

    // Printing employee details
    organization.printEmployeeDetails();

    return 0;
}
