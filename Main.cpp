//  TaskManager
//  Ezaiah Akyeem on 8/11/23.
//

#include <iostream>
class Task {
private:
    std::string description;
    std::string dueDate;
    int priority;
    bool completed;
    
public:
    // Constructors, setters, getters, etc.
};

class TaskManager {
private:
    std::vector<Task> tasks;
    
// defining all of the tasks
public:
    void addTask(const Task& task);
    void viewTasksByPriority();
    void viewTasksByDueDate();
    void markTaskCompleted(int taskIndex);
    void deleteTask(int taskIndex);
    void saveToFile(const std::string& filename);
    void loadFromFile(const std::string& filename);
};

int main() {
    TaskManager taskManager;
    while (true) {
        std::cout << "Task Manager Menu:" << std::endl;
        std::cout << "1. Add Task" << std::endl;
        std::cout << "2. View Tasks by Priority" << std::endl;
        std::cout << "3. View Tasks by Due Date" << std::endl;
        std::cout << "4. Mark Task as Completed" << std::endl;
        std::cout << "5. Delete a Task" <<std::endl;
        std::cout << "6. Save Tasks to File" << std::endl;
        std::cout << "7. Load Tasks from File" << std::endl;
        std::cout << "8. Exit" << std::endl;
        
        int choice;
        std::cout << "Please choose an option: ";
        std::cin >> choice;
        
        switch (choice) {
            case 1:
                // Call function to add task
                break;
            case 2:
                // Call function to view tasks by priority
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                break;
            case 8:
                std::cout << "Exiting Task Manager App. Goodbye!" << std::endl;
                return 0;
            default:
                std::cout << "." << std::endl;
        }
    }
    return 0;
}

/*
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
} */
