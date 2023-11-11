amplitude = 4;
treshold_voltage = 0.63;
frequency = 1000;
period = 1 / frequency;


t = 0: 0.00001: 3 * period; 
f1 = amplitude * sin(2 * pi * frequency * t);
f2 = f1 - treshold_voltage;


for(i = 1:length(f2))
    if(f2(i) < 0)
        f2(i) = 0;
    end
end

for(i = 1:length(f2))
    f2(i) = -f2(i);
end


plot(t,f2,"r")
xlabel("t");
ylabel("V");
title("first circuit reverse diode")
grid on;


