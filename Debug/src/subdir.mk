################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
/home/goran/workspace/Experimental/src/BitwiseSwap.cpp \
/home/goran/workspace/Experimental/src/CirkularLinkedList.cpp \
../src/CirkularLinkedListTest.cpp \
../src/ExperimentalTest.cpp \
/home/goran/workspace/Experimental/src/ReverseLinkedList.cpp \
../src/ReverseLinkedListTest.cpp \
../src/TestClass.cpp 

OBJS += \
./src/BitwiseSwap.o \
./src/CirkularLinkedList.o \
./src/CirkularLinkedListTest.o \
./src/ExperimentalTest.o \
./src/ReverseLinkedList.o \
./src/ReverseLinkedListTest.o \
./src/TestClass.o 

CPP_DEPS += \
./src/BitwiseSwap.d \
./src/CirkularLinkedList.d \
./src/CirkularLinkedListTest.d \
./src/ExperimentalTest.d \
./src/ReverseLinkedList.d \
./src/ReverseLinkedListTest.d \
./src/TestClass.d 


# Each subdirectory must supply rules for building sources it contributes
src/BitwiseSwap.o: /home/goran/workspace/Experimental/src/BitwiseSwap.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -I"/home/goran/gtest-1.7.0/include" -I"/home/goran/workspace/Experimental/src" -O0 -g3 -Wall -c -fmessage-length=0 -std=c++0x -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/CirkularLinkedList.o: /home/goran/workspace/Experimental/src/CirkularLinkedList.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -I"/home/goran/gtest-1.7.0/include" -I"/home/goran/workspace/Experimental/src" -O0 -g3 -Wall -c -fmessage-length=0 -std=c++0x -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -I"/home/goran/gtest-1.7.0/include" -I"/home/goran/workspace/Experimental/src" -O0 -g3 -Wall -c -fmessage-length=0 -std=c++0x -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/ReverseLinkedList.o: /home/goran/workspace/Experimental/src/ReverseLinkedList.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -I"/home/goran/gtest-1.7.0/include" -I"/home/goran/workspace/Experimental/src" -O0 -g3 -Wall -c -fmessage-length=0 -std=c++0x -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


