void credit_card::make_payment(double payment) {            //make a payment
    double interest_rate = 0.2;
    balance -= payment * (1 + interest_rate);
}