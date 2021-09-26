class Event {
private:
	int eventID;
	char eventType[20];
	char eventColor[10];
	char location[20];
public:
	void setEventDetails(int evID, const char evTyp[], const char evColor[], const char loc[]);
	void displayEventDetails();
	void setEventLocation(const char loca[]);

};