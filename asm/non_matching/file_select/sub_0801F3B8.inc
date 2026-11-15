	THUMB_FUNC_START sub_0801F3B8
sub_0801F3B8: @ 0x0801F3B8
	push {r4-r6,lr}
	add r4, r0, #0
	ldr r2, _0801F41C  @ =gUnknown_03006A30
	ldr r0, _0801F420  @ =gUnknown_03000E20
	ldrh r0, [r0]
	mov r1, #3
	and r1, r1, r0
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r1, r2, #0
	add r1, r1, #40
	add r0, r0, r1
	ldr r3, [r0]
	cmp r3, #0
	beq _0801F454
	ldrb r0, [r3, #10]
	lsl r1, r0, #3
	add r1, r1, r0
	lsl r1, r1, #4
	add r1, r1, r2
	add r1, r1, #38
	ldrb r0, [r1]
	cmp r0, #0
	beq _0801F464
	ldrh r0, [r3, #50]
	ldrh r2, [r4, #50]
	sub r1, r0, r2
	add r1, r1, #18
	lsl r1, r1, #16
	lsr r1, r1, #16
	add r6, r0, #0
	add r5, r2, #0
	cmp r1, #36
	bhi _0801F428
	ldrh r2, [r3, #54]
	ldrh r1, [r4, #54]
	sub r0, r2, r1
	add r0, r0, #64
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #128
	bhi _0801F428
	lsl r1, r1, #16
	lsl r0, r2, #16
	cmp r1, r0
	ble _0801F424
	mov r0, #128
	b _0801F476
	.byte 0x00
	.byte 0x00
_0801F41C:
	.4byte gUnknown_03006A30
_0801F420:
	.4byte gUnknown_03000E20
_0801F424:
	mov r0, #144
	b _0801F476
_0801F428:
	sub r0, r6, r5
	add r0, r0, #64
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #128
	bhi _0801F454
	ldrh r0, [r3, #54]
	ldrh r1, [r4, #54]
	sub r0, r0, r1
	add r0, r0, #18
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #36
	bhi _0801F454
	lsl r1, r5, #16
	lsl r0, r6, #16
	cmp r1, r0
	ble _0801F450
	mov r0, #152
	b _0801F476
_0801F450:
	mov r0, #136
	b _0801F476
_0801F454:
	add r1, r4, #0
	add r1, r1, #118
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	cmp r0, #0
	beq _0801F468
_0801F464:
	mov r0, #0
	b _0801F476
_0801F468:
	add r0, r4, #0
	add r0, r0, #43
	ldrb r1, [r0]
	mov r0, #24
	and r0, r0, r1
	mov r1, #128
	orr r0, r0, r1
_0801F476:
	pop {r4-r6}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0801F3B8

