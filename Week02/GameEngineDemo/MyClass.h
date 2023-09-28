#pragma once

//-----------------------------------------------------
// Include Files
//-----------------------------------------------------


//-----------------------------------------------------
// MyClass Class									
//-----------------------------------------------------
class MyClass final
{
public:
	MyClass();				// Constructor
	~MyClass();				// Destructor

	// -------------------------
	// Copy/move constructors and assignment operators
	// -------------------------    
	MyClass(const MyClass& other)					{}
	MyClass(MyClass&& other) noexcept				{}
	MyClass& operator=(const MyClass& other)		{}
	MyClass& operator=(MyClass&& other)	noexcept	{}

	//-------------------------------------------------
	// Member functions						
	//-------------------------------------------------



private: 
	//-------------------------------------------------
	// Private member functions								
	//-------------------------------------------------


	//-------------------------------------------------
	// Datamembers								
	//-------------------------------------------------

	
};

 
