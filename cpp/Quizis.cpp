#include <iostream>
#include <vector>
#include <string>
#include <cctype> 

using namespace std;

struct Question {
    string text;
    vector<string> options;
    char correct_answer;  
};

string getStringInput(const string& prompt) {
    string input;
    cout << prompt;
    getline(cin, input);
    return input;
}

char getCharInput(const string& prompt) {
    char input;
    cout << prompt;
    cin >> input;
    cin.ignore();
    return tolower(input);
}

void displayQuiz(const vector<Question>& quiz) {
    int i = 1;
    for (const auto& question : quiz) {
        cout << i++ << ". " << question.text << endl;
        char option_label = 'a';
        for (const auto& option : question.options) {
            cout << "   " << option_label++ << ") " << option << endl;
        }
    }
}

int conductQuiz(const vector<Question>& quiz) {
    int score = 0;
    char user_answer;
    
    for (const auto& question : quiz) {
        cout << "\nYour answer for: " << question.text << "\n";
        user_answer = getCharInput("Enter your answer (a/b/c/d): ");
        if (user_answer == question.correct_answer) {
            cout << "\033[1;32mCorrect!\033[0m\n";
            score++;
        } else {
            cout << "\033[1;31mIncorrect!\033[0m\n";
        }
    }

    return score;
}

void addQuiz(vector<Question>& quiz) {
    int num_questions = stoi(getStringInput("Enter the number of questions you want to add: "));
    
    for (int i = 0; i < num_questions; i++) {
        Question new_question;
        new_question.text = getStringInput("Enter the question " + to_string(i + 1) + ": ");
        
        new_question.options.resize(4);
        for (int j = 0; j < 4; ++j) {
            new_question.options[j] = getStringInput("Enter option " + string(1, 'a' + j) + ": ");
        }
        
        new_question.correct_answer = getCharInput("Enter the correct answer (a/b/c/d): ");
        quiz.push_back(new_question);
    }
}

void createPuzzle() {
    string puzzle_question = getStringInput("Enter the puzzle question: ");
    string puzzle_answer = getStringInput("Enter the correct answer to the puzzle: ");
    for (auto &ch : puzzle_answer) {
        ch = tolower(ch);
    }

    string user_answer = getStringInput("\nSolve your puzzle: " + puzzle_question + "\nEnter your answer: ");
    for (auto &ch : user_answer) {
        ch = tolower(ch);
    }

    if (user_answer == puzzle_answer) {
        cout << "\033[1;32mCorrect! You solved the puzzle.\033[0m\n";
    } else {
        cout << "\033[1;31mIncorrect! The correct answer was: '" << puzzle_answer << "'.\033[0m\n";
    }
}

void solvePuzzle() {
    cout << "Solve this puzzle to continue:\n";
    string answer;
    cout << "I speak without a mouth and hear without ears. I have no body, but I come alive with wind. What am I? ";
    getline(cin >> ws, answer);

    for (auto &ch : answer) {
        ch = tolower(ch);
    }

    if (answer == "echo") {
        cout << "\033[1;32mCorrect! You solved the puzzle.\033[0m\n";
    } else {
        cout << "\033[1;31mIncorrect! The correct answer was 'echo'.\033[0m\n";
    }
}

int main() {
    vector<Question> quiz = {
        {"Which of the following is a type of tree data structure?", {"Linked List", "Binary Tree", "Array", "Stack"}, 'b'},
        {"What is the worst-case time complexity of Quick Sort?", {"O(n)", "O(n log n)", "O(n^2)", "O(log n)"}, 'c'},
        {"Which data structure uses LIFO (Last In, First Out)?", {"Stack", "Queue", "Array", "Linked List"}, 'a'},
        {"What is the space complexity of Merge Sort?", {"O(n)", "O(log n)", "O(n^2)", "O(1)"}, 'a'},
        {"Which of the following is used to implement a priority queue?", {"Array", "Linked List", "Binary Heap", "Stack"}, 'c'},
        {"Which algorithm is used to find the shortest path in a graph?", {"Dijkstra's Algorithm", "Merge Sort", "Quick Sort", "Bubble Sort"}, 'a'},
        {"Which of the following is a non-linear data structure?", {"Array", "Stack", "Queue", "Graph"}, 'd'},
        {"In which of the following data structures can we insert elements at the beginning, middle, and end with constant time complexity?", {"Array", "Linked List", "Hash Table", "Queue"}, 'b'},
        {"What is the best case time complexity of Bubble Sort?", {"O(n)", "O(n log n)", "O(n^2)", "O(log n)"}, 'a'},
        {"Which of the following is not a stable sorting algorithm?", {"Merge Sort", "Insertion Sort", "Selection Sort", "Bubble Sort"}, 'c'}
    };

    int choice;
    while (true) {
        cout << "\nChoose an option:\n";
        cout << "1) Create Your Own Puzzle\n";
        cout << "2) Solve a Quiz\n";
        cout << "Enter your choice (1 or 2): ";
        cin >> choice;

        if (choice == 1) {
            createPuzzle();
        } else if (choice == 2) {
            displayQuiz(quiz);  
            int score = conductQuiz(quiz); 
            cout << "\nYour total score: " << score << "/10\n";
            if (score >= 8) {
                cout << "\033[1;32mPass\033[0m\n";  
            } else {
                cout << "\033[1;31mFail\033[0m\n";
            }
        } else {
            cout << "Invalid choice. Please choose 1 or 2.\n";
        }

        char exit_choice = getCharInput("\nWould you like to exit? (y/n): ");
        if (exit_choice == 'y') {
            cout << "Exiting program...\n";
            break; 
        }
    }
    return 0;
}
