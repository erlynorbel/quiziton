#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;


vector <char> validLetters = {'A', 'B', 'C', 'D'};


string questionsEasy[25] = {
    "Fill the right symbol in the blanks: 7 __ -5",
    "All are prime numbers EXCEPT:",
    "What is the Derivative of 36y?"
};

char answersEasy[25] = {
    'B', 'C', 'C'
};

string questionsMedium[25] = {

};

char answersMedium[25] = {

};


string questionsHard[25] = { 

};

char answersHard[25] = {

};


string questionsImpossible[25] = {

};

char answersImpossible[25] = {

};

char getValidAnswer() {
    while (true) {
        cout << "Choose a letter (A, B, C, D): ";
        char letter;
        cin >> letter;

        for (char c : validLetters){
            if (c == letter){
                return c; 
            }
        }

        cout << "Invalid letter. Please, try again!" << endl;
    }
}

string getRandomQuestion(string difficulty) {
    srand(static_cast<unsigned int>(time(0)));

    if (difficulty == "EASY") {
        int randomIndex = rand() % questionsEasy.size();
        return questionsEasy[randomIndex];
    } else if (difficulty == "MEDIUM") {
        int randomIndex = rand() % questionsMedium.size();
        return questionsMedium[randomIndex];
    } else if (difficulty == "HARD"){
        int randomIndex = rand() % questionsHard.size();
        return questionsHard[randomIndex];;l
    } else if (difficulty == "IMPOSSIBLE"){
        int randomIndex == rand() % questionsImpossible.size();
        return questionsImpossible[randomIndex];
    } else{
        return " ";
    }
}

bool askQuestion(int index, string question, char correctAnswer){
    string randomQuestion = getRandomQuestion(question);

    cout << index + 1 << ". ";
    cout << question << endl; 

    char letter = getValidAnswer(); 
    bool isCorrect = correctAnswer == letter; 

    if(isCorrect){
        cout << endl << "Correct!" << endl << endl; 
    } else {
        cout << endl << "Incorrect Answer!" << endl << endl; 
    }

    return isCorrect; 
} 
void easyQuiz() {
    askQuestion(int index, string question, char correctAnswer);     
}

void medQuiz() {

}

void hardQuiz() {

}

void impossibleQuiz() {

}

void mainMenu(){
    const string mainTitle = "\n"
                             " $$$$$$\\            $$\\                 $$$$$$\\   $$\\            $$$$$$\\            $$\\ \n"
                             "$$  __$$\\           \\__|                \\_$$  _|  $$ |          $$  __$$\\           $$ |\n"
                             "$$ /  $$ |$$\\   $$\\ $$\\ $$$$$$$$\\         $$ |  $$$$$$\\         $$ /  $$ |$$$$$$$\\  $$ |\n"
                             "$$ |  $$ |$$ |  $$ |$$ |\\____$$  |        $$ |  \\_$$  _|        $$ |  $$ |$$  __$$\\ $$ |\n"    
                             "$$ |  $$ |$$ |  $$ |$$ |  $$$$ _/         $$ |    $$ |          $$ |  $$ |$$ |  $$ |\\__|\n"
                             "$$ $$\\$$ |$$ |  $$ |$$ | $$  _/           $$ |    $$ |$$\\       $$ |  $$ |$$ |  $$ |    \n"
                             "\\$$$$$$ / \\$$$$$$  |$$ |$$$$$$$$\\       $$$$$$\\   \\$$$$  |       $$$$$$  |$$ |  $$ |$$\\ \n"
                             " \\___$$$\\  \\______/ \\__|\\________|      \\______|   \\____/        \\______/ \\__|  \\__|\\__|\n"
                             "     \\___|                                                                              \n"
                             "                                                                                        \n"
                             "                                                                                        ";
    cout << mainTitle << endl;
    cout << "Type START to start" << endl;
    cout << "Type EXIT to exit the program" << endl;

    string userMenu_input;

    if (userMenu_input == "START") {
        easyQuiz();
    } else if (userMenu_input == "EXIT") {
        exit(0);
    } else {
        cout << "Incorrect input, please try again!" 
    }

}

int main() {
    int score = 0; 
    mainMenu(); 
}
