#include <iostream>
#include <vector>
#include <sstream>
#include <regex>
#include <algorithm>
#include <cmath>
using namespace std;

int ToMinutes(string time_HH_MM){

    for(size_t i = 0; i < time_HH_MM.size(); i++) {
        if (time_HH_MM[i] == ':') {
            string hours = time_HH_MM.substr(0, i + 1);
            string mins = time_HH_MM.substr(i + 1, time_HH_MM.size() - i - 1);
            return stoi(hours) * 60 + stoi(mins);
        }
    }
}

int MinimalTimeDifference(vector <int> minutes) {
    sort(minutes.begin(), minutes.end());
    int min = minutes[1] - minutes[0];
    for(int i=1; i < minutes.size()-1; i++){
        int tmp = minutes[i+1]-minutes[i];
        if(tmp <= min)
            min = tmp;
    }

    if(1440 - minutes[minutes.size()-1] + minutes[0] <= min)
        min = (1440 - minutes[minutes.size()-1] + minutes[0]);

    return min;
}

int main() {

    cout<< R"(Podaj godziny ( w formie: ["23:59", "00:00"] ): )" <<endl;
    string inpt;
    getline(cin, inpt);
    smatch matches;
    regex pattern ("[[:digit:]]{2}:[[:digit:]]{2}");
    vector <int> minutes;

    int i = 0;
    while (regex_search (inpt, matches, pattern)) {
        for (auto x : matches) {
            //cout << x << " ";
            //cout << ToMinutes(x) << " ";
            minutes.push_back(ToMinutes(x));
            //cout<<minutes[i];
        }
        i++;
        //cout << endl;
        inpt = matches.suffix().str();
        }


    cout<<"Najmniejsza roznica miedzy godzinami to: "<< MinimalTimeDifference(minutes) << " min";

    return 0;
}
