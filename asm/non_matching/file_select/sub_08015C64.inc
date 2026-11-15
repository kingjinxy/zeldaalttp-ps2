	THUMB_FUNC_START sub_08015C64
sub_08015C64: @ 0x08015C64
	push {r4,r5,lr}
	mov r3, #0
	ldr r4, _08015CB4  @ =gUnknown_02002440
	mov r5, #8
_08015C6C:
	ldr r2, [r4]
	cmp r2, #0
	beq _08015CCA
	ldrh r1, [r4, #6]
	sub r0, r1, #1
	strh r0, [r4, #6]
	lsl r0, r0, #16
	cmp r0, #0
	bne _08015CBE
	cmp r3, #0
	bne _08015CBC
	ldr r0, _08015CB8  @ =gUnknown_03000520
	ldrb r0, [r0]
	cmp r0, #0
	bne _08015C90
	ldr r0, [r2]
	bl sub_08015D04
_08015C90:
	ldr r0, [r4]
	add r0, r0, #4
	bl sub_08015CD0
	strh r0, [r4, #6]
	ldr r0, [r4]
	add r1, r0, #0
	add r1, r1, #8
	str r1, [r4]
	ldr r0, [r0, #8]
	cmp r0, #0
	bne _08015CB0
	ldr r0, [r1, #4]
	lsl r0, r0, #3
	sub r0, r1, r0
	str r0, [r4]
_08015CB0:
	mov r3, #1
	b _08015CBE
_08015CB4:
	.4byte gUnknown_02002440
_08015CB8:
	.4byte gUnknown_03000520
_08015CBC:
	strh r1, [r4, #6]
_08015CBE:
	add r4, r4, #8
	sub r0, r5, #1
	lsl r0, r0, #16
	lsr r5, r0, #16
	cmp r5, #0
	bne _08015C6C
_08015CCA:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08015C64

