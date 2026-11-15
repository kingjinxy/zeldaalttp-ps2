	THUMB_FUNC_START sub_0801F9D4
sub_0801F9D4: @ 0x0801F9D4
	push {r4,lr}
	add r4, r0, #0
	ldr r0, [r4, #88]
	cmp r0, #0
	beq _0801F9EC
	add r1, r0, #0
	add r1, r1, #61
	ldrb r0, [r1]
	cmp r0, #0
	bne _0801F9EC
	mov r0, #244
	strb r0, [r1]
_0801F9EC:
	ldrb r0, [r4, #20]
	cmp r0, #2
	bhi _0801F9FE
	mov r0, #3
	strb r0, [r4, #20]
	add r0, r4, #0
	mov r1, #12
	bl sub_0801FCC4
_0801F9FE:
	ldr r1, _0801FA0C  @ =gUnknown_0813B22C
	add r0, r4, #0
	bl 0x080098A0
	pop {r4}
	pop {r0}
	bx r0
_0801FA0C:
	.4byte gUnknown_0813B22C
	THUMB_FUNC_END sub_0801F9D4

