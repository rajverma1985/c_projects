/* author: Raj
 code: company values using enum \
 create a program that calculate your weekly pay
 -- ask the user to enter the number of hours in a week
 -- Expected output is gross pay
 
 */
#include <stdio.h>
#include <stdlib.h>
#define payrate 12.00
#define taxrate_300 .15
#define taxrate_150 .20
#define taxrate_450 .25
#define overtime 40
int main()
{
    int hrs_worked;
    double gross_pay, taxes=0, net_pay;
    printf("Please enter the number of hours worked in this week:\n");
    scanf("%d", &hrs_worked);
    // calculate gross pay
    // tax rates: 300$ .15, 450 .20, .25 on next(more than 450)
    //overtime 1.5 times the hrs worked more than 40
    gross_pay= hrs_worked * payrate;
    net_pay= gross_pay - taxes;
    
    if (hrs_worked<=40){
        if (gross_pay<300){
            taxes=(gross_pay * taxrate_300);
            net_pay = gross_pay - taxes;
            printf("Your gross salary is: %lf,\nYour taxes are: %lf and,\nYour take home salary is: %lf\n", gross_pay, taxes, net_pay);
        }
        else if (gross_pay>300 && gross_pay <450){
            taxes=(45 + (gross_pay - 300) * taxrate_150);
            net_pay= gross_pay - taxes;
            printf("Your gross salary is: %lf,\nYour taxes are: %lf and,\nYour take home salary is: %lf\n", gross_pay, taxes, net_pay);
        }
        else if (gross_pay>450){
            taxes=(75 + (gross_pay - 450) * taxrate_450);
            net_pay= gross_pay - taxes;
            printf("Your gross salary is: %lf,\nYour taxes are: %lf and,\nYour take home salary is: %lf\n", gross_pay, taxes, net_pay);
        }
    }
    else{
        gross_pay=(overtime*12) + (hrs_worked-overtime)*18 ;
        taxes=(75 + (gross_pay - 450) * taxrate_450);
        net_pay=gross_pay - taxes;
        printf("Your gross salary is: %lf,\nYour taxes are: %lf and,\nYour take home salary is: %lf\n", gross_pay, taxes, net_pay);
    }
    return 0;
    
}