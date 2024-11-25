palindromecheck: palindromecheck.o
	g++ palindromecheck.o -o palindromecheck.exe

palindromecheck.o: palindromecheck.cpp
	g++ -c palindromecheck.cpp -o palindromecheck.o

run: palindromecheck
	./palindromecheck.exe

palindromecheckTest: palindromecheckTest.o
	g++ palindromecheckTest.o -o palindromecheckTest.exe

palindromecheckTest.o: palindromecheckTest.cpp
	g++ -c palindromecheckTest.cpp -o palindromecheckTest.o

test: palindromecheckTest
	./palindromecheckTest.exe

clean:
	rm -f palindromecheck.o palindromecheckTest.o palindromecheck.exe palindromecheckTest.exe
