function String = randstring(varargin)
%RANDSTRING: Random string, containing only alphanumeric characters and the
%underscore

try
   rng('shuffle');
catch
   stream = RandStream('mt19937ar', 'seed', sum(100*clock));
   try      
      RandStream.setGlobalStream(stream);
   catch
      RandStream.setDefaultStream(stream); %#ok<SETRS>
   end
end

if nargin==0
    n = 10;
    LetterStore = 'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_';
elseif nargin == 1
    n = varargin{1};
    LetterStore = 'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_';
elseif nargin == 2
    n = varargin{1};
    LetterStore = varargin{2};
end

String = LetterStore(ceil(length(LetterStore).*rand(1,n)));

end