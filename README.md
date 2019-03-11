# Install on Windows
## Install ruby
Download and install [Ruby+Devkit 2.5.3-1 (x64)](https://rubyinstaller.org)

## Install mingw
Download and install [mingw](https://sourceforge.net/projects/mingw-w64/)

## Install Doxygen
Download and install [Doxygen V1.8.6](https://sourceforge.net/projects/doxygen/files/rel-1.8.6/doxygen-1.8.6-setup.exe/download)

## Install Ceedling
In Windows PowerShell:
`> gem install ceedling`

# Prepare and testing
```
> git clone <URL>
> cd tool_numbers
> ceedling test:all
```
Response must be:
```
Test 'test_tool_numbers.c'
--------------------------
Generating runner for test_tool_numbers.c...
Compiling test_tool_numbers_runner.c...
Compiling test_tool_numbers.c...
Compiling unity.c...
Compiling tool_numbers.c...
Compiling CException.c...
Compiling cmock.c...
Linking test_tool_numbers.out...
Running test_tool_numbers.out...

--------------------
OVERALL TEST SUMMARY
--------------------
TESTED:  5
PASSED:  5
FAILED:  0
IGNORED: 0
```
# Generate Documentation
```
> cd .\DoxyGen
> .\genDoc.bat
```
Run in Documentation folder `index.html`
