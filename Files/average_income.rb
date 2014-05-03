#! ruby

file = File.open(ARGV.shift)
income = Array.new(2) {Array.new}

file.each do |line|
  line = line.split
  if line[0] =~ /Male/
    income[0].push(line[1].to_i)
  elsif line[0] =~ /Female/
    income[1].push(line[1].to_i)
  end
end

male = income[0].inject {|sum, element| sum + element} / income[0].length
female = income[1].inject {|sum, element| sum + element} / income[1].length

puts "average income for male: #{male}"
puts "average income for female: #{female}"

