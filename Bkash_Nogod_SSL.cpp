#include <iostream>
using namespace std;

class BKashPay {
private:
    float bKashCharge;

public:
    BKashPay() {
        this->bKashCharge = 0.03; // should be 3% extra (not 1.03 times)
    }

    float bkashPay(int amount, int balance) {
        float totalAmount = amount + (amount * this->bKashCharge);
        cout << "bKash charge (3%): " << totalAmount << endl;

        if (totalAmount <= balance) {
            cout << "bKash Payment successful!!!" << endl;
            return totalAmount;
        } else {
            cout << "bKash Payment unsuccessful!!!" << endl;
            cout << "Insufficient balance. Balance: " << balance
                 << "; Total charged amount: " << totalAmount << endl;
            return -1;
        }
    }
};

class NogodPay {
private:
    float nogodCharge;

public:
    NogodPay() {
        this->nogodCharge = 0.015; // 1.5% charge
    }

    float nogodPay(int amount, int balance) {
        float totalAmount = amount + (amount * this->nogodCharge);
        cout << "Nogod charge (1.5%): " << totalAmount << endl;

        if (totalAmount <= balance) {
            cout << "Nogod Payment successful!!!" << endl;
            return totalAmount;
        } else {
            cout << "Nogod Payment unsuccessful!!!" << endl;
            cout << "Insufficient balance. Balance: " << balance
                 << "; Total charged amount: " << totalAmount << endl;
            return -1;
        }
    }
};

class SSLCommercePay : private BKashPay, private NogodPay {
private:
    float SSLCharge;

public:
    SSLCommercePay() : BKashPay(), NogodPay() {
        this->SSLCharge = 0.02; // 2% SSL charge
    }

    void sslPay(int amount, int balance, string paymentMethod) {
        float paidAmount = -1;

        if (paymentMethod == "bKash") {
            paidAmount = bkashPay(amount, balance);
        } else if (paymentMethod == "nogod") {
            paidAmount = nogodPay(amount, balance);
        } else {
            cout << "Wrong Payment Gateway..." << endl;
            return;
        }

        if (paidAmount > 0) {
            float finalAmount = paidAmount + (paidAmount * this->SSLCharge);
            cout << "SSLCommerce charge (2%): " << finalAmount << endl;

            if (finalAmount <= balance) {
                cout << "SSL Commerce Payment successful!!!" << endl;
            } else {
                cout << "SSL Commerce Payment unsuccessful!!!" << endl;
                cout << "Insufficient balance. Balance: " << balance
                     << "; Total charged amount: " << finalAmount << endl;
            }
        }
    }
};

int main() {
    SSLCommercePay payment;

    int balance = 1500;
    int amount = 1000;

    cout << "=== Using bKash ===" << endl;
    payment.sslPay(amount, balance, "bKash");

    cout << "\n=== Using Nogod ===" << endl;
    payment.sslPay(amount, balance, "nogod");

    cout << "\n=== Using Wrong Gateway ===" << endl;
    payment.sslPay(amount, balance, "rocket");

    return 0;
}
