	THUMB_FUNC_START sub_080B3E84
sub_080B3E84: @ 0x080B3E84
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	ldr r1, _080B3F44  @ =gUnknown_0816F702
	ldr r2, _080B3F48  @ =gRam
	ldr r3, _080B3F4C  @ =0x00000AB2
	add r0, r2, r3
	ldrh r0, [r0]
	lsr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r3, [r0]
	mov r0, #192
	lsl r0, r0, #2
	and r0, r0, r3
	mov r9, r1
	mov r8, r2
	ldr r7, _080B3F50  @ =gUnknown_0816EFC2
	cmp r0, #0
	beq _080B3F18
	mov r0, #128
	lsl r0, r0, #1
	and r0, r0, r3
	cmp r0, #0
	beq _080B3F18
	ldr r0, _080B3F54  @ =gUnknown_02000400
	ldrh r5, [r0]
	mov r3, #0
	ldr r2, _080B3F58  @ =gUnknown_0816F108
	lsl r0, r5, #1
	ldr r4, _080B3F5C  @ =gUnknown_02000402
	add r1, r0, r4
_080B3EC8:
	ldrh r0, [r2]
	strh r0, [r1]
	add r1, r1, #2
	add r5, r5, #1
	add r2, r2, #2
	add r3, r3, #1
	cmp r3, #21
	bne _080B3EC8
	mov r0, #150
	lsl r0, r0, #4
	add r0, r0, r8
	ldr r1, _080B3F60  @ =0x0000E144
	strh r1, [r0]
	mov r3, #16
	add r4, r0, #0
	lsl r0, r5, #1
	ldr r6, _080B3F5C  @ =gUnknown_02000402
	add r2, r0, r6
	ldr r1, _080B3F64  @ =0x00004008
	mov r10, r1
	add r6, r6, #2
	add r1, r0, r6
