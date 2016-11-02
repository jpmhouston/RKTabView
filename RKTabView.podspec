Pod::Spec.new do |s|

  s.name         = 'RKTabView'
  s.version      = '1.0.4-Kater.1'
  s.summary      = 'Easy applicable toolbar/tabbar component for iOS.'
  s.homepage     = 'https://github.com/jpmhouston/RKTabView' # todo: move from jpmhouston to a kater repo
  s.license      = { :type => 'MIT', :file => 'LICENSE' }
  s.author       = { 'Rafael Kayumov' => 'justpoc@gmail.com' }

  s.platform     = :ios, '5.0'
  s.source       = { :git => "https://github.com/jpmhouston/RKTabView.git", :tag => s.version.to_s } # todo: move to a kater repo
  s.source_files  = 'RKTabView/RKTab{Item,View}.{h,m}', 'RKTabView/UIView+Badge.{h,m}'
  s.requires_arc = true

end
