var nb1 = 1; var nb2 = 1; var nb3=0; var sum = 0;
while (nb1 < 4000000 && nb2 < 4000000)
{
    nb3 = nb1 + nb2;
    if(nb3%2===0) {sum += nb3;}
    nb1 = nb2;
    nb2 = nb3;
}

console.log("The sum of all even numbers (<4million) from the Fibonacci sequence\
 is"+ " " + sum + "." );
