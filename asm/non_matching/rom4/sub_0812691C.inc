	THUMB_FUNC_START sub_0812691C
sub_0812691C: @ 0x0812691C
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r0, _0812693C  @ =gRam
	ldr r1, _08126940  @ =0x0000096C
	add r0, r0, r1
	mov r1, #2
	strh r1, [r0]
	cmp r4, #2
	bne _08126948
	ldr r1, _08126944  @ =gUnknown_081807E0
	mov r0, #2
	mov r2, #1
	bl sub_08126420
	b _08126952
_0812693C:
	.4byte gRam
_08126940:
	.4byte 0x0000096C
_08126944:
	.4byte gUnknown_081807E0
_08126948:
	ldr r1, _081269A4  @ =gUnknown_081807D0
	add r0, r4, #0
	mov r2, #1
	bl sub_08126420
_08126952:
	add r0, r4, #0
	bl sub_08126544
	ldr r0, _081269A8  @ =gRam
	ldr r2, _081269AC  @ =0x000009AD
	add r0, r0, r2
	ldrb r0, [r0]
	cmp r0, #36
	beq _08126968
	cmp r0, #80
	bne _081269BC
_08126968:
	bl sub_08125FA0
	ldr r2, _081269B0  @ =gUnknown_03000050
	add r0, r2, #0
	add r0, r0, #32
	add r1, r4, r0
	ldrb r0, [r1]
	cmp r0, #80
	beq _081269C6
	add r0, r0, #1
	strb r0, [r1]
	add r1, r2, #0
	add r1, r1, #88
	add r1, r4, r1
	ldr r0, _081269B4  @ =gUnknown_08180950
	add r0, r4, r0
	ldrb r0, [r0]
	ldrb r3, [r1]
	add r0, r0, r3
	strb r0, [r1]
	add r1, r2, #0
	add r1, r1, #96
	add r1, r4, r1
	ldr r0, _081269B8  @ =gUnknown_08180953
	add r0, r4, r0
	ldrb r0, [r0]
	ldrb r2, [r1]
	add r0, r0, r2
	strb r0, [r1]
	b _081269C6
_081269A4:
	.4byte gUnknown_081807D0
_081269A8:
	.4byte gRam
_081269AC:
	.4byte 0x000009AD
_081269B0:
	.4byte gUnknown_03000050
_081269B4:
	.4byte gUnknown_08180950
_081269B8:
	.4byte gUnknown_08180953
_081269BC:
	ldr r0, _081269CC  @ =gUnknown_03000050
	add r0, r0, #32
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
_081269C6:
	pop {r4}
	pop {r0}
	bx r0
_081269CC:
	.4byte gUnknown_03000050
	THUMB_FUNC_END sub_0812691C

