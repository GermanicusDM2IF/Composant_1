#include "stdafx.h"
#include "CppUnitTest.h"
#include "Bloc.h"
#include <iostream>
#include "FileInterface.h"
#include <fstream>
#include <vector>
using namespace std;


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod0)
		{
			Assert::AreEqual(1, 1);
		}

		TEST_METHOD(TestMethod2)
		{ // test insert()

			string fichier = "blockchain.json";
			FileInterface fi = FileInterface(fichier);
			Bloc b;
			Assert::AreEqual(fi.insert(b), true);
		}
		TEST_METHOD(TestMethod3)
		{ // test find By hash

			string fichier = "blockchain.json";
			FileInterface fi = FileInterface(fichier);
			string hash = ""; 0
			bool b = fi.findByHash(hash);

			Assert::AreEqual(b, true);
		}

		TEST_METHOD(TestMethod4)
		{ // test find by index

			string fichier = "blockchain.json";
			FileInterface fi = FileInterface(fichier);
			int index = 1;
			bool b = fi.findByIndex(index);

			Assert::AreEqual(b, true);
		}

		TEST_METHOD(TestMethod5)
		{ // verification

			string fichier = "blockchain.json";
			FileInterface fi = FileInterface(fichier);
			Assert::AreEqual(fi.verification(), true);
		}

		TEST_METHOD(TestMethod6)
		{ // readAll()

			string fichier = "blockchain.json";
			FileInterface fi = FileInterface(fichier);
			vector<Bloc> list_vector = fi.readAll();

			Assert::AreEqual((int) list_vector.size(), (int) 2);
		}

	};
}