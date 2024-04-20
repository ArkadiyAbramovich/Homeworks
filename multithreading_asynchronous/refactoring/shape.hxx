#pragma once

class Shape {

    public:
    	Shape() = default;
		
    	void virtual Shift(int x, int y, int z) {

		}
		void virtual ScaleX(int x) {

		}
		void virtual ScaleY(int y) {

		}
		void virtual ScaleZ(int z) {

		}
		void virtual Scale(int s) {

		}

		int virtual Sqrt() {
			return 0;
		}

        int virtual Volume() {
			return 0;
		}
};