//-----------------------------------------------------------------
// Main Game File
// C++ Source - GameEngineDemo.cpp - version v7_02
//-----------------------------------------------------------------

//-----------------------------------------------------------------
// Include Files
//-----------------------------------------------------------------
#include "GameEngineDemo.h"																				

//-----------------------------------------------------------------
// GameEngineDemo methods																				
//-----------------------------------------------------------------

GameEngineDemo::GameEngineDemo() 																	
{
	// nothing to create
}

GameEngineDemo::~GameEngineDemo()																						
{
	// nothing to destroy
}


void GameEngineDemo::Initialize(HINSTANCE hInstance)			
{
	// Set the required values
	AbstractGame::Initialize(hInstance);
	GAME_ENGINE->SetTitle(_T("Game Engine version 7_02"));					
	GAME_ENGINE->RunGameLoop(true);		
	
	// Set the optional values
	GAME_ENGINE->SetWidth(1024);
	GAME_ENGINE->SetHeight(768);
    GAME_ENGINE->SetFrameRate(50);

	// Set the keys that the game needs to listen to
	//tstringstream buffer;
	//buffer << _T("KLMO");
	//buffer << (TCHAR) VK_LEFT;
	//buffer << (TCHAR) VK_RIGHT;
	//GAME_ENGINE->SetKeyList(buffer.str());
}

void GameEngineDemo::Start()
{
	// Insert the code that needs to be executed at the start of the game
	m_BitmapPtr = new Bitmap(_T("Images/classes.bmp"));
	m_MyFontPtr = new Font(_T("Verdana"), false, false, false, 50);
}

void GameEngineDemo::End()
{
	// Insert the code that needs to be executed at the closing of the game
	delete m_BitmapPtr;
	delete m_MyFontPtr;
}

void GameEngineDemo::Paint(RECT rect)
{
	// Insert paint code 
	GAME_ENGINE->DrawSolidBackground(RGB(255, 0, 0));

	GAME_ENGINE->SetColor(RGB(255, 255, 255));
	GAME_ENGINE->DrawLine(20, 20, 400, 400);

	int posX{ GAME_ENGINE->GetWidth() / 2 - m_BitmapPtr->GetWidth() / 2 };
	int posY{ GAME_ENGINE->GetHeight() / 2 - m_BitmapPtr->GetHeight() / 2 };

	GAME_ENGINE->DrawBitmap(m_BitmapPtr, posX, posY);

	GAME_ENGINE->SetFont(m_MyFontPtr);
	GAME_ENGINE->DrawString(_T("Kevin was here"), 20, 20);
}

void GameEngineDemo::Tick()
{
	// Insert non-paint code that needs to be executed each tick 
}

void GameEngineDemo::MouseButtonAction(bool isLeft, bool isDown, int x, int y, WPARAM wParam)
{	
	// Insert the code that needs to be executed when the game registers a mouse button action

	/* Example:
	if (isLeft == true && isDown == true) // is it a left mouse click?
	{	
		if ( x > 261 && x < 261 + 117 ) // check if click lies within x coordinates of choice
		{
			if ( y > 182 && y < 182 + 33 ) // check if click also lies within y coordinates of choice
			{
				GAME_ENGINE->MessageBox(_T("Clicked."));
			}
		}
	}
	*/
}


void GameEngineDemo::MouseWheelAction(int x, int y, int distance, WPARAM wParam)
{	
	// Insert the code that needs to be executed when the game registers a mouse wheel action
}

void GameEngineDemo::MouseMove(int x, int y, WPARAM wParam)
{	
	// Insert the code that needs to be executed when the mouse pointer moves across the game window

	/* Example:
	if ( x > 261 && x < 261 + 117 ) // check if mouse position is within x coordinates of choice
	{
		if ( y > 182 && y < 182 + 33 ) // check if mouse position also is within y coordinates of choice
		{
			GAME_ENGINE->MessageBox(_T("Da mouse wuz here."));
		}
	}
	*/
}

void GameEngineDemo::CheckKeyboard()
{	
	// Here you can check if a key of choice is held down
	// Is executed once per frame if the Game Loop is running 

	/* Example:
	if (GAME_ENGINE->IsKeyDown(_T('K'))) xIcon -= xSpeed;
	if (GAME_ENGINE->IsKeyDown(_T('L'))) yIcon += xSpeed;
	if (GAME_ENGINE->IsKeyDown(_T('M'))) xIcon += xSpeed;
	if (GAME_ENGINE->IsKeyDown(_T('O'))) yIcon -= ySpeed;
	*/
}

void GameEngineDemo::KeyPressed(TCHAR cKey)
{	
	// DO NOT FORGET to use SetKeyList() !!

	// Insert the code that needs to be executed when a key of choice is pressed
	// Is executed as soon as the key is released
	// You first need to specify the keys that the game engine needs to watch by using the SetKeyList() method

	/* Example:
	switch (cKey)
	{
	case _T('K'): case VK_LEFT:
		GAME_ENGINE->MessageBox(_T("Moving left."));
		break;
	case _T('L'): case VK_DOWN:
		GAME_ENGINE->MessageBox(_T("Moving down."));
		break;
	case _T('M'): case VK_RIGHT:
		GAME_ENGINE->MessageBox(_T("Moving right."));
		break;
	case _T('O'): case VK_UP:
		GAME_ENGINE->MessageBox(_T("Moving up."));
		break;
	case VK_ESCAPE:
		GAME_ENGINE->MessageBox(_T("Escape menu."));
	}
	*/
}

void GameEngineDemo::CallAction(Caller* callerPtr)
{
	// Insert the code that needs to be executed when a Caller has to perform an action
}




