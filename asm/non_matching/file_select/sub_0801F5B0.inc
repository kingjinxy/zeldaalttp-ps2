	THUMB_FUNC_START sub_0801F5B0
sub_0801F5B0: @ 0x0801F5B0
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #23]
	cmp r0, #0
	beq _0801F5C0
	sub r0, r0, #1
	strb r0, [r4, #23]
	b _0801F5FE
_0801F5C0:
	add r0, r4, #0
	mov r1, #96
	mov r2, #80
	bl 0x08009E6C
	add r1, r0, #0
	cmp r1, #0
	beq _0801F5FE
	str r1, [r4, #100]
	add r0, r4, #0
	bl sub_0803CECC
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
	mov r0, #2
	strb r0, [r4, #20]
	bl 0x0800099C
	ldr r2, _0801F604  @ =gUnknown_0813B12C
	mov r1, #7
	and r1, r1, r0
	add r1, r1, r2
	ldrb r0, [r1]
	strb r0, [r4, #23]
	mov r0, #64
	str r0, [r4, #12]
	add r1, r4, #0
	add r1, r1, #126
	mov r0, #8
	strb r0, [r1]
_0801F5FE:
	pop {r4}
	pop {r0}
	bx r0
_0801F604:
	.4byte gUnknown_0813B12C
	THUMB_FUNC_END sub_0801F5B0

