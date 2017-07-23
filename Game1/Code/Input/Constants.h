#pragma once
#include <windows.h>
#include <xinput.h>
namespace Input
{
	enum class Key
	{
		None = 0,
		Escape = 1,
		Backspace = 14,
		Tab = 15,
		NO1 = 2,
		NO2 = 3,
		NO3 = 4,
		NO4 = 5,
		NO5 = 6,
		NO6 = 7,
		NO7 = 8,
		NO8 = 9,
		NO9 = 10,
		NO0 = 11,
		MINUS = 12,
		PLUS = 13,
		Q = 16,
		W = 17,
		E = 18,
		R = 19,
		T = 20,
		Y = 21,
		U = 22,
		I = 23,
		O = 24,
		P = 25,
		LBRACKET = 26,
		RBRACKET = 27,
		Enter = 28,
		LCtrl = 29,
		A = 30,
		S = 31,
		D = 32,
		F = 33,
		G = 34,
		H = 35,
		J = 36,
		K = 37,
		L = 38,
		COLON = 39, SEMICOLON = 39,
		APOSTROPHEE = 40, QUOTATION_MARK = 40,
		Tilde = 41,
		LShift = 42,
		BACKSPACE = 43,
		Z = 44,
		X = 45,
		C = 46,
		V = 47,
		B = 48,
		N = 49,
		M = 50,
		COMA = 51,
		DOT = 52,
		SLASH = 53,
		RShift = 54,
		Space = 57,
		F1 = 59,
		F2 = 60,
		F3 = 61,
		F4 = 62,
		F5 = 63,
		F6 = 64,
		F7 = 65,
		F8 = 66,
		F9 = 67,
		F10 = 68,
		RCtrl = 157,
		Home = 199,
		Up = 200,
		PageUp = 201,
		Left = 203,
		Right = 205,
		End = 207,
		Down = 208,
		PageDown = 209,
		Insert = 210,
		Delete = 211,
	};
	char getKeyChar(Key c, bool upperCase);
	namespace Pad
	{
		enum ButtonMask
		{
			A = XINPUT_GAMEPAD_A,
			B = XINPUT_GAMEPAD_B,
			X = XINPUT_GAMEPAD_X,
			Y = XINPUT_GAMEPAD_Y,
			Left = XINPUT_GAMEPAD_DPAD_LEFT,
			Right = XINPUT_GAMEPAD_DPAD_RIGHT,
			Up = XINPUT_GAMEPAD_DPAD_UP,
			Down = XINPUT_GAMEPAD_DPAD_DOWN,
			Start = XINPUT_GAMEPAD_START,
			Back = XINPUT_GAMEPAD_BACK,
			LB = XINPUT_GAMEPAD_LEFT_SHOULDER,
			RB = XINPUT_GAMEPAD_RIGHT_SHOULDER,
			LThumb = XINPUT_GAMEPAD_LEFT_THUMB,
			RThumb = XINPUT_GAMEPAD_RIGHT_THUMB,
		};
	}
}

