#include <iostream>
#include <string>

using std::cout; using std::cin; using std::endl; using std::string;

class Log {
public:
	const int logLevelError = 0;
	const int logLevelWarning = 1;
	const int logLevelInfo = 2;

private:
	int m_logLevel = logLevelInfo;

public:
	void setLevel(int level) {
		m_logLevel = level;
	}

	void Error(string message) {
		if (m_logLevel >= logLevelError) {
			cout << "ERROR: " << message << endl;
		}
	}

	void Warn(string message) {
		if (m_logLevel >= logLevelWarning) {
			cout << "WARN: " << message << endl;
		}
	}
	void Info(string message) {
		if (m_logLevel >= logLevelInfo) {
			cout << "INFO: " << message << endl;
		}
	}
};

int main()
{
	Log log;
	log.setLevel(log.logLevelWarning);
	log.Error("Hello");
	log.Warn("Hello");
	log.Info("Hello");
	return 0;
}
