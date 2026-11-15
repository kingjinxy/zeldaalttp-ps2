	THUMB_FUNC_START sub_0802F1BC
sub_0802F1BC: @ 0x0802F1BC
	push {r4,lr}
	ldr r0, _0802F1D4  @ =gUnknown_02016D60
	ldrb r1, [r0]
	add r2, r0, #0
	cmp r1, #6
	bls _0802F1CA
	b _0802F2F8
_0802F1CA:
	lsl r0, r1, #2
	ldr r1, _0802F1D8  @ =0x0802F1DC
	add r0, r0, r1
	ldr r0, [r0]
	mov pc, r0
_0802F1D4:
	.4byte gUnknown_02016D60
_0802F1D8:
	.4byte 0x0802F1DC
	.4byte _0802F1F8
	.4byte _0802F212
	.4byte _0802F228
	.4byte _0802F278
	.4byte _0802F288
	.4byte _0802F29A
	.4byte _0802F2E0
_0802F1F8:
	ldrh r0, [r2, #4]
	sub r0, r0, #1
	strh r0, [r2, #4]
	lsl r0, r0, #16
	cmp r0, #0
	beq _0802F206
	b _0802F2F8
_0802F206:
	ldrb r0, [r2]
	add r0, r0, #1
	strb r0, [r2]
	mov r0, #4
	strb r0, [r2, #14]
	b _0802F2F8
_0802F212:
	ldr r1, _0802F220  @ =gUnknown_03000450
	ldr r0, _0802F224  @ =gUnknown_03006A30
	ldr r0, [r0, #40]
	str r0, [r1]
	mov r0, #120
	strh r0, [r2, #4]
	b _0802F2F8
_0802F220:
	.4byte gUnknown_03000450
_0802F224:
	.4byte gUnknown_03006A30
_0802F228:
	bl sub_0802FA94
	ldr r1, _0802F270  @ =gUnknown_02016D60
	ldrh r0, [r1, #4]
	sub r0, r0, #1
	strh r0, [r1, #4]
	lsl r0, r0, #16
	cmp r0, #0
	bne _0802F2F8
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r0, #5
	strb r0, [r1, #14]
	mov r0, #90
	mov r1, #1
	mov r2, #20
	bl sub_0804C8A8
	ldr r4, _0802F274  @ =gUnknown_03006A30
	ldr r1, [r4, #40]
	ldrh r1, [r1, #50]
	sub r1, r1, #16
	strh r1, [r0, #50]
	ldr r1, [r4, #40]
	ldrh r1, [r1, #54]
	sub r1, r1, #24
	strh r1, [r0, #54]
	mov r0, #0
	mov r1, #8
	mov r2, #8
	bl sub_08063D28
	mov r0, #8
	strb r0, [r4, #12]
	b _0802F2F8
_0802F270:
	.4byte gUnknown_02016D60
_0802F274:
	.4byte gUnknown_03006A30
_0802F278:
	bl sub_0802FA94
	ldr r1, _0802F284  @ =gUnknown_02016D60
	mov r0, #180
	strh r0, [r1, #4]
	b _0802F2F8
_0802F284:
	.4byte gUnknown_02016D60
_0802F288:
	ldrh r0, [r2, #4]
	sub r0, r0, #1
	strh r0, [r2, #4]
	lsl r0, r0, #16
	cmp r0, #0
	bne _0802F2F8
	ldrb r0, [r2]
	add r0, r0, #1
	b _0802F2F6
_0802F29A:
	ldr r0, _0802F2BC  @ =gUnknown_03000948
	ldrh r1, [r0]
	mov r0, #3
	and r0, r0, r1
	cmp r0, #0
	bne _0802F2F8
	ldrb r3, [r2, #12]
	cmp r3, #15
	bhi _0802F2C4
	ldr r0, _0802F2C0  @ =gUnknown_03000520
	mov r1, #1
	neg r1, r1
	str r1, [r0, #12]
	add r0, r3, #1
	strb r0, [r2, #12]
	b _0802F2F8
	.byte 0x00
	.byte 0x00
_0802F2BC:
	.4byte gUnknown_03000948
_0802F2C0:
	.4byte gUnknown_03000520
_0802F2C4:
	ldrb r0, [r2]
	add r0, r0, #1
	strb r0, [r2]
	mov r0, #90
	strh r0, [r2, #4]
	bl sub_0800D644
	ldr r0, _0802F2DC  @ =0x80040000
	bl play_sound
	b _0802F2F8
	.byte 0x00
	.byte 0x00
_0802F2DC:
	.4byte 0x80040000
_0802F2E0:
	ldrh r0, [r2, #4]
	sub r0, r0, #1
	strh r0, [r2, #4]
	lsl r0, r0, #16
	cmp r0, #0
	bne _0802F2F8
	ldr r0, _0802F300  @ =gSubState
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r0, #0
_0802F2F6:
	strb r0, [r2]
_0802F2F8:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0802F300:
	.4byte gSubState
	THUMB_FUNC_END sub_0802F1BC

