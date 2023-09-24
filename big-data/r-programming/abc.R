library(datasets)
str(iris)
subset(iris, Species== "setosa")[1:5, ]
subset(iris, Species == "versicolor")[1:5,]
subset(iris, Species == "virginica")[1:5,]
summary(iris)
par(mar=c(7,5,1,1))
boxplot(iris,las=2)
irisVer <- subset(iris, Species == "versicolor")
irisSet <- subset(iris, Species == "setosa")
irisVir <- subset(iris, Species == "virginica")
par(mfrow=c(1,3),mar=c(6,3,2,1))
boxplot(irisVer[,1:4], main="Versicolor",ylim = c(0,8),las=2)
prinboxplot(irisSet[,1:4], main="Setosa",ylim = c(0,8),las=2)
boxplot(irisVir[,1:4], main="Virginica",ylim = c(0,8),las=2)

