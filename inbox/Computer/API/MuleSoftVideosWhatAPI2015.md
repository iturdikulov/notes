---
canonicalUrl: https://www.youtube.com/watch?v=s7wmiS2mSXY
date: '2023-08-17'
tags:
- research
- inbox
---

# What is an API?

Want to learn how to build your first API in less than 10 mins? Click here to get started:
https://developer.mulesoft.com/tutori...

Checkout the MuleSoft Platform here: https://www.mulesoft.com/platform/api

The textbook definition goes something like this:

“An application programming interface (API) is a set of routines, protocols, and tools for building software applications. An API expresses a software component in terms of its operations, inputs, outputs, and underlying types. An API defines functionalities that are independent of their respective implementations, which allows definitions and implementations to vary without compromising each other. A good API makes it easier to develop a program by providing all the building blocks.

APIs often come in the form of a library that includes specifications for routines, data structures, object classes, and variables. In other cases, notably SOAP and REST services, an API is simply a specification of remote calls exposed to the API consumers.

An API specification can take many forms, including an International Standard, such as POSIX, vendor documentation, such as the Microsoft Windows API, or the libraries of a programming language, e.g., the Standard Template Library in C++ or the Java APIs.

An API differs from an application binary interface (ABI) in that an API is source code-based while an ABI is a binary interface. For instance POSIX is an API, while the Linux Standard Base provides an ABI”.

To speak plainly, an API is the messenger that runs and delivers your request to the provider you’re requesting it from, and then delivers the response back to you.

To give you a familiar example, think of an API as a waiter in a restaurant.

Imagine you’re sitting at the table with a menu of choices to order from, and the kitchen is the provider who will fulfill your order.

What’s missing is the critical link to communicate your order to the kitchen and deliver your food back to your table.

That’s where the waiter (or API) comes in. ”AHEM”

The waiter takes your order, delivers it to the kitchen, and then delivers the food (or response) back to you. (Hopefully without letting your order crash if designed correctly)


Now that we’ve whetted your appetite, let’s apply this to a real API example. In keeping with our theme, let’s book a flight to a culinary capital – Paris.


You’re probably familiar with the process of searching for airline flights online. Just like at a restaurant, you have a menu of options to choose from ( a dropdown menu in this case). You choose a departure city and date, a return city and date, cabin class, and other variables (like meal or seating, baggage or pet requests)

In order to book your flight, you interact with the airline’s website to access the airline’s database to see if any seats are available on those dates, and what the cost might be based on certain variables.


But, what if you are not using the airline’s website, which has direct access to the information? What if you are using online travel service that aggregates information from many different airlines? Just like a human interacts with the airline’s website to get that information, an application interacts with the airline’s API.


The API is the interface that, like your helpful waiter, runs and and delivers the data from that online travel service to the airline’s systems over the Internet.

It also then takes the airline’s response to your request and delivers right back to the online travel service .

And through each step of the process it facilitates that interaction between the travel service and the airline’s systems - from seat selection to payment and booking.

So now you can see that it’s APIs that make it possible for us all to use travel sites. They interface with with airlines’ APIs to gather information in order to present options back to us

The same goes for all interactions between applications, data and devices - they all have API’s that allow computers to operate them, and that's what ultimately creates connectivity.

API’s provide a standard way of accessing any application, data or device whether it is shopping from your phone, or accessing cloud applications at work.

So, whenever you think of an API, just think of it as your waiter running back and forth between applications, databases and devices to deliver data and create the connectivity that puts the world at our fingertips. And whenever you think of creating an API, think MuleSoft.