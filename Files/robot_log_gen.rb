#! ruby

def time_rand from = 0.0, to = Time.now
  Time.at(from + rand * (to.to_f - from.to_f))
end

num = Random.new
file = File.open("robot.txt", "w") do |file|
  10000.times do
    time = time_rand
    file.puts "#{time} robot:[#{num.rand(0..25)}] activated"
  end
end

