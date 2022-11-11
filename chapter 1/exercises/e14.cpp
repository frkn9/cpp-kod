void make_payment(double payment, const Date& due_date, const Date& payment_date) {            //make a payment
    const double late_pay_fee = 10.0;
    if(payment_date.is_later_than(due_date))
        balance -= late_pay_fee;
        
    balance -= payment;
}