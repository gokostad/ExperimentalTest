Google test configuration:

- google test framework is compiled in /home/user/gtest-1.7.0. 
  There is nice readme file there about building framework and how to include it in project
- Enviromental variable GDEST_DIR is exported from /etc/environment file, path to google test  
- ExperimentalTest is separate project of Experimental project
- what should be included in ExperimentalTest:

	Project Properties - C/C++ Build  - Settings
		Cross G++ Compiler
			Includes
				Include path
					${GTEST_DIR}/include
					
		Cross G++ Linker
			Libaries
				pthread   (is used by gtest)
				gtest     (gtest library, lib prefix is automaticly added-libgtest.a)
				
			Library search path
				${GTEST_DIR}
  
  - How to include project under test into the ExperimentalTest is still under discussion for me:
  		Into the test project should be included
  			Project Properties - C/C++ Build  - Settings
				Cross G++ Compiler
					Includes
						Include path
							{ Path to the include folder, or src, from project under test }
						 
  		One way is to include source file under test into the test project:
  			File - New - Other - General - File - Advanced - Link to the file in file system
  		
  		If the output of the project under test is dll, it can be linked with test project probably
  		
	- For the rest, how to build main function and test, which file should be included see example  		
  			