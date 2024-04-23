#!/bin/bash

# This is a requirement for study-with-me, C course

echo "This file will install requirements for the C course."

# Please verify the content before proceeding
read -p "Do you agree to proceed with the installation? (yes/no): " agreement

# Convert and check the validation of the input
agreement=$(echo "$agreement" | tr '[:upper:]' '[:lower:]')

if [ "$agreement" == "yes" ] || [ "$agreement" == "y" ]; then
    # I will install CMake

    sudo apt-get update -y && sudo apt-get upgrade -y
	sudo apt-get install -y wget && sudo apt-get install -y tar

	# Install the required dependencies
	sudo apt-get install -y gcc
    sudo apt-get install -y build-essential libssl-dev
    
    # Check if CMake tarball file exists
    if [ ! -f "cmake-3.29.0.tar.gz" ]; then
        wget https://github.com/Kitware/CMake/releases/download/v3.29.0/cmake-3.29.0.tar.gz
    else
        echo "CMake tarball file already exists. Skipping download."
    fi

    # Extract the downloaded tarball file
    tar -zxvf "cmake-3.29.0.tar.gz"

    # Change into the extracted directory
    cd "cmake-3.29.0" || exit

    # Run the CMake build process
    ./bootstrap
    make
    sudo make install
else
    echo "Agreement not accepted. Exiting."
    exit 1
fi
