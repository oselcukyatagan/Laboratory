amplitude = 4;
treshold_voltage = 0.63;
frequency = 1000;
period = 1 / frequency;


t = 0: 0.00001: 2 * period; 
f1 = amplitude * sin(2 * pi * frequency * t);
f2 = f1 - treshold_voltage;


for(i = 1:length(f2))
    if(f2(i) < 0)
        f2(i) = 0;
    end
end


plot(t,f1,"b");
xlabel("t");
ylabel("V");
title("Output Voltage 2c")
grid on;
hold on;

plot(t,f2,"r")