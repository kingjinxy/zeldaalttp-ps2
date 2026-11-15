	THUMB_FUNC_START sub_0812A2E8
sub_0812A2E8: @ 0x0812A2E8
	push {lr}
	cmp r0, #0
	beq _0812A316
	ldrh r2, [r0, #2]
	mov r3, #2
	ldrsh r1, [r0, r3]
	mov r0, #128
	neg r0, r0
	cmp r1, r0
	blt _0812A30E
	cmp r1, #0
	bge _0812A306
	add r0, r2, #0
	add r0, r0, #128
	b _0812A31C
_0812A306:
	mov r0, #144
	lsl r0, r0, #1
	cmp r1, r0
	ble _0812A312
_0812A30E:
	mov r0, #0
	b _0812A320
_0812A312:
	cmp r1, #160
	bgt _0812A31A
_0812A316:
	mov r0, #128
	b _0812A320
_0812A31A:
	sub r0, r0, r2
_0812A31C:
	lsl r0, r0, #16
	lsr r0, r0, #16
_0812A320:
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0812A2E8

