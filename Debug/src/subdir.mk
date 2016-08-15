################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/CropImg.cpp \
../src/DisplayImage.cpp \
../src/Smoothing.cpp 

OBJS += \
./src/CropImg.o \
./src/DisplayImage.o \
./src/Smoothing.o 

CPP_DEPS += \
./src/CropImg.d \
./src/DisplayImage.d \
./src/Smoothing.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/usr/include/opencv -I/usr/include/opencv2 -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


