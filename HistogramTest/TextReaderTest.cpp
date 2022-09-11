#pragma once
#include <gtest/gtest.h>
#include "../HistogramLibrary/TextReader.h"

namespace TextReaderTests
{
	TEST(TextReaderTest, TestTextReader) {
		EXPECT_EQ(1, 1);
		EXPECT_TRUE(true);
	}

	TEST(TextReaderTests, ReadEmptyFile) {
		std::string fileName = "C:\\Users\\KCRQ48\\source\\repos\\histogram-cpp-starter-main\\Histogram\\empty.txt";
		TextReader textReader(fileName);
		std::string readString = textReader.read();
		std::string wantedString = "";

		EXPECT_EQ(readString, wantedString);
	}

	TEST(TextReaderTests, ReadTestFile) {
		std::string fileName = "C:\\Users\\KCRQ48\\source\\repos\\histogram-cpp-starter-main\\Histogram\\test.txt";
		TextReader textReader(fileName);
		std::string readString = textReader.read();
		std::string wantedString = "Harry Potter and the Sorcerer's Stone";

		EXPECT_EQ(readString, wantedString);
	}

	TEST(TextReaderTests, ReadTextFile) {
		std::string fileName = "C:\\Users\\KCRQ48\\source\\repos\\histogram-cpp-starter-main\\Histogram\\text.txt";
		TextReader textReader(fileName);
		std::string readString1 = textReader.read();
		std::string readString2 = textReader.read();
		std::string readString3 = textReader.read();

		std::string wantedString1 = "SORTING HAT SONG";
		std::string wantedString2 = "So kind Helga Hufflepuff would teach all the rest";
		std::string wantedString3 = "Unite all the houses and we'll fight as one.";

		EXPECT_EQ(readString1, wantedString1);
		EXPECT_EQ(readString2, wantedString2);
		EXPECT_EQ(readString3, wantedString3);
	}
}


//The following test cases are provided for the `read()` method.
//empty files
//one line text in text file
//multiple line in text file
