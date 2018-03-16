#ifndef SWUSTESTSERVER_HPP
#define SWUSTESTSERVER_HPP
#include "../src/soapswusService.h"
#include <map>
#include <string>
using std::string;
class SwusTestServer : public swusService {
public:
    ~SwusTestServer() = default;

    int login(std::string username,
              std::string password,
              struct ns2__loginResponse& _param_1) override;
    swusService* copy() override;
    void fillData(const string& file_name,
                  const string& fake_file_name);
    int conditionalRun(int portNumber);
private:
    bool m_isRunning;
    std::map<string, string> users;
    std::map<string, string> fakeUsers;
    void fillDataWorker(std::map<string, string>& data,
                        const string& file_name);



};

#endif // SWUSTESTSERVER_HPP