_080B3EF4:
	ldrh r0, [r4]
	strh r0, [r2]
	ldrh r0, [r4]
	add r0, r0, #64
	strh r0, [r4]
	mov r0, r10
	strh r0, [r1]
	ldr r6, _080B3F68  @ =0x0000622E
	add r0, r6, #0
	strh r0, [r1, #2]
	add r2, r2, #6
	add r1, r1, #6
	add r5, r5, #3
	sub r3, r3, #1
	cmp r3, #0
	bne _080B3EF4
	ldr r0, _080B3F54  @ =gUnknown_02000400
	strh r5, [r0]
_080B3F18:
	mov r3, #150
	lsl r3, r3, #4
	add r3, r3, r8
	mov r1, #0
	strh r1, [r3]
	ldr r0, _080B3F6C  @ =0x00000964
	add r0, r0, r8
	strh r1, [r0]
	ldr r0, _080B3F4C  @ =0x00000AB2
	add r0, r0, r8
	ldrh r0, [r0]
	lsr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r9
	ldrh r2, [r0]
	ldrb r0, [r0]
	lsl r1, r0, #16
	cmp r0, #79
	bls _080B3F70
	lsr r0, r1, #20
	sub r0, r0, #4
	b _080B3F78
_080B3F44:
	.4byte gUnknown_0816F702
_080B3F48:
	.4byte gRam
_080B3F4C:
	.4byte 0x00000AB2
_080B3F50:
	.4byte gUnknown_0816EFC2
_080B3F54:
	.4byte gUnknown_02000400
_080B3F58:
	.4byte gUnknown_0816F108
_080B3F5C:
	.4byte gUnknown_02000402
_080B3F60:
	.4byte 0x0000E144
_080B3F64:
	.4byte 0x00004008
_080B3F68:
	.4byte 0x0000622E
_080B3F6C:
	.4byte 0x00000964
_080B3F70:
	mov r0, #15
	and r0, r0, r2
	cmp r0, #4
	bls _080B3F7A
_080B3F78:
	strh r0, [r3]
_080B3F7A:
	mov r2, #150
	lsl r2, r2, #4
	add r2, r2, r8
	mov r1, #0
	ldrsh r0, [r2, r1]
	lsl r0, r0, #1
	add r0, r0, r7
	ldrh r1, [r0]
	strh r1, [r2]
	ldr r0, _080B4050  @ =0x0000097C
	add r0, r0, r8
	strh r1, [r0]
	ldr r0, _080B4054  @ =gUnknown_02000400
	ldrh r5, [r0]
	add r7, r2, #0
	ldr r2, _080B4058  @ =0x00000964
	add r2, r2, r8
	ldr r6, _080B405C  @ =0x00000968
	add r6, r6, r8
	lsl r0, r5, #1
	ldr r4, _080B4060  @ =gUnknown_02000402
	add r3, r0, r4
	ldr r0, _080B4064  @ =0x00000AB2
	add r0, r0, r8
	mov r9, r0
	mov r1, #128
	lsl r1, r1, #2
	mov r10, r1
	ldr r4, _080B4068  @ =0x0000E6BF
	mov r12, r4
_080B3FB6:
	ldrh r0, [r7]
	strh r0, [r3]
	add r3, r3, #2
	ldr r1, _080B406C  @ =0x00004008
	add r0, r1, #0
	strh r0, [r3]
	add r3, r3, #2
	add r5, r5, #2
	ldrh r0, [r2]
	lsl r0, r0, #16
	asr r0, r0, #17
	lsl r0, r0, #1
	ldr r4, _080B4070  @ =gUnknown_0816F0FA
	add r0, r0, r4
	ldrh r4, [r0]
	strh r4, [r6]
	mov r1, r9
	ldrh r0, [r1]
	lsr r0, r0, #1
	lsl r0, r0, #1
	ldr r1, _080B4074  @ =gUnknown_0816F702
	add r0, r0, r1
	ldrh r1, [r0]
	mov r0, r10
	and r0, r0, r1
	cmp r0, #0
	beq _080B3FF4
	mov r1, #128
	lsl r1, r1, #5
	add r0, r4, r1
	strh r0, [r6]
_080B3FF4:
	ldrh r0, [r6]
	strh r0, [r3]
	add r3, r3, #2
	add r5, r5, #1
	ldrh r1, [r2]
	mov r4, #0
	ldrsh r0, [r2, r4]
	cmp r0, #12
	beq _080B400A
	add r0, r1, #2
	strh r0, [r2]
_080B400A:
	ldrh r0, [r7]
	add r0, r0, #64
	strh r0, [r7]
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, r12
	bls _080B3FB6
	ldr r4, _080B4054  @ =gUnknown_02000400
	strh r5, [r4]
	ldr r0, _080B4064  @ =0x00000AB2
	add r0, r0, r8
	ldrh r0, [r0]
	bl sub_080B3C2C
	bl sub_080B3D5C
	ldrh r5, [r4]
	lsl r0, r5, #1
	ldr r6, _080B4060  @ =gUnknown_02000402
	add r0, r0, r6
	ldr r2, _080B4078  @ =0x0000FFFF
	add r1, r2, #0
	strh r1, [r0]
	ldr r1, _080B407C  @ =0x00000A5A
	add r1, r1, r8
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080B4050:
	.4byte 0x0000097C
_080B4054:
	.4byte gUnknown_02000400
_080B4058:
	.4byte 0x00000964
_080B405C:
	.4byte 0x00000968
_080B4060:
	.4byte gUnknown_02000402
_080B4064:
	.4byte 0x00000AB2
_080B4068:
	.4byte 0x0000E6BF
_080B406C:
	.4byte 0x00004008
_080B4070:
	.4byte gUnknown_0816F0FA
_080B4074:
	.4byte gUnknown_0816F702
_080B4078:
	.4byte 0x0000FFFF
_080B407C:
	.4byte 0x00000A5A
	THUMB_FUNC_END sub_080B3E84

