	THUMB_FUNC_START sub_0801F0EC
sub_0801F0EC: @ 0x0801F0EC
	push {r4-r7,lr}
	add r6, r0, #0
	add r1, r6, #0
	add r1, r1, #66
	ldrb r2, [r1]
	mov r0, #0
	ldrsb r0, [r1, r0]
	cmp r0, #0
	ble _0801F102
	sub r0, r2, #1
	b _0801F104
_0801F102:
	add r0, r2, #1
_0801F104:
	strb r0, [r1]
	ldrh r5, [r6, #12]
	add r7, r6, #0
	add r7, r7, #43
	ldrb r4, [r7]
	mov r0, #160
	lsl r0, r0, #2
	str r0, [r6, #12]
	add r0, r6, #0
	add r0, r0, #62
	ldrb r0, [r0]
	strb r0, [r7]
	add r0, r6, #0
	bl sub_080096C4
	str r5, [r6, #12]
	strb r4, [r7]
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801F0EC

