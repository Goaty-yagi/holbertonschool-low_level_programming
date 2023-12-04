const st:string = "Hello World!"
const int:number = 90

console.log(st)

function a(ammout: number, currency: string) {
    // set propaties
}

function b(ammouht: number, currency: string): string {
    // set propaties and return 

    return ''
}
type Color = "red" | 'blue' | 'green' // union type shoul be singular
type Buttton3Props = {
    backgroundColor: Color,
    fontColor: Color,
    fontSize: number,
    pillShape?: boolean
}

//array
type Buttton4Props = {
    backgroundColor: Color,
    fontColor: Color[], // <= this is possible
    fontSize: number,
    pillShape?: boolean
    padding: number[] // the array must includes only string.like [1,2,3]
    margin: [number, number, number, number] // specific case. order, length etc...
}

type Buttton5Props = {
    style: {
        backgroundColor: Color,
        fontColor: Color[], // <= this is possible
        fontSize: number,
        pillShape?: boolean
        padding: number[] // the array must includes only string.like [1,2,3]
        margin: [number, number, number, number] // specific case. order, length etc...
    }
}