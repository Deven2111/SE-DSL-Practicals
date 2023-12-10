class Bank:
    def __init__(self):
        self.balance=0
        print("The account is created")
    def deposit(self):
        amount=float(input("Enter the amount to be deposited"))
        self.balance = self.balance + amount
        print("deposit is successful and the balance is %f " % self.balance)
    def withdraw(self):
        amount=float(input("Enter the amount to withdraw"))
        if(self.balance>=amount):
            self.balance=self.balance-amount
            print("The withdraw is successful")
        else:
            print("Insufficient Balance")
    def enquiry(self):
        print("Balance in the account is %f" %self.balance)
account=Bank()
account.deposit()
account.withdraw()
account.enquiry()