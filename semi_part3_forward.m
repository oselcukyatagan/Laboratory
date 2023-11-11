amplitude = 4;
treshold_voltage = 0.63;
frequency = 1000;
period = 1 / frequency;


t = 0: 0.00001: 4 * period; 
f1 = amplitude * sin(2 * pi * frequency * t);



for(i = 1:length(f1))
    if(f1(i) < -0.63)
        f1(i) = -0.63;
    end
end


plot(t,f1,"b");
xlabel("t");
ylabel("V");
title("Part 3 forward")
grid on;
hold on;

plot(t,f1,"r")