	THUMB_FUNC_START sub_08026C50
sub_08026C50: @ 0x08026C50
	push {r4,r5,lr}
	add r4, r0, #0
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	lsr r5, r0, #24
	cmp r5, #0
	bne _08026CAC
	ldrb r3, [r4, #11]
	add r0, r3, #0
	cmp r0, #255
	beq _08026C88
	ldr r0, _08026CB4  @ =gUnknown_0201F000
	add r1, r4, #0
	add r1, r1, #82
	ldrb r2, [r1]
	lsl r2, r2, #2
	add r2, r2, r0
	ldr r1, _08026CB8  @ =gUnknown_08137B10
	mov r0, #31
	and r0, r0, r3
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r2]
	ldr r0, [r0]
	orr r1, r1, r0
	str r1, [r2]
_08026C88:
	ldrb r1, [r4, #11]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	bne _08026C98
	mov r0, #16
	bl play_sound
_08026C98:
	ldrb r0, [r4, #22]
	cmp r0, #0
	beq _08026CA6
	ldr r0, _08026CBC  @ =gUnknown_03006C80
	strh r5, [r0, #38]
	bl sub_0803A20C
_08026CA6:
	add r0, r4, #0
	bl DeleteThisEntity
_08026CAC:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08026CB4:
	.4byte gUnknown_0201F000
_08026CB8:
	.4byte gUnknown_08137B10
_08026CBC:
	.4byte gUnknown_03006C80
	THUMB_FUNC_END sub_08026C50

