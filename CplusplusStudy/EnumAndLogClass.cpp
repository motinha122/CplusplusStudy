#include <iostream>
#include <string>

using std::cout; using std::cin; using std::endl; using std::string;

class Log {
public:
	enum Level {
		LevelError = 0, LevelWarning, LevelInfo
	};

private:
	Level m_logLevel = LevelInfo;

public:
	void setLevel(Level level) {
		m_logLevel = level;
	}

	void Error(string message) {
		if (m_logLevel >= LevelError) {
			cout << "ERROR: " << message << endl;
		}
	}

	void Warn(string message) {
		if (m_logLevel >= LevelWarning) {
			cout << "WARN: " << message << endl;
		}
	}
	void Info(string message) {
		if (m_logLevel >= LevelInfo) {
			cout << "INFO: " << message << endl;
		}
	}
};

int main()
{
	Log log;
	log.setLevel(Log::LevelWarning);
	log.Error("Hello");
	log.Warn("Hello");
	log.Info("Hello");
	return 0;
}
