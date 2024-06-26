#include<iostream>
#include<IO.hpp>
#include<fstream>

IO::IO(const std::string& file_path){
file_stream.open(file_path,std::ios::in|std::ios::out|std::ios::binary);
if(!file_stream.is_open()){
    throw std::runtime_error("Failed to open file");
}
}

