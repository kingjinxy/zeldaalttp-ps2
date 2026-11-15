	THUMB_FUNC_START sub_08111CC4
sub_08111CC4: @ 0x08111CC4
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r6, r0, #0
	ldr r1, _08111D28  @ =gRam
	ldr r2, _08111D2C  @ =0x00000FB2
	add r0, r1, r2
	add r0, r6, r0
	mov r3, #0
	mov r2, #2
	strb r2, [r0]
	ldr r2, _08111D30  @ =0x00000FC2
	add r0, r1, r2
	add r0, r6, r0
	mov r2, #48
	strb r2, [r0]
	ldr r0, _08111D34  @ =0x00000F92
	add r1, r1, r0
	add r1, r6, r1
	strb r3, [r1]
	ldr r0, _08111D38  @ =gUnknown_02010990
	strb r3, [r0]
	ldr r1, _08111D3C  @ =gUnknown_02010991
	mov r0, #16
	strb r0, [r1]
	ldr r0, _08111D40  @ =gUnknown_02010992
	strb r3, [r0]
	add r0, r0, #1
	strb r3, [r0]
	add r0, r0, #1
	strb r6, [r0]
	add r0, r0, #1
	strb r3, [r0]
	ldr r5, _08111D44  @ =gSword
	ldrb r0, [r5]
	cmp r0, #255
	bne _08111D1A
	add r4, r0, #0
	mov r0, #4
	strb r0, [r5]
	bl sub_081330EC
	strb r4, [r5]
_08111D1A:
	add r0, r6, #0
	bl sub_08113898
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08111D28:
	.4byte gRam
_08111D2C:
	.4byte 0x00000FB2
_08111D30:
	.4byte 0x00000FC2
_08111D34:
	.4byte 0x00000F92
_08111D38:
	.4byte gUnknown_02010990
_08111D3C:
	.4byte gUnknown_02010991
_08111D40:
	.4byte gUnknown_02010992
_08111D44:
	.4byte gSword
	THUMB_FUNC_END sub_08111CC4

