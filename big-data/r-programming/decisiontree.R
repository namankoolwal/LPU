#install.packages("party")
#install.packages("caTools")

library(party)
print(readingSkills)

input.dat <- readingSkills[c(1:105),]
png(file ="decision_tree2.png")
#build a decision tree
output.tree <- ctree(nativeSpeaker ~age+shoeSize+score,data=input.dat)

plot(output.tree)
print(output.tree)


