	THUMB_FUNC_START sub_0801DD28
sub_0801DD28: @ 0x0801DD28
	push {r4,lr}
	add r4, r0, #0
	mov r1, #0
	bl sub_0801DEC0
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r2, r0, #24
	cmp r2, #0
	bne _0801DD6A
	mov r0, #2
	strb r0, [r4, #20]
	bl sub_0800099C
	ldr r2, _0801DD60  @ =gUnknown_0813AAFC
	mov r1, #3
	and r1, r1, r0
	add r1, r1, r2
	ldrb r0, [r1]
	strb r0, [r4, #23]
	ldr r1, [r4, #100]
	cmp r1, #0
	beq _0801DD64
	add r0, r4, #0
	bl sub_08009EA4
	b _0801DD8A
_0801DD60:
	.4byte gUnknown_0813AAFC
_0801DD64:
	bl sub_0800099C
	b _0801DD8C
_0801DD6A:
	ldr r0, [r4, #100]
	cmp r0, #0
	bne _0801DD96
	ldr r1, _0801DD9C  @ =gUnknown_0813AB00
	lsr r0, r2, #28
	add r0, r0, r1
	ldrb r2, [r0]
	add r0, r4, #0
	add r1, r2, #0
	bl sub_08009E6C
	add r1, r0, #0
	str r1, [r4, #100]
	add r0, r4, #0
	bl sub_0803CECC
_0801DD8A:
	add r0, r0, #4
_0801DD8C:
	mov r1, #24
	and r0, r0, r1
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
_0801DD96:
	pop {r4}
	pop {r0}
	bx r0
_0801DD9C:
	.4byte gUnknown_0813AB00
	THUMB_FUNC_END sub_0801DD28

