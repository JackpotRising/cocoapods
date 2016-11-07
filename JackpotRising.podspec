Pod::Spec.new do |s|
 
  s.platform = :ios
  s.ios.deployment_target = '8.2'
  s.name = "JackpotRising"
  s.summary = "Jackpot Rising enables your users to compete against each other."
  s.requires_arc = true
 
  s.version = "1.2.17"

  s.license = { :type => "Apache", :file => "LICENSE" }
 
  s.author = { "Nick Wallace" => "developer@jackpotrising.com" }
 
  s.homepage = "https://github.com/JackpotRising"
 
  # 6 - Replace this URL with your own Git URL from "Quick Setup"
  s.source = { :git => "https://github.com/JackpotRising/cocoapods.git", :tag => "#{s.version}"}
 
  # 7
  s.framework = 'UIKit', 'CoreLocation'

  s.vendored_frameworks = 'JackpotRising.framework'

  s.libraries = 'c++' , 'icucore'

  s.pod_target_xcconfig = { "OTHER_LDFLAGS" => "$(inherited) -ObjC"}

end