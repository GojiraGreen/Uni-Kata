#! ruby

robots = Hash.new
file = File.open(ARGV.shift)
file.each do |line|
  line = line.split
  if line[0].split('-')[0] >= 1973.to_s
    if robots.has_key?(line[3])
      robots[line[3]] += 1
    else
      robots[line[3]] = 1
    end
  end
end

robots.each do |key, value|
  puts "#{value} #{key}"
end
      
