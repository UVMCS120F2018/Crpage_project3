####Crpage_project3

#Octopuses in a Tank

###Overview
I chose to create an Octopus class. They are my favorite animal so I 
decided it would be great to spend time working with them.
Octopus are some of the smartest animals on the planet so I decided to make a 
game about a couple octopus trying to break into a mysterious box in their tank. 

This box can only be opened if the octopus have an IQ over 80. They can 
make their IQ better by reading books or winning fights. Octopus can win fights by 
being smarter, or, if the octopus are of the same inelegance level, the size of their beak.
Fights are risky because if your octopus looses, they loose a leg. Once they have 0 legs... they die and the game 
ends. 

### Overloaded Operators

I decided to overload four operators:
- "*"
- "<<"
- "=="
- "+"

###"*"
This operator make two octopus fight. It compares their integrated iq levels 
and the one with the large wins. If they have the same iq then the octopus with a large 
beak wins. If their beak size is the same, its a tie. 

##### ">>"
This operator prints out the "status" of an octopus.

For example:
```$xslt
Stats:
Legs :8
Fights Won : 0
Books Read : 0
Inelegance : 50
Life Status : Alive

```

##### "=="
This operator returns a boolean. If the beak size is the same it's true,
if it's different, false.

##### "+"
This operator makes both octopus read a book at the same time. I like to call this one 
"Study Time".

###Enums

I created an enum called size for the beak size of an Octopus.
This enum can take on 3 values:
- Small
- Medium
- Large

I created this because it's easier to keep track of size with words than 
corresponding integers.

###Structs
I created an IQ struct for Octopus. In here, it holds values that can 
easily be accessed and contained under one category. 
Inside IQ there are the following fields: 
- Smartness 
- Books Read
- Fights Won


#####Smartness
when an octopus reads a book it gets smartness values, same for when it 
wins a fight.
#####Books Read
keeps track of the number of books read
#####Fights Won
keeps track of the number of fights won

Structs are kinda cool. I like them.

## Testing
I tested all my methods in testing.cpp

## Other Notes

I had a lot of fun making these classes. Hope you enjoy :) 