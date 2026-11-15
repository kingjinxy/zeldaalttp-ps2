	THUMB_FUNC_START sub_08112AE4
sub_08112AE4: @ 0x08112AE4
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	add r5, r3, #0
	ldr r4, _08112B0C  @ =gRam
	ldr r1, _08112B10  @ =0x000010C2
	add r0, r4, r1
	add r0, r3, r0
	ldrb r2, [r0]
	cmp r2, #0
	beq _08112B1C
	ldr r1, _08112B14  @ =gUnknown_02010990
	mov r0, #5
	strb r0, [r1]
	ldr r7, _08112B18  @ =0x00000F92
	add r0, r4, r7
	add r0, r3, r0
	mov r1, #0
	strb r1, [r0]
	b _08112B86
_08112B0C:
	.4byte gRam
_08112B10:
	.4byte 0x000010C2
_08112B14:
	.4byte gUnknown_02010990
_08112B18:
	.4byte 0x00000F92
_08112B1C:
	mov r6, #192
	ldr r0, _08112B44  @ =gUnknown_02010992
	mov r12, r0
	ldrb r1, [r0]
	cmp r1, #3
	bne _08112B2A
	mov r6, #128
_08112B2A:
	ldr r7, _08112B48  @ =0x00001022
	add r0, r4, r7
	add r0, r3, r0
	ldrb r0, [r0]
	cmp r0, r6
	bcs _08112B4C
	add r0, r1, #1
	mov r1, r12
	strb r0, [r1]
	add r0, r3, #0
	bl sub_08113108
	b _08112B86
_08112B44:
	.4byte gUnknown_02010992
_08112B48:
	.4byte 0x00001022
_08112B4C:
	mov r1, #8
	ldr r3, _08112B8C  @ =0x00000F62
	add r0, r4, r3
	add r0, r5, r0
	strb r2, [r0]
	ldr r7, _08112B90  @ =0x00000F92
	add r0, r4, r7
	add r0, r5, r0
	strb r2, [r0]
	sub r3, r3, #16
	add r0, r4, r3
	add r0, r5, r0
	strb r2, [r0]
	add r7, r7, #48
	add r0, r4, r7
	add r0, r5, r0
	strb r1, [r0]
	ldr r0, _08112B94  @ =gUnknown_02010990
	strb r2, [r0]
	add r0, r0, #3
	strb r2, [r0]
	ldr r0, _08112B98  @ =0x00000EA5
	add r1, r4, r0
	add r1, r5, r1
	ldrb r2, [r1]
	mov r0, #240
	and r0, r0, r2
	add r0, r0, #5
	strb r0, [r1]
_08112B86:
	pop {r4-r7}
	pop {r0}
	bx r0
_08112B8C:
	.4byte 0x00000F62
_08112B90:
	.4byte 0x00000F92
_08112B94:
	.4byte gUnknown_02010990
_08112B98:
	.4byte 0x00000EA5
	THUMB_FUNC_END sub_08112AE4

