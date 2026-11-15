	THUMB_FUNC_START sub_08012B64
sub_08012B64: @ 0x08012B64
	push {r4-r7,lr}
	ldr r3, _08012BC4  @ =gUnknown_02016350
	lsl r0, r0, #29
	lsr r6, r0, #24
	mov r4, #0
	mov r5, #0
	mov r7, #224
	mov r2, #31
_08012B74:
	ldrb r1, [r3, #2]
	add r0, r7, #0
	and r0, r0, r1
	cmp r0, r6
	bne _08012B88
	add r0, r2, #0
	and r0, r0, r1
	cmp r0, #7
	bne _08012B88
	add r5, r5, #1
_08012B88:
	add r0, r4, #1
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r3, r3, #4
	cmp r4, #31
	bls _08012B74
	bl 0x0800099C
	add r1, r5, #0
	bl __umodsi3
	add r5, r0, #0
	ldr r3, _08012BC4  @ =gUnknown_02016350
	mov r4, #0
_08012BA4:
	ldrb r1, [r3, #2]
	mov r2, #224
	and r2, r2, r1
	cmp r2, r6
	bne _08012BD2
	mov r0, #31
	and r0, r0, r1
	cmp r0, #7
	bne _08012BD2
	cmp r5, #0
	bne _08012BC8
	strb r2, [r3, #2]
	mov r0, #16
	strb r0, [r3, #3]
	b _08012BD0
	.byte 0x00
	.byte 0x00
_08012BC4:
	.4byte gUnknown_02016350
_08012BC8:
	mov r1, #1
	add r0, r2, #0
	orr r0, r0, r1
	strb r0, [r3, #2]
_08012BD0:
	sub r5, r5, #1
_08012BD2:
	add r0, r4, #1
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r3, r3, #4
	cmp r4, #31
	bls _08012BA4
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08012B64

