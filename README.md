# Book Store (DLL Adapter)

This project consisted of the implementation of two primary components:
A custom Doubly Linked List class, DoublyLinkedList.
An adapter class, BookStore, functions as a wrapper that offers an interface to a bookstore simulation. This class uses the DoublyLinkedList class under the hood.
This project aimed to provide a real-world application of data structures by creating a bookstore simulation and keeping track of its inventory through a doubly linked list. The BookStore class allows users to interact with the bookstore and perform operations like adding new books to inventory, selling books to customers, and viewing a list of all books in the inventory.

## Structure

The project involved coding in several files:

- DoublyLinkedList.hpp: The implementation of the custom Doubly Linked List class.
- BookStore.hpp (optional): The header file for the BookStore class.
- BookStore.cpp: The implementation of the BookStore class.
- Please note that Book.hpp and Book.cpp were part of the provided files and did not need to be modified. The main.cpp file serves as an interface for interaction with the bookstore.

The project's design intended that all methods in the DoublyLinkedList class were inline, whereas the Book and BookStore classes use two separate source files for declaration and implementation.

## Execution and Testing

The project used a Makefile for GNU Make to control execution and testing. The available commands were:

```
make help: Show a help menu with available commands.
make test: Provides a quick preview/estimate of the grade.
make run: Executes the program defined by main.cpp.
make debug-test: Runs tests in debug mode with gdb.
```

## Demo

![](./demo.gif)

## Built

- C++

## Contribution

Erik Williams
