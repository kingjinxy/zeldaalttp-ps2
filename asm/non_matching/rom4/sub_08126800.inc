	THUMB_FUNC_START sub_08126800
sub_08126800: @ 0x08126800
	push {r4,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r1, _08126824  @ =gUnknown_08180934
	add r1, r2, r1
	ldr r3, _08126828  @ =gUnknown_03000050
	add r0, r3, #0
	add r0, r0, #48
	add r0, r2, r0
	ldrb r1, [r1]
	ldrb r0, [r0]
	cmp r1, r0
	bcs _08126830
	add r0, r3, #0
	add r0, r0, #88
	add r0, r2, r0
	ldr r1, _0812682C  @ =gUnknown_0818093A
	b _08126838
_08126824:
	.4byte gUnknown_08180934
_08126828:
	.4byte gUnknown_03000050
_0812682C:
	.4byte gUnknown_0818093A
_08126830:
	add r0, r3, #0
	add r0, r0, #88
	add r0, r2, r0
	ldr r1, _08126858  @ =gUnknown_0818093D
_08126838:
	add r1, r2, r1
	ldrb r1, [r1]
	ldrb r4, [r0]
	add r1, r1, r4
	strb r1, [r0]
	add r0, r3, #0
	add r0, r0, #88
	add r1, r2, r0
	ldrb r0, [r1]
	cmp r0, #239
	beq _0812685C
	cmp r0, #17
	bne _08126860
	mov r0, #16
	b _0812685E
	.byte 0x00
	.byte 0x00
_08126858:
	.4byte gUnknown_0818093D
_0812685C:
	mov r0, #240
_0812685E:
	strb r0, [r1]
_08126860:
	ldr r0, _0812687C  @ =gUnknown_08180937
	add r0, r2, r0
	add r1, r3, #0
	add r1, r1, #72
	add r1, r2, r1
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bcs _08126884
	add r0, r3, #0
	add r0, r0, #96
	add r0, r2, r0
	ldr r1, _08126880  @ =gUnknown_0818093A
	b _0812688C
_0812687C:
	.4byte gUnknown_08180937
_08126880:
	.4byte gUnknown_0818093A
_08126884:
	add r0, r3, #0
	add r0, r0, #96
	add r0, r2, r0
	ldr r1, _081268AC  @ =gUnknown_0818093D
_0812688C:
	add r1, r2, r1
	ldrb r1, [r1]
	ldrb r4, [r0]
	add r1, r1, r4
	strb r1, [r0]
	add r0, r3, #0
	add r0, r0, #96
	add r1, r2, r0
	ldrb r0, [r1]
	cmp r0, #239
	beq _081268B0
	cmp r0, #17
	bne _081268B4
	mov r0, #16
	b _081268B2
	.byte 0x00
	.byte 0x00
_081268AC:
	.4byte gUnknown_0818093D
_081268B0:
	mov r0, #240
_081268B2:
	strb r0, [r1]
_081268B4:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08126800

	.byte 0x00
	.byte 0x00
