#pragma once
#include "config.h"

//namespace para criação de functions/definitions.
namespace vkInit {

     vk::Instance make_instance(bool debug, const char* applicationName) {
     
     if (debug) { 
         std::cout << "Making an instance...\n";
     
     }
     
     return nullptr;
     }
}
