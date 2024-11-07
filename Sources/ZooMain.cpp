#include "Dog.h"
#include "Cat.h"
#include "Lion.h"
#include <vector>

int main() {
    vector<Mammal*> zoo;
    int choice;

    do {
        cout << "Select the animal to send to the Zoo:" << endl;
        cout << "(1) Add Dog (2) Add Cat (3) Add Lion (4) Display all animals (5) Quit" << endl;
        cin >> choice;

        if (choice == 1) {
            string name, owner;
            COLOR color;
            cout << "Enter name for the Dog: ";
            cin >> name;
            cout << "Enter color (0-Green, 1-Blue, 2-White, 3-Black, 4-Brown): ";
            int colorChoice;
            cin >> colorChoice;
            color = static_cast<COLOR>(colorChoice);
            cout << "Enter owner's name: ";
            cin >> owner;
            zoo.push_back(new Dog(name, color, owner));
            cout << "Dog added to the zoo." << endl;
        } else if (choice == 2) {
            string name;
            COLOR color;
            cout << "Enter name for the Cat: ";
            cin >> name;
            cout << "Enter color (0-Green, 1-Blue, 2-White, 3-Black, 4-Brown): ";
            int colorChoice;
            cin >> colorChoice;
            string owner;
            cout << "Enter owner: ";
            cin >> owner;
            color = static_cast<COLOR>(colorChoice);
            zoo.push_back(new Cat(name, color, owner));
            cout << "Cat added to the zoo." << endl;
        } else if (choice == 3) {
            string name;
            COLOR color;
            cout << "Enter name for the Lion: ";
            cin >> name;
            cout << "Enter color (0-Green, 1-Blue, 2-White, 3-Black, 4-Brown): ";
            int colorChoice;
            cin >> colorChoice;
            string owner;
            cout << "Enter owner: ";
            cin >> owner;
            color = static_cast<COLOR>(colorChoice);
            zoo.push_back(new Lion(name, color, owner));
            cout << "Lion added to the zoo." << endl;
        } else if (choice == 4) {
            if (zoo.empty()) {
                cout << "The zoo is empty. No animals to display." << endl;
            } else {
                for (Mammal* animal : zoo) {
                    animal->move();
                    animal->speak();
                    animal->eat();
                }
            }
        } else if (choice != 5) {
            cout << "Invalid choice, please try again." << endl;
        }

    } while (choice != 5);

    for (Mammal* animal : zoo) {
        delete animal;
    }

    cout << "Exiting the program..." << endl;
    return 0;
}
