const rectangle = {
    width: 0,
    height: 0,
  
    setRectangle: function(width, height) {
      this.width = width;
      this.height = height;
    },
  
    area: function() {
      return this.width * this.height;
    },
  
    perimeter: function() {
      return 2 * (this.width + this.height);
    }
  };
  
  rectangle.setRectangle(5, 4);
  
  console.log("Area:", rectangle.area());
  
  console.log("Perimeter:", rectangle.perimeter());
  