#pragma once
#include<math.h>
#include<string.h>
#include"two_veriable.h"
namespace Equation {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	const int sizee = 100;
	struct Stack {
		int top;

		double at[sizee];
	};
	public ref class SoloutionClass : public System::Windows::Forms::Form
	{
	
		
	public:
		void push(Stack& s, double val)
		{
			if (s.top <= sizee) {
				s.top++;
				s.at[s.top] = val;
			}
			
		}

		double pop(Stack& s)
		{
			if (s.top >= 0)
				return s.at[s.top--];
			else
				return;
		}
		bool isfull(Stack& s)
		{
			if (s.top > sizee)
			{
				return true;
			}
			else
				return false;
		}
		bool isempty(Stack& s)
		{
			if (s.top < 0)
			{
				return true;
			}
			else
				return false;
		}
		double operation(double lop, double rop, char symbol)
		{
			switch (symbol)
			{
			case '+':
				return (lop + rop);
				break;
			case '-':
				return (lop - rop);
				break;
			case '*':
				return (lop * rop);
				break;
			case '/':
				return (lop / rop);
				break;
			case '$':
				return (pow(lop, rop));
				break;
			default:
				break;
			}
		}
		double determinent(int arr[3][3],char exp2[100])
		{
			Stack L;
			L.top = -1;
			char symbol;//122*51*-*532*51*-*-331*21*-*+
			//char exp2[] = "adi*fh*-*bci*fg*-*-ech*gd*-*+";//adi*fh*-*bci*fg*-*-ech*gd*-*+  3*3 matrix
			for (int i = 0; i < (int)strlen(exp2); i++)
			{
				symbol = exp2[i];
				if (exp2[i] >= 'a' && exp2[i] <= 'z')
				{
					switch (symbol)
					{//adi*fh*-*bci*fg*-*-ech*gd*-*+
					case 'a':
						push(L, arr[0][0]);
						break;
					case 'b':
						push(L, arr[0][1]);
						break;
					case 'c':
						push(L, arr[1][0]);
						break;
					case 'd':
						push(L, arr[1][1]);
						break;
					case 'e':
						push(L, arr[0][2]);
						break;
					case 'f':
						push(L, arr[1][2]);
						break;
					case 'g':
						push(L, arr[2][0]);
						break;
					case 'h':
						push(L, arr[2][1]);
						break;
					case 'i':
						push(L, arr[2][2]);
						break;
					}
				}
				else
					if (symbol == '$' || symbol == '/' || symbol == '*' || symbol == '+' || symbol == '-')
					{
						double rop, lop, ans;
						rop = pop(L);
						lop = pop(L);
						ans = operation(lop, rop, symbol);
						push(L, ans);
					}	
			}
			return pop(L);
		}
	};
}
