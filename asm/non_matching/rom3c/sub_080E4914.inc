	THUMB_FUNC_START sub_080E4914
sub_080E4914: @ 0x080E4914
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r7, r4, #0
	mov r0, #74
	add r1, r4, #0
	bl sub_080CA538
	add r5, r0, #0
	cmp r5, #0
	blt _080E4A22
	ldr r6, _080E4A2C  @ =gRam
	ldr r1, _080E4A30  @ =0x00000FB2
	add r0, r6, r1
	add r0, r4, r0
	ldrb r3, [r0]
	mov r2, #150
	lsl r2, r2, #4
	add r1, r6, r2
	ldr r0, _080E4A34  @ =gUnknown_0817736C
	add r0, r3, r0
	ldrb r0, [r0]
	ldrh r2, [r1]
	add r2, r2, r0
	ldr r0, _080E4A38  @ =gUnknown_08177370
	add r0, r3, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r2, r2, r0
	ldr r0, _080E4A3C  @ =0x00000964
	add r1, r6, r0
	ldr r0, _080E4A40  @ =gUnknown_08177374
	add r0, r3, r0
	ldrb r0, [r0]
	ldrh r1, [r1]
	add r1, r1, r0
	ldr r0, _080E4A44  @ =gUnknown_08177378
	add r3, r3, r0
	ldrb r0, [r3]
	lsl r0, r0, #8
	add r1, r1, r0
	ldr r3, _080E4A48  @ =0x00000EE2
	add r0, r6, r3
	add r0, r5, r0
	strb r2, [r0]
	add r3, r3, #32
	add r0, r6, r3
	add r0, r5, r0
	lsr r2, r2, #8
	strb r2, [r0]
	ldr r2, _080E4A4C  @ =0x00000ED2
	add r0, r6, r2
	add r0, r5, r0
	strb r1, [r0]
	sub r3, r3, #16
	add r0, r6, r3
	add r0, r5, r0
	lsr r1, r1, #8
	strb r1, [r0]
	lsl r4, r5, #24
	lsr r4, r4, #24
	add r0, r4, #0
	mov r1, #16
	bl sub_080C35FC
	ldr r1, _080E4A50  @ =0x00000F82
	add r0, r6, r1
	add r0, r5, r0
	mov r1, #1
	strb r1, [r0]
	add r0, r4, #0
	bl sub_080C2FA8
	ldr r2, _080E4A54  @ =0x0000097D
	add r1, r6, r2
	mov r0, #0
	ldrsb r0, [r1, r0]
	mov r2, #128
	and r0, r0, r2
	cmp r0, #0
	beq _080E49BC
	ldrb r0, [r1]
	neg r0, r0
	strb r0, [r1]
_080E49BC:
	ldr r3, _080E4A58  @ =0x0000097C
	add r4, r6, r3
	mov r0, #0
	ldrsb r0, [r4, r0]
	and r0, r0, r2
	cmp r0, #0
	beq _080E49D0
	ldrb r0, [r4]
	neg r0, r0
	strb r0, [r4]
_080E49D0:
	ldr r0, _080E4A5C  @ =0x00001152
	add r2, r6, r0
	add r2, r5, r2
	ldr r3, _080E4A60  @ =gUnknown_0817737C
	ldrb r0, [r4]
	ldrb r1, [r1]
	orr r0, r0, r1
	lsl r0, r0, #24
	asr r0, r0, #28
	add r0, r0, r3
	ldrb r0, [r0]
	strb r0, [r2]
	ldr r1, _080E4A64  @ =0x00001032
	add r2, r6, r1
	add r2, r5, r2
	ldrb r1, [r2]
	mov r0, #238
	and r0, r0, r1
	mov r1, #24
	orr r0, r0, r1
	strb r0, [r2]
	ldr r2, _080E4A68  @ =0x00001122
	add r0, r6, r2
	add r0, r5, r0
	mov r1, #8
	strb r1, [r0]
	ldr r3, _080E4A6C  @ =0x00000FD2
	add r0, r6, r3
	add r0, r5, r0
	mov r1, #255
	strb r1, [r0]
	ldr r1, _080E4A70  @ =0x00001022
	add r0, r6, r1
	add r0, r5, r0
	mov r1, #1
	neg r1, r1
	strb r1, [r0]
	add r0, r7, #0
	mov r1, #11
	bl sub_080CF140
_080E4A22:
	add r0, r5, #0
	pop {r4-r7}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_080E4A2C:
	.4byte gRam
_080E4A30:
	.4byte 0x00000FB2
_080E4A34:
	.4byte gUnknown_0817736C
_080E4A38:
	.4byte gUnknown_08177370
_080E4A3C:
	.4byte 0x00000964
_080E4A40:
	.4byte gUnknown_08177374
_080E4A44:
	.4byte gUnknown_08177378
_080E4A48:
	.4byte 0x00000EE2
_080E4A4C:
	.4byte 0x00000ED2
_080E4A50:
	.4byte 0x00000F82
_080E4A54:
	.4byte 0x0000097D
_080E4A58:
	.4byte 0x0000097C
_080E4A5C:
	.4byte 0x00001152
_080E4A60:
	.4byte gUnknown_0817737C
_080E4A64:
	.4byte 0x00001032
_080E4A68:
	.4byte 0x00001122
_080E4A6C:
	.4byte 0x00000FD2
_080E4A70:
	.4byte 0x00001022
	THUMB_FUNC_END sub_080E4914

