# CPP-Module-00 | 42 Madrid

*shhhhh... I think the students are asleep 📣*

### Table of Contents

- [Introduction](#introduction)
- [ex00. Megaphone](#ex00-megaphone)
	* [Example](#example)
- [ex01. My Awesome PhoneBook](#ex01-my-awesome-phonebook)
	* [Example](#example-1)
- [ex02. The Job Of Your Dreams](#ex02-the-job-of-your-dreams)
	* [Example](#example-2)
- [Installation](#installation)
- [References](#references)
- [Summary](#summary)

## Introduction

This is the first project we've ever done in C++. For this reason, things *will* start slow. In this first set of exercises we will learn about the basic syntax of C++, namespaces, classes, member functions, and several other new concepts. All in all, it's lots of basic stuff.

## ex00. Megaphone

This first exercise is quite simple, we are asked to create a program that takes arguments and prints them back to the terminal in capital letters. If no arguments are provided the program will print out a default message, also in captial letters.

### Example

<div align="center">
    <img src="https://user-images.githubusercontent.com/40824677/189324945-b80fb99d-3b0a-4986-9e1c-1529fa5b47f7.png">
</div>

## ex01. My Awesome PhoneBook

This second exercise is a bit more fun. We have to simulate a phonebook with a terminal interactive UI. We can **ADD** or **SEARCH** for contacts, and we can also **EXIT**, clearing the list of contacts and ending the program. The phonebook can receive up to 8 contacts, such that the 9th contact will replace the 1st contact, the 10th will replace the 2nd, and so on.

### Example

<div align="center">
    <img src="https://user-images.githubusercontent.com/40824677/189323784-a732a276-86d6-4fa8-88f7-38eca47bce26.png">
</div>

## ex02. The Job Of Your Dreams

In this third and last exercise we are given two files which will help us build a class and all the necessary static and member functions so that the provided main function in **tests.cpp** creates the same output as the file **19920104_091532.log** (save the different timestamps). Our job is to figure out what the functions do to create the appropriate file **Account.cpp**. We are also given the header file containing the class definition in **Account.hpp**.

### Example

<div align="center">
    <img src="https://user-images.githubusercontent.com/40824677/189324539-204da555-2662-444f-81a8-6a99d6136ebf.png">
</div>

## Installation

For this project and fututre C++ projects it is only required to have `clang` and/or `gcc`, which provide their respective compilers `clang++` and `g++`. It is also recommended to install the `valgrind` package on **Linux** for debugging purposes. Every exercise (unless specified otherwise) includes its own Makefile with the necessary instructions. In some cases certain tweaks needed to be made to ensure the most similar results in both **Linux** and **MacOS**.

## References

* [string C++ Reference](http://www.cplusplus.com/reference/string/string/)
* [iomanip C++ Reference](http://www.cplusplus.com/reference/iomanip/)


## Summary
For a first module, it was mostly easy, except for *ex02*, which was a bit tricky to understand at first.

May 16th, 2022
