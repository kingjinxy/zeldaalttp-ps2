	THUMB_FUNC_START sub_08113EA4
sub_08113EA4: @ 0x08113EA4
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	cmp r1, #0
	beq _08113F10
	ldr r3, _08113EF8  @ =gShield
	ldrb r0, [r3]
	cmp r0, #0
	beq _08113F10
	ldr r4, _08113EFC  @ =gRam
	ldr r1, _08113F00  @ =0x00000F52
	add r0, r4, r1
	add r0, r5, r0
	mov r2, #0
	mov r1, #2
	strb r1, [r0]
	ldr r1, _08113F04  @ =0x00000FC2
	add r0, r4, r1
	add r0, r5, r0
	mov r1, #255
	strb r1, [r0]
	ldr r0, _08113F08  @ =0x00001002
	add r4, r4, r0
	add r4, r5, r4
	ldrb r0, [r3]
	strb r0, [r4]
	strb r2, [r3]
	add r0, r5, #0
	mov r1, #93
	bl sub_080CF140
	ldrb r0, [r4]
	cmp r0, #3
	bne _08113F26
	ldr r1, _08113F0C  @ =gUnknown_020023F1
	ldrb r0, [r1]
	cmp r0, #0
	bne _08113F26
	mov r0, #1
	strb r0, [r1]
	b _08113F26
	.byte 0x00
	.byte 0x00
_08113EF8:
	.4byte gShield
_08113EFC:
	.4byte gRam
_08113F00:
	.4byte 0x00000F52
_08113F04:
	.4byte 0x00000FC2
_08113F08:
	.4byte 0x00001002
_08113F0C:
	.4byte gUnknown_020023F1
_08113F10:
	ldr r2, _08113F4C  @ =gRam
	ldr r1, _08113F50  @ =0x00000F52
	add r0, r2, r1
	add r0, r5, r0
	mov r1, #0
	strb r1, [r0]
	ldr r0, _08113F54  @ =0x00000FD2
	add r2, r2, r0
	add r2, r5, r2
	mov r0, #191
	strb r0, [r2]
_08113F26:
	ldr r2, _08113F4C  @ =gRam
	ldr r0, _08113F58  @ =0x00001032
	add r1, r2, r0
	add r1, r5, r1
	ldrb r3, [r1]
	mov r0, #191
	and r0, r0, r3
	mov r3, #0
	strb r0, [r1]
	ldr r1, _08113F5C  @ =0x00001718
	add r0, r2, r1
	strb r3, [r0]
	ldr r0, _08113F60  @ =0x0000180D
	add r2, r2, r0
	strb r3, [r2]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08113F4C:
	.4byte gRam
_08113F50:
	.4byte 0x00000F52
_08113F54:
	.4byte 0x00000FD2
_08113F58:
	.4byte 0x00001032
_08113F5C:
	.4byte 0x00001718
_08113F60:
	.4byte 0x0000180D
	THUMB_FUNC_END sub_08113EA4

