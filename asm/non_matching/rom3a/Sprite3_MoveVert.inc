	THUMB_FUNC_START Sprite3_MoveVert
Sprite3_MoveVert: @ 0x080C2BAC
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r1, _080C2C04  @ =gRam
	ldr r2, _080C2C08  @ =0x00000F12
	add r0, r1, r2
	add r0, r4, r0
	ldrb r3, [r0]
	add r6, r1, #0
	cmp r3, #0
	beq _080C2C44
	ldr r0, _080C2C0C  @ =0x00000F32
	add r2, r6, r0
	add r2, r4, r2
	lsl r0, r3, #4
	mov r1, #255
	and r0, r0, r1
	ldrb r1, [r2]
	add r0, r0, r1
	add r5, r0, #0
	strb r5, [r2]
	lsr r1, r3, #4
	mov r7, #0
	mov r0, #128
	and r3, r3, r0
	cmp r3, #0
	beq _080C2BE8
	mov r0, #240
	orr r1, r1, r0
	mov r7, #255
_080C2BE8:
	ldr r2, _080C2C10  @ =0x00000ED2
	add r0, r6, r2
	add r0, r4, r0
	ldrb r0, [r0]
	add r1, r0, r1
	mov r0, #128
	lsl r0, r0, #1
	and r0, r0, r5
	cmp r0, #0
	beq _080C2C14
	add r0, r1, #1
	lsl r0, r0, #16
	b _080C2C16
	.byte 0x00
	.byte 0x00
_080C2C04:
	.4byte gRam
_080C2C08:
	.4byte 0x00000F12
_080C2C0C:
	.4byte 0x00000F32
_080C2C10:
	.4byte 0x00000ED2
_080C2C14:
	lsl r0, r1, #16
_080C2C16:
	lsr r3, r0, #16
	ldr r1, _080C2C38  @ =0x00000ED2
	add r0, r6, r1
	add r0, r4, r0
	strb r3, [r0]
	ldr r2, _080C2C3C  @ =0x00000EF2
	add r0, r6, r2
	add r2, r4, r0
	ldrb r1, [r2]
	mov r0, #128
	lsl r0, r0, #1
	and r3, r3, r0
	cmp r3, #0
	beq _080C2C40
	add r0, r1, #1
	add r0, r0, r7
	b _080C2C42
_080C2C38:
	.4byte 0x00000ED2
_080C2C3C:
	.4byte 0x00000EF2
_080C2C40:
	add r0, r1, r7
_080C2C42:
	strb r0, [r2]
_080C2C44:
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END Sprite3_MoveVert

	.byte 0x00
	.byte 0x00
