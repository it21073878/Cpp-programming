
class Plane
{
private:
	int planeID;
	char piolet[20];
	char destination[20];
public:
	void setPlaneDetails(int pID, const char pName[], const char det[]);
	void displayPlaneDetails();
	void getDestination(const char pio[]);
};

