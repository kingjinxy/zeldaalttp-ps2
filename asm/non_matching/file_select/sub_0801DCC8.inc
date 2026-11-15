	THUMB_FUNC_START sub_0801DCC8
sub_0801DCC8: @ 0x0801DCC8
	push {r4,lr}
	add r4, r0, #0
	mov r1, #6
	mov r2, #0
	bl sub_0804411C
	cmp r0, #0
	beq _0801DD1E
	str r4, [r0, #84]
	str r0, [r4, #88]
	ldrb r1, [r4, #28]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r4, #28]
	add r1, r4, #0
	add r1, r1, #46
	mov r0, #5
	strb r0, [r1]
	add r2, r4, #0
	add r2, r2, #60
	ldrb r1, [r2]
	mov r0, #128
	orr r0, r0, r1
	strb r0, [r2]
	ldr r0, _0801DD24  @ =gUnknown_0813AC70
	str r0, [r4, #72]
	add r0, r4, #0
	bl sub_0801DF24
	add r1, r4, #0
	add r1, r1, #42
	mov r0, #255
	strb r0, [r1]
	bl 0x0800099C
	mov r1, #24
	and r0, r0, r1
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
_0801DD1E:
	pop {r4}
	pop {r0}
	bx r0
_0801DD24:
	.4byte gUnknown_0813AC70
	THUMB_FUNC_END sub_0801DCC8

