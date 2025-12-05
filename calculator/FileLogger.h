#ifndef FILELOGGER_H
#define FILELOGGER_H

#include "ILogger.h"
#include <fstream>

class FileLogger : public ILogger {
private:
    std::ofstream file;
    
public:
    FileLogger(const std::string& filename) {
        file.open(filename, std::ios::app);
    }
    
    ~FileLogger() {
        if (file.is_open()) {
            file.close();
        }
    }
    
    void Log(const std::string& message) override {
        if (file.is_open()) {
            file << "LOG: " << message << std::endl;
        }
    }
};

#endif