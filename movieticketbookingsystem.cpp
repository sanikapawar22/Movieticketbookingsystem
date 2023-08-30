#include <iostream>
#include <map>


using namespace std;

int main() {
    map<string, int> movies;

    movies["Avatar"] = 50;
    movies["Avengers"] = 100;

    string movieName;
    cout << "Enter movie name: ";
    cin >> movieName;

    if (movies.find(movieName) == movies.end()) {
        cout << "Movie not found." << endl;
    } else {
        
        int availableSeats = movies[movieName];

        int numTickets;
        cout << "Enter number of tickets: ";
        cin >> numTickets;

        if (numTickets <= 0 || numTickets > availableSeats) {
            cout << "Invalid number of tickets." << endl;
        } else {
            availableSeats -= numTickets;
            movies[movieName] = availableSeats;
            cout << numTickets << " tickets booked for " << movieName << "." << endl;
        }
    }

    return 0;
}