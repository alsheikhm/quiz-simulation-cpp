# quiz-simulation-cpp
Quiz Simulation

## Overview
This project implements a quiz simulation system in C++ using object-oriented programming principles. The system models different types of quiz questions and dynamically generates and evaluates user responses.

The goal of the project is to design a flexible and extensible architecture that supports multiple question types through inheritance and polymorphism. The program ultimately focuses on generating multiplication-based questions and repeatedly testing the user until a set number of correct answers is achieved.

## Features

- Multiple question types
  - Supports short answer, multiple choice, and true/false question structures
  - Introduces a custom multiplication-based question type

- Object-oriented architecture
  - Uses a base `Question` class with derived classes:
    - `ShortAnswerQuestion`
    - `MultipleChoiceQuestion`
    - `TrueFalseQuestion`
    - `MultiplicationQuestion`

- Dynamic question generation
  - Multiplication questions generate random values for operands each time a new object is created
  - Ensures each question instance is unique

- Answer validation system
  - Each question type implements its own logic to verify correctness
  - Supports flexible input formats (numeric and text-based answers)

- Interactive quiz loop
  - Continuously prompts the user until a target number of correct answers is reached
  - Provides immediate feedback on correctness

## How It Works

1. The program defines a base `Question` class that stores the question text and correct answer.
2. Derived classes extend this functionality by implementing their own answer validation logic.
3. The `MultiplicationQuestion` class generates two random integers and constructs a question dynamically. :contentReference[oaicite:0]{index=0}
4. The correct answer is computed and stored when the question object is created.
5. The main program repeatedly generates new multiplication questions and prompts the user for input. :contentReference[oaicite:1]{index=1}
6. If the user answers incorrectly, they are prompted again until the correct answer is given.
7. The program continues until the user answers a fixed number of questions correctly.

## Example Output

```text
What is 7 * 6?
ANSWER: 40

Incorrect. Try again.

ANSWER: 42

CORRECT!

What is 3 * 9?
ANSWER: 27

CORRECT!

...

You Answered 10 Multiplication Questions Correctly!
```

## Key Concepts Demonstrated

- **Object-Oriented Design and Inheritance**  
  Implements a base class with multiple derived classes, allowing shared behavior and specialized functionality.

- **Polymorphism and Virtual Functions**  
  Uses virtual functions to allow different question types to define their own answer validation logic.

- **Encapsulation and Data Hiding**  
  Keeps question data and logic contained within each class, exposing only necessary interfaces.

- **Dynamic Behavior Through Randomization**  
  Generates new multiplication problems using random values to ensure varied input.

- **String Processing and Input Handling**  
  Handles user input and compares answers in a flexible manner, including case-insensitive comparisons.

- **Interactive Program Flow**  
  Demonstrates control flow using loops and conditionals to create a responsive user experience.

## Design Highlights

- **Extensible Class Hierarchy**  
  New question types can be added easily by inheriting from the base `Question` class.

- **Separation of Responsibilities**  
  Each class focuses on a single responsibility, such as storing question data or validating answers.

- **Reusable Base Functionality**  
  Common logic is implemented once in the base class and reused across all derived classes.

- **Flexible Answer Validation**  
  Different question types implement tailored validation strategies depending on input format.

## File Structure

- **Source Files**
  - `Source.cpp` — Main program loop for generating and evaluating quiz questions
  - `Question.h / Question.cpp` — Base class for all question types
  - `ShortAnswerQuestion.h / ShortAnswerQuestion.cpp` — Handles short answer questions
  - `MultipleChoiceQuestion.h / MultipleChoiceQuestion.cpp` — Handles multiple choice questions
  - `TrueFalseQuestion.h / TrueFalseQuestion.cpp` — Specialized multiple choice question with two options
  - `MultiplicationQuestion.h / MultiplicationQuestion.cpp` — Generates and evaluates multiplication problems

## Summary

This project builds a flexible quiz simulation system using object-oriented design principles. By leveraging inheritance, polymorphism, and encapsulation, the program supports multiple question types while maintaining a clean and extensible architecture. The implementation of dynamically generated multiplication questions highlights how new functionality can be integrated seamlessly while preserving the overall system design.

# How to Run

1. **Place all files in the same directory**
   - Source files (`.cpp`, `.h`)

2. **Compile the program**
   ```bash
   g++ -std=c++17 Source.cpp Question.cpp ShortAnswerQuestion.cpp MultipleChoiceQuestion.cpp TrueFalseQuestion.cpp MultiplicationQuestion.cpp -o quiz

3. **Run the Executable**
   ```bash
   ./quiz
