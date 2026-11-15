	THUMB_FUNC_START sub_080368D8
sub_080368D8: @ 0x080368D8
	push {r7,lr}
	mov r7, sp
	ldr r0, _08036918  @ =gUnknown_03000BF0
	ldr r1, [r0]
	mov r2, #128
	lsl r2, r2, #5
	add r0, r1, #0
	and r0, r0, r2
	cmp r0, #0
	bne _0803691C
	ldr r0, _08036918  @ =gUnknown_03000BF0
	ldr r1, [r0]
	mov r2, #128
	lsl r2, r2, #8
	add r0, r1, #0
	and r0, r0, r2
	cmp r0, #0
	beq _0803691C
	ldr r0, _08036918  @ =gUnknown_03000BF0
	ldr r1, [r0]
	lsr r0, r1, #8
	mov r1, #15
	and r0, r0, r1
	ldr r1, _08036918  @ =gUnknown_03000BF0
	ldr r2, [r1]
	mov r3, #15
	add r1, r2, #0
	and r1, r1, r3
	cmp r0, r1
	bne _0803691C
	b _0803693C
	.byte 0x00
	.byte 0x00
_08036918:
	.4byte gUnknown_03000BF0
_0803691C:
	bl sub_0800C4FC
	bl sub_0800C41C
	ldr r0, _08036944  @ =gUnknown_03000FC0
	ldrb r1, [r0, #1]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #1]
	ldr r0, _08036944  @ =gUnknown_03000FC0
	ldrb r1, [r0, #3]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #3]
_0803693C:
	pop {r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08036944:
	.4byte gUnknown_03000FC0
	THUMB_FUNC_END sub_080368D8

