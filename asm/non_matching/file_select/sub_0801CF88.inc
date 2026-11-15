	THUMB_FUNC_START sub_0801CF88
sub_0801CF88: @ 0x0801CF88
	push {r4,lr}
	add r4, r0, #0
	add r1, r4, #0
	add r1, r1, #112
	ldrh r0, [r1]
	cmp r0, #0
	beq _0801CF9C
	sub r0, r0, #1
	strh r0, [r1]
	b _0801D016
_0801CF9C:
	add r0, r4, #0
	mov r1, #104
	mov r2, #72
	bl 0x08009E6C
	cmp r0, #0
	bne _0801CFEC
	add r1, r4, #0
	add r1, r1, #115
	ldrb r0, [r1]
	cmp r0, #0
	beq _0801CFBA
	sub r0, r0, #1
	strb r0, [r1]
	b _0801D016
_0801CFBA:
	mov r0, #60
	strb r0, [r1]
	bl 0x0800099C
	add r2, r0, #0
	mov r0, #31
	and r2, r2, r0
	cmp r2, #0
	bne _0801D016
	mov r0, #2
	strb r0, [r4, #20]
	ldrb r1, [r4, #28]
	sub r0, r0, #6
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r4, #28]
	add r0, r4, #0
	add r0, r0, #42
	strb r2, [r0]
	add r0, r4, #0
	mov r1, #0
	bl 0x08003870
	b _0801D016
_0801CFEC:
	add r0, r4, #0
	mov r1, #14
	bl 0x0800997C
	lsl r1, r0, #24
	lsr r2, r1, #24
	mov r1, #128
	and r1, r1, r0
	cmp r1, #0
	beq _0801D016
	ldrb r0, [r4, #28]
	mov r1, #4
	neg r1, r1
	and r1, r1, r0
	mov r0, #1
	orr r1, r1, r0
	strb r1, [r4, #28]
	add r0, r4, #0
	add r1, r2, #0
	bl sub_0801D380
_0801D016:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801CF88

