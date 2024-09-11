class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) 
    {
        int arriveAliceDay = dateToDayOfYear(arriveAlice);
        int leaveAliceDay = dateToDayOfYear(leaveAlice);
        int arriveBobDay = dateToDayOfYear(arriveBob);
        int leaveBobDay = dateToDayOfYear(leaveBob);

        int startOverlap = std::max(arriveAliceDay, arriveBobDay);
        int endOverlap = std::min(leaveAliceDay, leaveBobDay);

        
        if (startOverlap > endOverlap) {
            return 0;
        }

        return endOverlap - startOverlap + 1;
    }
        
private:    
    int dateToDayOfYear(string s) 
    {
        int month = getMonth(s);
        int day = getDay(s);
        std::vector<int> monthDays = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        int dayOfYear = 0;
        for (int i = 0; i < month - 1; ++i) {
            dayOfYear += monthDays[i];
        }

        dayOfYear += day;
        return dayOfYear;
    }

    int getMonth(string s)
    {
        return stoi(s.substr(0,2));

    }
    
    int getDay(string s)
    {

        return stoi(s.substr(3,2));

    }
};
