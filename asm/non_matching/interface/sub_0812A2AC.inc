	THUMB_FUNC_START sub_0812A2AC
sub_0812A2AC: @ 0x0812A2AC
	push {lr}
	cmp r0, #0
	beq _0812A2DA
	ldrh r2, [r0]
	mov r3, #0
	ldrsh r1, [r0, r3]
	mov r0, #128
	neg r0, r0
	cmp r1, r0
	blt _0812A2D2
	cmp r1, #0
	bge _0812A2CA
	add r0, r2, #0
	add r0, r0, #128
	b _0812A2E0
_0812A2CA:
	mov r0, #184
	lsl r0, r0, #1
	cmp r1, r0
	ble _0812A2D6
_0812A2D2:
	mov r0, #0
	b _0812A2E4
_0812A2D6:
	cmp r1, #240
	bgt _0812A2DE
_0812A2DA:
	mov r0, #128
	b _0812A2E4
_0812A2DE:
	sub r0, r0, r2
_0812A2E0:
	lsl r0, r0, #16
	lsr r0, r0, #16
_0812A2E4:
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0812A2AC

