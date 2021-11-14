#include "stdafx.h"
#include "CppUnitTest.h"

#include "..\..\CodingClubSource\CodingClub\StringLibrary.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CodingClubTests
{		
	TEST_CLASS(StringLibraryTests)
	{
	public:

		TEST_METHOD_INITIALIZE(init)
		{
			// Any code to be run before each test
		}

		TEST_METHOD_CLEANUP(cleanup)
		{
			// Any code to be run after each test
		}

		TEST_METHOD(String_RemoveVowels_Returns_InputString_With_All_Case_Vowels_Removed)
		{
			// Given
			std::string input = "CorNwAll";
			
			std::string result;


			// When
			result = removeVowels(input);

			// Then
			std::string expected = "CrNwll";

			Assert::AreEqual(expected, result);
		}

		TEST_METHOD(String_RemoveVowels_Returns_InputString_With_Lower_Case_Vowels_Removed)
		{
			// Given
			std::string input = "cornwall";

			std::string result;


			// When
			result = removeVowels(input);

			// Then
			std::string expected = "crnwll";

			Assert::AreEqual(expected, result);
		}

		TEST_METHOD(String_RemoveVowels_Returns_InputString_With_Upper_Case_Vowels_Removed)
		{
			// Given
			std::string input = "CORNWALL";

			std::string result;


			// When
			result = removeVowels(input);

			// Then
			std::string expected = "CRNWLL";

			Assert::AreEqual(expected, result);
		}

		TEST_METHOD(String_RemoveVowels_Returns_InputString_As_Blank_When_Input_Is_All_Vowels)
		{
			// Given
			std::string input = "aAeEiIoOuU";

			std::string result;


			// When
			result = removeVowels(input);

			// Then
			std::string expected = "";

			Assert::AreEqual(expected, result);
		}
	};
}