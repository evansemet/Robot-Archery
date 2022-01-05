# Robot Archery
Jane Street's December 2021 Puzzle
Puzzle can be found at: https://www.janestreet.com/puzzles/robot-archery-index/

Jane Street's solution explanation and leaderboard for accepted submissions can be found at: https://www.janestreet.com/puzzles/robot-archery-solution/

After a grueling year filled with a wide variety of robot sporting events, we have arrived at the final event of the year: Robot Archery. Four robots have qualified for this year’s finals, and have been seeded in the following order:

Robot	Seed 

Aaron	1

Barron  	2

Caren	3

Darrin 	4


The robots will take turns shooting arrows at a target1, starting with Aaron and proceeding in order by seed. When it is a given robot’s turn, they shoot a single arrow. If it is closer to the center of the target than all previous arrows by all players, that robot remains in the tournament, going to the back of the queue to await their next turn. Otherwise that robot is eliminated immediately. The last robot remaining in the queue is the winner.

For example, here is how last year’s finals went, in which Caren was the winner. (Oddly enough it involved the same robots in the same seeding.)

Turn  	Robot	Distance

1	Aaron	10nm

2	Barron  	8nm

3	Caren	7nm

4	Darrin  	1km

5	Aaron	9nm

6	Barron	2nm

7	Caren	1nm

8	Barron	1Ym2


To ten decimal places, what is the probability that Darrin will be this year’s winner? (Or, if you want to send in the exact answer, that’s fine too!)



[1] Each robot is equally skilled. Which is to say: for any region R on the target with nonzero area, the robots all have the same positive probability of landing an arrow within R on any given shot.

[2] It’s a large target.
