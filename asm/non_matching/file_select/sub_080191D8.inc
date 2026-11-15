	THUMB_FUNC_START sub_080191D8
sub_080191D8: @ 0x080191D8
	push {r4-r6,lr}
	add r4, r0, #0
	ldrb r1, [r4, #20]
	add r6, r1, #0
	cmp r6, #1
	bne _08019248
	add r5, r4, #0
	add r5, r5, #116
	add r3, r4, #0
	add r3, r3, #69
	ldrb r0, [r5]
	ldrb r2, [r3]
	cmp r0, r2
	beq _08019248
	add r0, r1, #1
	strb r0, [r4, #20]
	mov r1, #0
	ldr r0, _08019268  @ =0x0000FFF6
	strh r0, [r4, #58]
	mov r0, #144
	lsl r0, r0, #9
	str r0, [r4, #16]
	add r2, r4, #0
	add r2, r2, #63
	mov r0, #25
	strb r0, [r2]
	add r2, r2, #7
	mov r0, #2
	strb r0, [r2]
	sub r2, r2, #9
	ldrb r0, [r2]
	lsl r0, r0, #1
	strb r0, [r2]
	add r0, r4, #0
	add r0, r0, #66
	strb r1, [r0]
	ldr r0, _0801926C  @ =gUnknown_08139AB0
	ldr r0, [r0, #4]
	str r0, [r4, #72]
	add r1, r4, #0
	add r1, r1, #118
	mov r0, #150
	lsl r0, r0, #3
	strh r0, [r1]
	mov r0, #255
	strb r0, [r3]
	mov r0, #1
	neg r0, r0
	strb r0, [r5]
	add r0, r4, #0
	add r0, r0, #42
	strb r6, [r0]
	add r0, r4, #0
	mov r1, #1
	bl 0x08003870
_08019248:
	add r0, r4, #0
	add r0, r0, #117
	ldrb r0, [r0]
	cmp r0, #0
	beq _0801925A
	add r1, r4, #0
	add r1, r1, #66
	mov r0, #0
	strb r0, [r1]
_0801925A:
	ldr r1, _08019270  @ =gUnknown_08139970
	add r0, r4, #0
	bl 0x080098A0
	pop {r4-r6}
	pop {r0}
	bx r0
_08019268:
	.4byte 0x0000FFF6
_0801926C:
	.4byte gUnknown_08139AB0
_08019270:
	.4byte gUnknown_08139970
	THUMB_FUNC_END sub_080191D8

