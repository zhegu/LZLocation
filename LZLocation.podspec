Pod::Spec.new do |s|

  s.name         = "LZLocation"
  s.version      = "1.4"
  s.summary      = " LZLocation help you deal with your locaiton."
  s.description  = <<-DESC
MNShowcaseView can highlight particular view of your app and describe about it as a guided tutorial.  It can be used as guided tutorial in your app where you can tell new user's how they can use   different items in your app.
                   DESC

  s.homepage     = "https://github.com/zhegu/LZLocation"
  s.license      = { :type => "MIT", :file => "LICENSE" }
  s.author             = { "Li Zhe" => "lizhe@ctsi.com.cn" }

  s.platform     = :ios, "8.0"
  s.source       = { :git => "https://github.com/zhegu/LZLocation.git", :tag => "#{s.version}" }
  s.source_files  = "LZLocation/"

end
