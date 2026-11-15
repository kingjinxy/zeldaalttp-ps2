	THUMB_FUNC_START sub_0802CEC4
sub_0802CEC4: @ 0x0802CEC4
	push {r4-r7,lr}
	mov r6, #0
	mov r4, #0
	ldr r5, _0802CF18  @ =gUnknown_03006C80
	ldrb r0, [r5]
	cmp r6, r0
	bcs _0802CF10
	ldr r7, _0802CF1C  @ =gUnknown_03006A58
_0802CED4:
	lsl r0, r4, #3
	add r0, r0, r4
	lsl r0, r0, #4
	add r0, r0, r7
	ldr r0, [r0]
	add r1, r0, #0
	add r1, r1, #69
	ldrb r0, [r1]
	cmp r0, #0
	beq _0802CF02
	add r1, r5, #0
	add r1, r1, #100
	add r1, r4, r1
	ldrb r1, [r1]
	lsl r1, r1, #1
	cmp r0, r1
	bgt _0802CF02
	bl 0x08004710
	ldr r1, [r5, #8]
	cmp r0, r1
	bls _0802CF02
	mov r6, #1
_0802CF02:
	add r0, r4, #1
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _0802CF18  @ =gUnknown_03006C80
	ldrb r0, [r5]
	cmp r4, r0
	bcc _0802CED4
_0802CF10:
	add r0, r6, #0
	pop {r4-r7}
	pop {r1}
	bx r1
_0802CF18:
	.4byte gUnknown_03006C80
_0802CF1C:
	.4byte gUnknown_03006A58
	THUMB_FUNC_END sub_0802CEC4

