#include <iostream>  
#include <string>  
using namespace std;  

string getEmoji(string weatherCondition) {  
    if (weatherCondition == "Clear") return "☀️";  
    if (weatherCondition == "Partly Cloudy") return "🌤️";  
    if (weatherCondition == "Hot and Humid") return "🌞";  
    if (weatherCondition == "Rain") return "🌧️";  
    if (weatherCondition == "Rainy") return "☔";  
    if (weatherCondition == "Cold and Wet") return "🌧️❄️";  
    if (weatherCondition == "Cold and Dry") return "❄️";  
    if (weatherCondition == "Snowstorm/Snowfall") return "❄️🌨️";  
    return "🌈"; // Default emoji  
}  

int main() {  
    float temperature;  
    float precipitationIndex;  
    string weatherCondition;  
    string warningMessage;  

    // Input data from user  
    cout << "🌦️ Weather Bot 🌦️" << endl;  
    cout << "Enter the precipitation index (0-100): ";  
    cin >> precipitationIndex;  
    cout << "Enter the temperature in Celsius: ";  
    cin >> temperature;  

    // Weather classification logic  
    if (precipitationIndex < 20) {  
        if (temperature > 20) {  
            weatherCondition = "Clear";  
            warningMessage = "Perfect day for a walk! 🏞️";   
        } else {  
            weatherCondition = "Cold and Dry";  
            warningMessage = "Brrr! Bundle up! 🧥";   
        }  
    } else if (precipitationIndex < 60) {  
        if (temperature > 20) {  
            weatherCondition = "Partly Cloudy";  
            warningMessage = "Don't forget your sunglasses! 😎";   
        } else {  
            weatherCondition = "Rain";  
            warningMessage = "Grab your umbrella and dance in the rain! 🎶☔";   
        }  
    } else {  
        if (temperature > 30) {  
            weatherCondition = "Hot and Humid";  
            warningMessage = "Stay hydrated! 🌊💧";   
        } else if (temperature > 20) {  
            weatherCondition = "Rainy";  
            warningMessage = "Perfect time for some cozy vibes indoors! ☕";   
        } else if (temperature <= 0) {  
            weatherCondition = "Snowstorm/Snowfall";  
            warningMessage = "Stay in and binge-watch your favorite series! 📺❄️";   
        } else {  
            weatherCondition = "Cold and Wet";  
            warningMessage = "Wrap up and maybe catch a movie! 🎬";   
        }  
    }  

    // Display the weather information  
    cout << "\n🌈 Weather Report 🌈" << endl;  
    cout << "Precipitation Index: " << precipitationIndex << endl;  
    cout << "Temperature: " << temperature << "°C" << endl;  
    cout << "Weather Condition: " << weatherCondition << " " << getEmoji(weatherCondition) << endl;  
    if (!warningMessage.empty()) {  
        cout << "🔔 Warning: " << warningMessage << endl; // Display warning message with a bell emoji  
    }  

    cout << "\nStay safe and enjoy your day! 💖" << endl;  

    return 0;  
}