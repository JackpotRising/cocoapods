Pod::Spec.new do |s|

  s.platform = :ios
  s.ios.deployment_target = '9.0'
  s.name = "JackpotRising"
  s.summary = "Jackpot Rising is a patent pending software solution that you can integrate into your games, that enables your users to compete against."
  s.requires_arc = true

  s.version = "2.2.10"

  s.license = { :type => "Apache", :file => "LICENSE" }

  s.author = { "Nick Wallace" => "developer@jackpotrising.com" }

  s.homepage = "https://github.com/JackpotRising"

  # 6 - Replace this URL with your own Git URL from "Quick Setup"
  s.source = { :git => "https://github.com/JackpotRising/cocoapods.git", :tag => "#{s.version}"}

  # 7
  s.framework = 'UIKit', 'CoreLocation', 'CoreText'

  s.vendored_frameworks = 'JackpotRising.framework'

  s.xcconfig = { "OTHER_LDFLAGS" => "$(inherited) -ObjC", "EMBEDDED_CONTENT_CONTAINS_SWIFT" => "YES", 'CLANG_ENABLE_MODULES' => 'YES', 'DEFINES_MODULE' => 'YES' }

end