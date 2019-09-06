
function convertLoggedSimData(logsout)
numItem=numElements(logsout);
Names=getElementNames(logsout);

for n=1:numItem
    ThisName=Names{n};
    eval([ThisName,'=logsout{',num2str(n),'}.Values.Data;'])
    eval([ThisName,'_time=logsout{',num2str(n),'}.Values.Time;'])
        
end



save('SimResultsRaw.mat','-v6');
end



