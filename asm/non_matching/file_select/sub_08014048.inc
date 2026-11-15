	THUMB_FUNC_START sub_08014048
sub_08014048: @ 0x08014048
	push {r4-r7,lr}
	add r5, r1, #0
	lsl r2, r2, #16
	lsr r7, r2, #16
	ldrb r0, [r0, #2]
	lsr r0, r0, #5
	sub r0, r0, #1
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r1, #128
	lsl r1, r1, #17
	lsl r1, r1, r0
	lsr r6, r1, #24
	ldr r0, _08014084  @ =gUnknown_03006C80
	add r4, r0, #0
	add r4, r4, #76
	ldrb r0, [r4]
	and r0, r0, r6
	cmp r0, #0
	beq _08014088
	mov r0, #16
	add r1, r7, #0
	add r2, r5, #0
	bl sub_08013EC0
	ldrb r0, [r4]
	bic r0, r0, r6
	strb r0, [r4]
	b _0801409C
	.byte 0x00
	.byte 0x00
_08014084:
	.4byte gUnknown_03006C80
_08014088:
	ldr r0, _080140A4  @ =gUnknown_08429C2C
	ldrb r1, [r5, #10]
	bl sub_08014180
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r1, r7, #0
	add r2, r5, #0
	bl sub_08013EC0
_0801409C:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080140A4:
	.4byte gUnknown_08429C2C
	THUMB_FUNC_END sub_08014048

