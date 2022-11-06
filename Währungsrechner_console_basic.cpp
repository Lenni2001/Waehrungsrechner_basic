#include <iostream>
#include <windows.h>
using namespace std; // Namespace std (::std fällt weg)

int main()
{
    int Waehrung = 0; //Variablen initialisieren
    double Betrag, Faktor, Ergebnis; //Variablen initialisieren

    string eins = "EUR->USD", zwei = "USD -> EUR", drei = "EUR -> JPY", vier = "JPY -> EUR", Waehrung_anzeige;


    cout << "Dies ist ein Währungsrechner... Er rechnet verschiedenste Währungen um.\n"; //Vorwort

    cout << "Bitte waehlen sie ihre Umrechnung aus in dem sie die jeweilige Zahl eingeben!\n";

    cout << "[1] EUR -> USD\n";

    cout << "[2] USD -> EUR\n";

    cout << "[3] EUR -> JPY\n";

    cout << "[4] JPY -> EUR\n";

    cin >> Waehrung;        // Umrechnung einlesen

    while (Waehrung > 4 || Waehrung <= 0)       // Überprüfen ob die User Eingabe gültig ist
    {
        cout << "Bitte geben sie einen gueltigen Wert ein: ";       // Aufforderung einen richtigen Wert einzugeben
        cin >> Waehrung;        // Einlesen des richtigen Wertes

    }

    system("CLS");       //Konsole leeren



    switch (Waehrung)
    {
    case (1):
    {
        cout << "USD -> EUR\n";     // Anzeige der gewählten Umrechnung
        cout << "Bitte geben sie nun den Betrag an: ";      // Aufforderung den Betrag anzugeben
        cin >> Betrag;      // Einlesen des Betrages
        cout << "\nDer Wechselkurs betraegt 1 EUR = 1.18 USD\n\n";      //Anzeigen des Wechselkurses der gewählten Umrechnung
        Ergebnis = Betrag * 1.18;       // Berechnung des Ergebnisses
        cout << Betrag << " EUR => " << Ergebnis << " USD";     // Ausgabe des Ergebnis
        Sleep(10000);       // 10sek warten
        return 0;
    }

    case (2):
    {
        cout << "EUR -> USD\n";     // Anzeige der gewählten Umrechnung
        cout << "Bitte geben sie nun den Betrag an: ";      // Aufforderung den Betrag anzugeben
        cin >> Betrag;      // Einlesen des Betrages
        cout << "\nDer Wechselkurs betraegt 1 USD = 0.85 EUR\n\n";      //Anzeigen des Wechselkurses der gewählten Umrechnung
        Ergebnis = Betrag * 0.85;       // Berechnung des Ergebnisses
        cout << Betrag << " USD => " << Ergebnis << " EUR";     // Ausgabe des Ergebnis
        Sleep(10000);       // 10sek warten
        return 0;
    }

    case (3):
    {
        cout << "EUR -> JPY\n";     // Anzeige der gewählten Umrechnung
        cout << "Bitte geben sie nun den Betrag an: ";      // Aufforderung den Betrag anzugeben
        cin >> Betrag;      // Einlesen des Betrages
        cout << "\nDer Wechselkurs betraegt 1 EUR = 126.32 JPY\n\n";      //Anzeigen des Wechselkurses der gewählten Umrechnung
        Ergebnis = Betrag * 126.32;       // Berechnung des Ergebnisses
        cout << Betrag << " EUR => " << Ergebnis << " JPY";     // Ausgabe des Ergebnis
        Sleep(10000);       // 10sek warten
        return 0;
    }

    case (4):
    {
        cout << "JPY -> EUR\n";     // Anzeige der gewählten Umrechnung
        cout << "Bitte geben sie nun den Betrag an: ";      // Aufforderung den Betrag anzugeben
        cin >> Betrag;      // Einlesen des Betrages
        cout << "\nDer Wechselkurs betraegt 1 JPY = 0.0079 EUR\n\n";      //Anzeigen des Wechselkurses der gewählten Umrechnung
        Ergebnis = Betrag * 0.0079;       // Berechnung des Ergebnisses
        cout << Betrag << " JPY => " << Ergebnis << " EUR";     // Ausgabe des Ergebnis
        Sleep(10000);       // 10sek warten
        return 0;
    }



    }
}
