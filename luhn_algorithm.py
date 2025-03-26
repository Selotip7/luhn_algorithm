def check(number):
    card_number_reversed=number[::-1]
    card_number_odd=card_number_reversed[::2]

    odd_total=0
    for digit in card_number_odd:
            odd_total+=int(digit)

    card_number_even=card_number_reversed[1::2]
    even_total=0;
    # print(card_number_even)
    for even in card_number_even:
        temp=int(even)*2;

        if temp  >=10:
            even_total+=(temp//10)+(temp%10)
            # print(even_total)
        else:
            even_total+=temp
    
    final=odd_total+even_total
    if final%10==0:
         print("saaaah")
    else:
         print("Salaaaaah")
        # print(even_total,"\n")      
    # print(card_number_even)        
    # print(card_number_reversed)    

def main():
    card_number="7,9,9,2,7,3,9,8,7,1,3"
    card_trans=str.maketrans({' ':'','-':'',',':''})
    card_final=card_number.translate(card_trans)
    check(card_final)

main()