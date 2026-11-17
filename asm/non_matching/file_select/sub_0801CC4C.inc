	THUMB_FUNC_START sub_0801CC4C
sub_0801CC4C: @ 0x0801CC4C
	push {r4,r5,lr}
	add r5, r0, #0
	mov r1, #80
	mov r2, #64
	bl sub_08009E6C
	add r1, r0, #0
	str r1, [r5, #88]
	ldrb r0, [r5, #23]
	sub r0, r0, #1
	strb r0, [r5, #23]
	lsl r0, r0, #24
	cmp r0, #0
	beq _0801CC6C
	cmp r1, #0
	beq _0801CCA6
_0801CC6C:
	cmp r1, #0
	bne _0801CC8C
	bl sub_0800099C
	ldr r4, _0801CCAC  @ =gUnknown_03006A30
	ldr r1, _0801CCB0  @ =gUnknown_03006C80
	ldrb r1, [r1]
	bl __umodsi3
	lsl r1, r0, #3
	add r1, r1, r0
	lsl r1, r1, #4
	add r4, r4, #40
	add r1, r1, r4
	ldr r0, [r1]
	str r0, [r5, #88]
_0801CC8C:
	mov r0, #2
	strb r0, [r5, #20]
	mov r0, #15
	strb r0, [r5, #23]
	mov r0, #60
	strb r0, [r5, #24]
	ldr r1, [r5, #88]
	add r0, r5, #0
	bl sub_0803CECC
	add r1, r5, #0
	add r1, r1, #43
	strb r0, [r1]
_0801CCA6:
	pop {r4,r5}
	pop {r0}
	bx r0
_0801CCAC:
	.4byte gUnknown_03006A30
_0801CCB0:
	.4byte gUnknown_03006C80
	THUMB_FUNC_END sub_0801CC4C

