	THUMB_FUNC_START sub_0801A430
sub_0801A430: @ 0x0801A430
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #20]
	cmp r0, #1
	bne _0801A48A
	mov r0, #2
	strb r0, [r4, #20]
	ldr r3, [r4, #76]
	ldrb r0, [r3, #8]
	cmp r0, #1
	bne _0801A44A
	str r3, [r4, #100]
	b _0801A476
_0801A44A:
	ldr r1, _0801A468  @ =gUnknown_03006C80
	ldrb r0, [r3, #10]
	ldrb r1, [r1]
	cmp r0, r1
	bcs _0801A470
	ldr r2, _0801A46C  @ =gUnknown_03006A30
	add r1, r0, #0
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r2, r2, #40
	add r0, r0, r2
	ldr r0, [r0]
	b _0801A474
	.byte 0x00
	.byte 0x00
_0801A468:
	.4byte gUnknown_03006C80
_0801A46C:
	.4byte gUnknown_03006A30
_0801A470:
	bl sub_08044594
_0801A474:
	str r0, [r4, #100]
_0801A476:
	ldr r1, [r4, #76]
	add r0, r4, #0
	bl sub_0803CECC
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
	mov r0, #48
	bl 0x08003DFC
_0801A48A:
	ldr r1, _0801A498  @ =gUnknown_08139D1C
	add r0, r4, #0
	bl 0x080098A0
	pop {r4}
	pop {r0}
	bx r0
_0801A498:
	.4byte gUnknown_08139D1C
	THUMB_FUNC_END sub_0801A430

