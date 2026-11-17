	THUMB_FUNC_START sub_0801D4C8
sub_0801D4C8: @ 0x0801D4C8
	push {r4,lr}
	add r4, r0, #0
	bl sub_0800099C
	strb r0, [r4, #24]
	add r1, r4, #0
	add r1, r1, #46
	mov r0, #6
	strb r0, [r1]
	ldr r0, _0801D528  @ =gUnknown_0813A8D0
	str r0, [r4, #72]
	ldrh r1, [r4, #50]
	add r0, r4, #0
	add r0, r0, #124
	strh r1, [r0]
	ldrh r0, [r4, #54]
	add r1, r4, #0
	add r1, r1, #126
	strh r0, [r1]
	add r0, r4, #0
	add r0, r0, #82
	ldrb r0, [r0]
	ldrb r1, [r4, #11]
	bl sub_08012F84
	str r0, [r4, #112]
	str r0, [r4, #116]
	add r0, r4, #0
	bl sub_0801D764
	add r0, r4, #0
	mov r1, #0
	bl sub_08003870
	add r0, r4, #0
	add r0, r0, #110
	ldrh r0, [r0]
	cmp r0, #0
	beq _0801D52C
	mov r0, #1
	strb r0, [r4, #20]
	add r2, r4, #0
	add r2, r2, #60
	ldrb r1, [r2]
	mov r0, #127
	and r0, r0, r1
	strb r0, [r2]
	b _0801D53C
_0801D528:
	.4byte gUnknown_0813A8D0
_0801D52C:
	mov r0, #2
	strb r0, [r4, #20]
	ldrb r1, [r4, #28]
	sub r0, r0, #6
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r4, #28]
_0801D53C:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801D4C8

	.byte 0x00
	.byte 0x00
