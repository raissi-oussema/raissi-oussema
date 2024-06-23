# Bank Account Management System

This project is a simple Bank Account Management System implemented in C++. The system includes basic functionalities for account management, such as creating accounts, performing transfers, and displaying account information.

## Features

- **Account Management**: Create and manage accounts.
- **Transfers**: Perform money transfers between accounts.
- **Operations Logging**: Log and display operations performed on accounts.

## Project Structure

.
├── include
│ ├── Account.h
│ ├── IAccount.h
│ ├── IOperation.h
│ ├── OPERATION_PTYPES.h
│ ├── OperationHandler.h
│ └── SavingAccount.h
├── src
│ ├── Account.cpp
│ ├── Operation.cpp
│ ├── OperationHandler.cpp
│ ├── SavingAccount.cpp
│ └── main.cpp
└── README.md

## Getting Started

### Prerequisites

- C++ compiler (e.g., g++)

### Building the Project

### To compile the project, run the following command from the project's root directory:
g++ -Iinclude -o main src/Account.cpp src/Operation.cpp src/OperationHandler.cpp src/SavingAccount.cpp src/main.cpp

## File Descriptions

    include/Account.h: Defines the Account class with basic account operations.
    include/IAccount.h: Interface for account classes.
    include/IOperation.h: Defines the Operation class for logging operations.
    include/OPERATION_PTYPES.h: Enumerations and structs related to operations.
    include/OperationHandler.h: Handles operations between accounts.
    include/SavingAccount.h: Defines the SavingAccount class which inherits from Account.
    src/Account.cpp: Implementation of the Account class.
    src/Operation.cpp: Implementation of the Operation class.
    src/OperationHandler.cpp: Implementation of the OperationHandler class.
    src/SavingAccount.cpp: Implementation of the SavingAccount class.
    src/main.cpp: Main file to run the project.
