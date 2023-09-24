X=c(151,174,138,186,128,136,179,163,152,131)
y=c(63,81,56,91,47,58,76,72,62,48)
x
y
#lm() function to create a relationship model
relation <- lm(y~X)
print(relation)
print(summary(relation))
a<- data.frame(X=180)
#predicting weight of a person if height is 180
result <- predict(relation,a)
print(result)
#visualize the result graphically
#plot the chart
plot(y,X,col ="blue", main = "height and weight prediction using regration",
     abline(lm(X~y)),cex=1.3,pch=16,xlab="weight in kg", ylab="height in cm")
dev.off()
